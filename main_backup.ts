import Parser, { Edit } from "web-tree-sitter";
import { inspect } from "util";
import { performance, PerformanceObserver } from "perf_hooks";

type Bindings = Map<string, Parser.SyntaxNode>;
interface IRule {
  left: Parser.Tree;
  right: Parser.Tree;
}

const compare = (
  pat: Parser.SyntaxNode,
  base: Parser.SyntaxNode
): Bindings | null => {
  performance.mark("structuralMatchStart");
  if (pat.hasError() || base.hasError()) return null;

  if (pat.type !== base.type) {
    if (pat.type === "metavar") {
      return new Map([[pat.text, base]]);
    }
    return null;
  }
  if (pat.childCount === 0) return pat.text === base.text ? new Map() : null;

  let bindings: Bindings = new Map();
  for (let i = 0; i < pat.childCount; i++) {
    const a_child = pat.child(i);
    const b_child = base.child(i);
    if (a_child === null || b_child === null) return null;
    const m = compare(a_child, b_child);
    if (m === null) return null;
    m.forEach((v, k) => bindings.set(k, v));
  }
  performance.mark("structuralMatchEnd");
  performance.measure(
    "structuralMatch",
    "structuralMatchStart",
    "structuralMatchEnd"
  );
  return bindings;
};

const performanceObserver = new PerformanceObserver((list, observer) => {
  const entries = list.getEntries();
  entries.forEach((entry) => {
    console.log(">>", entry.name, `[${entry.duration.toPrecision(3)}ms]`);
  });
  observer.disconnect();
});

performanceObserver.observe({
  entryTypes: ["measure"],
  buffered: true,
});

performance.mark("treesitterInitStart");
Parser.init().then(async () => {
  performance.mark("treesitterInitFinish");
  performance.measure(
    "treesitterInit",
    "treesitterInitStart",
    "treesitterInitFinish"
  );

  /* the library is ready */
  const parser = new Parser();
  const L = await Parser.Language.load("./parser/tree-sitter-TestLang.wasm");
  parser.setLanguage(L);

  const fillIn = (expr: Parser.Tree, bindings: Bindings): Parser.Tree => {
    let q = L.query(`(
    (metavar (identifier) @varname)
    (#match? @varname "[${Array.from(bindings?.keys() || []).join("|")}]")
    )`);
    performance.mark("fillStart");
    let metavarMatches = q.matches(expr.rootNode);
    let newTree = expr;

    // It's important we're replacing backwards by-index,
    // so that edits don't effect the other indices
    let newText = newTree.rootNode.text;
    metavarMatches.reverse().forEach((match) => {
      match.captures.reverse().forEach((capture) => {
        const { startIndex, startPosition, endIndex, endPosition } =
          capture.node;
        const newVal = bindings?.get("$" + capture.node.text)!.text || null;
        if (newVal) {
          newText =
            newText.substring(0, startIndex - 1) +
            newVal +
            newText.substring(endIndex);
          newTree.edit({
            startIndex: startIndex - 1,
            oldEndIndex: endIndex,
            newEndIndex: startIndex + newVal.length,
            startPosition: {
              ...startPosition,
              column: startPosition.column - 1,
            },
            oldEndPosition: endPosition,
            newEndPosition: {
              row: endPosition.row,
              column: endPosition.column - "$a".length + newVal.length,
            },
          });
        } else {
          throw "Should never get here!";
        }
      });
    });
    performance.mark("fillEnd");
    performance.measure("fill", "fillStart", "fillEnd");
    return parser.parse(newText, newTree);
  };

  const rules: IRule[] = [
    {
      left: parser.parse(`$a == $b`),
      right: parser.parse(`$b == $a`),
    },
    {
      left: parser.parse(`$a + $b`),
      right: parser.parse(`$b + $a`),
    },
  ];

  const input = `a.f == 10 + 5`;
  const tree = parser.parse(input);

  rules.forEach((rule) => {
    const bindings = compare(rule.left.rootNode, tree.rootNode);
    if (bindings) {
      bindings?.forEach((v, k) => console.log(k, ":", v.text));
      console.log(fillIn(rule.right, bindings).rootNode.text);
    }
  });
});
