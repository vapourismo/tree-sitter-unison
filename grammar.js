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
      $.use_statement
    ),

    namespace: $ => choice("Nat", "Int"),

    regular_identifier: _ => /([A-Za-z_]|\p{Emoji_Presentation})([A-Za-z0-9_!']|\p{Emoji_Presentation})*/,

    operator: _ => /[!$%^&*\-=+<>.~\\/|:]+/,

    identifier: $ => choice($.regular_identifier, $.operator),

    qualified_identifier: $ => seq(
      repeat(seq($.regular_identifier, ".")),
      $.identifier,
    ),

    use_statement: $ => seq(
      $._start_mark,
      "use",
      $.qualified_identifier,
      repeat($.identifier),
      $._end_mark
    )
  }
})
