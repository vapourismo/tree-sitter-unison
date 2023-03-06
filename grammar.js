module.exports = grammar({
  name: "unison",

  externals: $ => [
    $._start_mark,
    $._end_mark,
    $._newline
  ],

  extras: $ => [
    " ",
    "\t",
    "\r",
    "\v",
    "\f",
    $._newline
  ],

  rules: {
    source_file: $ => repeat($._toplevel),

    // Identifier, name, namespace

    _identifier_suffix_char: $ => choice(
      token.immediate(/[A-Za-z0-9_!']/),
      token.immediate(/\p{Emoji_Presentation}/)
    ),

    uppercase_identifier: $ => prec.right(seq(
      choice(/[A-Z]/, /\p{Emoji_Presentation}/),
      repeat($._identifier_suffix_char)
    )),

    lowercase_identifier: $ => prec.right(seq(
      /[a-z]/,
      repeat($._identifier_suffix_char)
    )),

    regular_identifier: $ => choice(
      $.uppercase_identifier,
      $.lowercase_identifier
    ),

    operator: _ => /[!$%^&*\-=+<>~\\/|:.]+/,

    identifier: $ => choice(
      $.regular_identifier,
      $.operator
    ),

    namespace: $ => prec.left(11, seq(
      optional(seq($.namespace, ".")),
      $.regular_identifier
    )),

    qualified_identifier: $ => seq(
      optional(seq($.namespace, ".")),
      $.identifier,
    ),

    uppercase_qualified_identifier: $ => seq(
      optional(seq($.namespace, ".")),
      $.uppercase_identifier,
    ),

    qualified_operator: $ => seq(
      optional(seq($.namespace, ".")),
      $.operator,
    ),

    // Toplevel item

    _toplevel: $ => choice(
      $.use_statement,
      $.declaration
    ),

    use_statement: $ => seq(
      $._start_mark,
      "use",
      field("namespace", $.qualified_identifier),
      repeat(field("import", $.identifier)),
      $._end_mark
    ),

    declaration: $ => seq(
      $._start_mark,
      $.qualified_identifier,
      ":",
      $.type,
      $._end_mark
    ),

    // Type

    type_variable: $ => $.lowercase_identifier,

    type_constructor: $ => $.uppercase_qualified_identifier,

    type_unit: _ => seq("(", ")"),

    type_operator: $ => seq(
      "(",
      $.qualified_operator,
      ")"
    ),

    type_infix: $ => prec.right(1, seq(
      field("left", $.type),
      field("operator", $.qualified_operator),
      optional(field("ability", $.type_ability)),
      field("right", $.type)
    )),

    type_lazy: $ => seq(
      "'",
      optional(field("ability", $.type_ability)),
      $.type
    ),

    type_parens: $ => seq(
      "(",
      $.type,
      ")"
    ),

    type_forall: $ => seq(
      "forall",
      repeat1(field("variable", $.type_variable)),
      ".",
      $.type
    ),

    type_tuple: $ => seq(
      "(",
      $.type,
      repeat1(seq(",", $.type)),
      ")"
    ),

    type_apply: $ => prec.left(10, seq(
      field("function", $.type),
      field("parameter", $.type)
    )),

    type_ability: $ => seq(
      "{",
      $.type,
      repeat(seq(",", $.type)),
      "}"
    ),

    type: $ => choice(
      $.type_forall,
      $.type_infix,
      $.type_constructor,
      $.type_variable,
      $.type_unit,
      $.type_operator,
      $.type_lazy,
      $.type_tuple,
      $.type_parens,
      $.type_apply
    ),
  }
})
