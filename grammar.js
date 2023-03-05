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

    _toplevel: $ => choice(
      $.use_statement,
      $.declaration
    ),

    uppercase_identifier: _ => /([A-Z]|\p{Emoji_Presentation})([A-Za-z0-9_!']|\p{Emoji_Presentation})*/,

    lowercase_identifier: _ => /([a-z]|\p{Emoji_Presentation})([A-Za-z0-9_!']|\p{Emoji_Presentation})*/,

    regular_identifier: _ => /([A-Za-z_]|\p{Emoji_Presentation})([A-Za-z0-9_!']|\p{Emoji_Presentation})*/,

    operator: _ => /[!$%^&*\-=+<>.~\\/|:]+/,

    identifier: $ => choice($.regular_identifier, $.operator),

    qualified_identifier: $ => seq(
      repeat(seq($.regular_identifier, ".")),
      $.identifier,
    ),

    qualified_operator: $ => seq(
      repeat(seq($.regular_identifier, ".")),
      $.operator,
    ),

    use_statement: $ => seq(
      $._start_mark,
      "use",
      $.qualified_identifier,
      repeat($.identifier),
      $._end_mark
    ),

    declaration: $ => seq(
      $._start_mark,
      $.qualified_identifier,
      ":",
      $.type,
      $._end_mark
    ),

    type_variable: $ => $.lowercase_identifier,

    type_constructor: $ => $.uppercase_identifier,

    type_unit: _ => seq("(", ")"),

    type_operator: $ => seq(
      "(",
      $.qualified_operator,
      ")"
    ),

    type: $ => $._type2,

    _type1: $ => repeat1(choice(
      $.type_variable,
      $.type_constructor,
      $.type_unit,
      $.type_operator,
      seq("'", optional($.ability), $._type1),
      seq("(", $._type_or_tuple_contents, ")"),
    )),

    _type_or_tuple_contents: $ => seq(
      $.type,
      repeat(seq(",", $.type))
    ),

    _type2: $ => prec.right(2, seq(
      $._type1,
      repeat(seq($.qualified_operator, optional($.ability), $._type1))
    )),

    ability: $ => seq(
      "{",
      $.type,
      repeat(seq(",", $.type)),
      "}"
    )
  }
})