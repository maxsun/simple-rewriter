import Parser, { Edit } from "web-tree-sitter";
import { inspect } from "util";
import { performance, PerformanceObserver } from "perf_hooks";

type Bindings = Map<string, Parser.SyntaxNode>;
interface IRule {
  left: Parser.Tree;
  right: Parser.Tree;
}

interface TSCtx {
  L: Parser.Language;
  parser: Parser;
}

const performanceObserver = new PerformanceObserver((list, observer) => {
  const entries = list.getEntries();
  entries.forEach((entry) => {
    console.log(">>", entry.name, `[${entry.duration.toPrecision(3)}ms]`);
  });
  observer.disconnect();
});

// performanceObserver.observe({
//   entryTypes: ["measure"],
//   buffered: true,
// });

const structuralMatch = (
  ctx: TSCtx,
  pat: Parser.SyntaxNode,
  base: Parser.SyntaxNode
): Bindings => {
  performance.mark("(match");
  const queryText =
    pat
      ?.toString() // todo: replace all metavars
      .replace("(metavar (identifier))", "_@a")
      .replace("(metavar (identifier))", "_@b") + "@m";
  const bindings = new Map();
  ctx.L.query(queryText)
    .matches(base)
    .forEach((match) =>
      match.captures.forEach((capture) =>
        bindings.set(capture.name, capture.node)
      )
    );
  performance.mark("match)");
  performance.measure("match", "(match", "match)");
  return bindings;
};

const fillIn = (
  ctx: TSCtx,
  expr: Parser.Tree,
  bindings: Bindings
): Parser.Tree => {
  let q = ctx.L.query(`(
  (metavar (identifier))@varname
  (#match? @varname "[${Array.from(bindings.keys() || [])
    .map((x) => "$" + x)
    .join("|")}]")
  )`);
  performance.mark("fillStart");
  let metavarMatches = q.matches(expr.rootNode);
  let newTree = expr;

  let newText = newTree.rootNode.text;
  metavarMatches.reverse().forEach((match) => {
    match.captures.reverse().forEach((capture) => {
      const newVal =
        bindings.get(capture.node.text.replace("$", ""))!.text || null;
      if (newVal) {
        newText = prepareEdit(newText, capture.node, newVal, newTree);
      } else {
        throw "Should never get here!";
      }
    });
  });
  performance.mark("fillEnd");
  performance.measure("fill", "fillStart", "fillEnd");
  return ctx.parser.parse(newText, newTree);
};

const prepareEdit = (
  baseText: string,
  originalNode: Parser.SyntaxNode,
  newText: string,
  nt: Parser.Tree
) => {
  const { startPosition, endPosition, startIndex, endIndex, text } =
    originalNode;

  baseText =
    baseText.substring(0, originalNode.startIndex) +
    newText +
    baseText.substring(originalNode.endIndex);

  nt.edit({
    startIndex: startIndex,
    oldEndIndex: endIndex,
    newEndIndex: startIndex + newText.length,
    startPosition: startPosition,
    oldEndPosition: endPosition,
    newEndPosition: {
      row: endPosition.row,
      column: endPosition.column - text.length + newText.length,
    },
  });
  return baseText;
};

performance.mark("(ts_init");
Parser.init().then(async () => {
  performance.mark("ts_init)");
  performance.measure("ts_init", "(ts_init", "ts_init)");

  const parser = new Parser();
  const L = await Parser.Language.load("./parser/tree-sitter-TestLang.wasm");
  parser.setLanguage(L);
  const ctx = { L, parser };

  const rules: IRule[] = [
    // {
    //   left: parser.parse(`$a == $b`),
    //   right: parser.parse(`$b == $a`),
    // },
    // {
    //   left: parser.parse(`$a + $b`),
    //   right: parser.parse(`$b + $a`),
    // },
    // {
    //   left: parser.parse(`$a | $b`),
    //   right: parser.parse(`$b | $a`),
    // },
    {
      left: parser.parse(`$a & $b`),
      right: parser.parse(`$b & $a`),
    },
  ];

  const input = `$a | False & True`;
  const tree = parser.parse(input);
  // console.log(tree.rootNode.toString());
  console.log(tree.rootNode.text);
  console.log("-".repeat(30));

  rules.forEach((rule) => {
    console.log("* matching against:", rule.left.rootNode.text);
    const bindings = structuralMatch(
      ctx,
      rule.left.rootNode.child(0)!,
      tree.rootNode
    );

    if (bindings.size > 0) {
      // bindings?.forEach((v, k) => console.log(k, ":", v.text));
      const { startPosition, endPosition, startIndex, endIndex, text } =
        bindings.get("m")!;

      const filledRhs = fillIn(ctx, rule.right, bindings);
      let nt = tree.copy();
      const newText = prepareEdit(
        tree.rootNode.text,
        tree.rootNode,
        filledRhs.rootNode.text,
        nt
      );

      nt = parser.parse(newText, nt);
      console.log("new tree:", nt.rootNode.text);
    }
  });
});
