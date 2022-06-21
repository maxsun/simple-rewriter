module.exports = grammar({
  name: "TestLang",
  // word: ($) => $.identifier,
  // https://tree-sitter.github.io/tree-sitter/creating-parsers#keyword-extraction
  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) =>
      choice($._bool_expr, $._statement, $._expression, $._assertion),
    identifier: ($) => /[a-z]+/,
    metavar: ($) => seq(/\$/, $.identifier),
    num_literal: ($) => /[0-9]+/,
    field_lookup: ($) => seq($.identifier, /\./, $.identifier),
    field_update: ($) =>
      seq(choice($.field_lookup, $.metavar), "=", $._expression),
    emp: ($) => "emp",
    singleton_heap: ($) => seq($.identifier, /->/, $.identifier),
    binary_assertion: ($) =>
      choice(
        prec.left(2, seq($._assertion, "*", $._assertion))
        // ...
      ),
    _assertion: ($) => choice($.emp, $.singleton_heap, $.binary_assertion),
    _statement: ($) => choice($.if_stmt, $.while_stmt),
    _expression: ($) =>
      choice(
        $.allocate_expression,
        $.deallocate_expression,
        $.field_lookup,
        $.field_update,
        $.metavar,
        $.identifier,
        $.num_literal,
        $.list_expression,
        $.block_expression,
        $.paren_expression,
        $.unary_expression,
        $.binary_expression
        // ...
      ),

    bool_literal: ($) => choice("True", "False"),

    logical_eq_sign: ($) => "==",
    logical_and_sign: ($) => "&",
    logical_or_sign: ($) => "|",
    bool_binary_expression: ($) =>
      choice(
        prec.left(1, seq($._expression, $.logical_eq_sign, $._expression)),
        prec.left(
          1,
          seq(
            choice($._bool_expr, $.metavar),
            choice($.logical_and_sign, $.logical_or_sign),
            choice($._bool_expr, $.metavar)
          )
        )
        // ...
      ),
    bool_unary_expression: ($) =>
      choice(
        prec.left(2, seq("!", choice($._bool_expr, $.metavar)))
        // ...
      ),
    _bool_expr: ($) =>
      choice($.bool_literal, $.bool_unary_expression, $.bool_binary_expression),

    sum_sign: ($) => "+",
    binary_expression: ($) =>
      choice(
        prec.left(2, seq($._expression, "*", $._expression)),
        prec.right(1, seq($._expression, $.sum_sign, $._expression))
        // ...
      ),
    list_expression: ($) =>
      seq(/\[/, seq($._expression, repeat(seq(/,/, $._expression))), /\]/),
    block_expression: ($) => seq(/\{/, repeat(seq($._expression, /;/)), /\}/),
    allocate_expression: ($) => seq("new", $._expression),
    deallocate_expression: ($) => seq("dispose", $._expression),
    if_stmt: ($) => seq("if", $.block_expression),
    while_stmt: ($) => seq("while", $.block_expression),
    while_stmt: ($) => seq("while", $.block_expression),
    paren_expression: ($) => seq(/\(/, $._expression, /\)/),
    unary_expression: ($) => choice(prec.right(2, seq("!", $._expression))),
  },
});
