#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 12

enum {
  sym_uppercase_identifier = 1,
  sym_lowercase_identifier = 2,
  sym_regular_identifier = 3,
  sym_operator = 4,
  anon_sym_DOT = 5,
  anon_sym_use = 6,
  anon_sym_COLON = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_SQUOTE = 10,
  anon_sym_forall = 11,
  anon_sym_COMMA = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  sym__start_mark = 15,
  sym__end_mark = 16,
  sym__newline = 17,
  sym_source_file = 18,
  sym_identifier = 19,
  sym_namespace = 20,
  sym_qualified_identifier = 21,
  sym_uppercase_qualified_identifier = 22,
  sym_qualified_operator = 23,
  sym__toplevel = 24,
  sym_use_statement = 25,
  sym_declaration = 26,
  sym_type_variable = 27,
  sym_type_constructor = 28,
  sym_type_unit = 29,
  sym_type_operator = 30,
  sym_type_infix = 31,
  sym_type_lazy = 32,
  sym_type_parens = 33,
  sym_type_forall = 34,
  sym_type_tuple = 35,
  sym_type_apply = 36,
  sym_type_ability = 37,
  sym_type = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_use_statement_repeat1 = 40,
  aux_sym_type_forall_repeat1 = 41,
  aux_sym_type_tuple_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_uppercase_identifier] = "uppercase_identifier",
  [sym_lowercase_identifier] = "lowercase_identifier",
  [sym_regular_identifier] = "regular_identifier",
  [sym_operator] = "operator",
  [anon_sym_DOT] = ".",
  [anon_sym_use] = "use",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_forall] = "forall",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__start_mark] = "_start_mark",
  [sym__end_mark] = "_end_mark",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym_identifier] = "identifier",
  [sym_namespace] = "namespace",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_uppercase_qualified_identifier] = "uppercase_qualified_identifier",
  [sym_qualified_operator] = "qualified_operator",
  [sym__toplevel] = "_toplevel",
  [sym_use_statement] = "use_statement",
  [sym_declaration] = "declaration",
  [sym_type_variable] = "type_variable",
  [sym_type_constructor] = "type_constructor",
  [sym_type_unit] = "type_unit",
  [sym_type_operator] = "type_operator",
  [sym_type_infix] = "type_infix",
  [sym_type_lazy] = "type_lazy",
  [sym_type_parens] = "type_parens",
  [sym_type_forall] = "type_forall",
  [sym_type_tuple] = "type_tuple",
  [sym_type_apply] = "type_apply",
  [sym_type_ability] = "type_ability",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_use_statement_repeat1] = "use_statement_repeat1",
  [aux_sym_type_forall_repeat1] = "type_forall_repeat1",
  [aux_sym_type_tuple_repeat1] = "type_tuple_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_uppercase_identifier] = sym_uppercase_identifier,
  [sym_lowercase_identifier] = sym_lowercase_identifier,
  [sym_regular_identifier] = sym_regular_identifier,
  [sym_operator] = sym_operator,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_forall] = anon_sym_forall,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__start_mark] = sym__start_mark,
  [sym__end_mark] = sym__end_mark,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym_identifier] = sym_identifier,
  [sym_namespace] = sym_namespace,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_uppercase_qualified_identifier] = sym_uppercase_qualified_identifier,
  [sym_qualified_operator] = sym_qualified_operator,
  [sym__toplevel] = sym__toplevel,
  [sym_use_statement] = sym_use_statement,
  [sym_declaration] = sym_declaration,
  [sym_type_variable] = sym_type_variable,
  [sym_type_constructor] = sym_type_constructor,
  [sym_type_unit] = sym_type_unit,
  [sym_type_operator] = sym_type_operator,
  [sym_type_infix] = sym_type_infix,
  [sym_type_lazy] = sym_type_lazy,
  [sym_type_parens] = sym_type_parens,
  [sym_type_forall] = sym_type_forall,
  [sym_type_tuple] = sym_type_tuple,
  [sym_type_apply] = sym_type_apply,
  [sym_type_ability] = sym_type_ability,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_use_statement_repeat1] = aux_sym_use_statement_repeat1,
  [aux_sym_type_forall_repeat1] = aux_sym_type_forall_repeat1,
  [aux_sym_type_tuple_repeat1] = aux_sym_type_tuple_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_uppercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_lowercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_regular_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__start_mark] = {
    .visible = false,
    .named = true,
  },
  [sym__end_mark] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__toplevel] = {
    .visible = false,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_type_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_type_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_type_infix] = {
    .visible = true,
    .named = true,
  },
  [sym_type_lazy] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parens] = {
    .visible = true,
    .named = true,
  },
  [sym_type_forall] = {
    .visible = true,
    .named = true,
  },
  [sym_type_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_type_apply] = {
    .visible = true,
    .named = true,
  },
  [sym_type_ability] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_forall_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_ability = 1,
  field_function = 2,
  field_import = 3,
  field_left = 4,
  field_namespace = 5,
  field_operator = 6,
  field_parameter = 7,
  field_right = 8,
  field_variable = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_ability] = "ability",
  [field_function] = "function",
  [field_import] = "import",
  [field_left] = "left",
  [field_namespace] = "namespace",
  [field_operator] = "operator",
  [field_parameter] = "parameter",
  [field_right] = "right",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_namespace, 2},
  [1] =
    {field_import, 0},
  [2] =
    {field_import, 3, .inherited = true},
    {field_namespace, 2},
  [4] =
    {field_import, 0, .inherited = true},
    {field_import, 1, .inherited = true},
  [6] =
    {field_variable, 0},
  [7] =
    {field_function, 0},
    {field_parameter, 1},
  [9] =
    {field_ability, 1},
  [10] =
    {field_variable, 0, .inherited = true},
    {field_variable, 1, .inherited = true},
  [12] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [15] =
    {field_variable, 1, .inherited = true},
  [16] =
    {field_ability, 2},
    {field_left, 0},
    {field_operator, 1},
    {field_right, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 8,
  [15] = 15,
  [16] = 6,
  [17] = 5,
  [18] = 3,
  [19] = 2,
  [20] = 4,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 22,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 25,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 38,
  [44] = 36,
  [45] = 39,
  [46] = 35,
  [47] = 34,
  [48] = 48,
  [49] = 42,
  [50] = 40,
  [51] = 37,
  [52] = 52,
  [53] = 41,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 66,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 71,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 70,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 65,
  [84] = 80,
  [85] = 85,
  [86] = 86,
  [87] = 81,
  [88] = 64,
  [89] = 89,
  [90] = 90,
  [91] = 73,
  [92] = 72,
  [93] = 93,
  [94] = 94,
  [95] = 94,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 96,
  [101] = 101,
  [102] = 75,
  [103] = 90,
  [104] = 101,
};

static inline bool sym_uppercase_identifier_character_set_1(int32_t c) {
  return (c < 127538
    ? (c < 9989
      ? (c < 9889
        ? (c < 9725
          ? (c < 9193
            ? (c < 8986
              ? (c >= 'A' && c <= 'Z')
              : c <= 8987)
            : (c <= 9196 || (c < 9203
              ? c == 9200
              : c <= 9203)))
          : (c <= 9726 || (c < 9855
            ? (c < 9800
              ? (c >= 9748 && c <= 9749)
              : c <= 9811)
            : (c <= 9855 || c == 9875))))
        : (c <= 9889 || (c < 9962
          ? (c < 9924
            ? (c < 9917
              ? (c >= 9898 && c <= 9899)
              : c <= 9918)
            : (c <= 9925 || (c < 9940
              ? c == 9934
              : c <= 9940)))
          : (c <= 9962 || (c < 9978
            ? (c < 9973
              ? (c >= 9970 && c <= 9971)
              : c <= 9973)
            : (c <= 9978 || c == 9981))))))
      : (c <= 9989 || (c < 11088
        ? (c < 10071
          ? (c < 10060
            ? (c < 10024
              ? (c >= 9994 && c <= 9995)
              : c <= 10024)
            : (c <= 10060 || (c < 10067
              ? c == 10062
              : c <= 10069)))
          : (c <= 10071 || (c < 10175
            ? (c < 10160
              ? (c >= 10133 && c <= 10135)
              : c <= 10160)
            : (c <= 10175 || (c >= 11035 && c <= 11036)))))
        : (c <= 11088 || (c < 127377
          ? (c < 127183
            ? (c < 126980
              ? c == 11093
              : c <= 126980)
            : (c <= 127183 || c == 127374))
          : (c <= 127386 || (c < 127514
            ? (c < 127489
              ? (c >= 127462 && c <= 127487)
              : c <= 127489)
            : (c <= 127514 || c == 127535))))))))
    : (c <= 127542 || (c < 128640
      ? (c < 127992
        ? (c < 127870
          ? (c < 127744
            ? (c < 127568
              ? (c >= 127544 && c <= 127546)
              : c <= 127569)
            : (c <= 127776 || (c < 127799
              ? (c >= 127789 && c <= 127797)
              : c <= 127868)))
          : (c <= 127891 || (c < 127968
            ? (c < 127951
              ? (c >= 127904 && c <= 127946)
              : c <= 127955)
            : (c <= 127984 || c == 127988))))
        : (c <= 128062 || (c < 128336
          ? (c < 128255
            ? (c < 128066
              ? c == 128064
              : c <= 128252)
            : (c <= 128317 || (c >= 128331 && c <= 128334)))
          : (c <= 128359 || (c < 128420
            ? (c < 128405
              ? c == 128378
              : c <= 128406)
            : (c <= 128420 || (c >= 128507 && c <= 128591)))))))
      : (c <= 128709 || (c < 129351
        ? (c < 128756
          ? (c < 128725
            ? (c < 128720
              ? c == 128716
              : c <= 128722)
            : (c <= 128727 || (c < 128747
              ? (c >= 128733 && c <= 128735)
              : c <= 128748)))
          : (c <= 128764 || (c < 129292
            ? (c < 129008
              ? (c >= 128992 && c <= 129003)
              : c <= 129008)
            : (c <= 129338 || (c >= 129340 && c <= 129349)))))
        : (c <= 129535 || (c < 129712
          ? (c < 129664
            ? (c < 129656
              ? (c >= 129648 && c <= 129652)
              : c <= 129660)
            : (c <= 129670 || (c >= 129680 && c <= 129708)))
          : (c <= 129722 || (c < 129760
            ? (c < 129744
              ? (c >= 129728 && c <= 129733)
              : c <= 129753)
            : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))));
}

static inline bool sym_uppercase_identifier_character_set_2(int32_t c) {
  return (c < 127489
    ? (c < 9970
      ? (c < 9748
        ? (c < 'a'
          ? (c < '0'
            ? (c < '\''
              ? c == '!'
              : c <= '\'')
            : (c <= '9' || (c < '_'
              ? (c >= 'A' && c <= 'Z')
              : c <= '_')))
          : (c <= 'z' || (c < 9200
            ? (c < 9193
              ? (c >= 8986 && c <= 8987)
              : c <= 9196)
            : (c <= 9200 || (c < 9725
              ? c == 9203
              : c <= 9726)))))
        : (c <= 9749 || (c < 9917
          ? (c < 9875
            ? (c < 9855
              ? (c >= 9800 && c <= 9811)
              : c <= 9855)
            : (c <= 9875 || (c < 9898
              ? c == 9889
              : c <= 9899)))
          : (c <= 9918 || (c < 9940
            ? (c < 9934
              ? (c >= 9924 && c <= 9925)
              : c <= 9934)
            : (c <= 9940 || c == 9962))))))
      : (c <= 9971 || (c < 10133
        ? (c < 10024
          ? (c < 9981
            ? (c < 9978
              ? c == 9973
              : c <= 9978)
            : (c <= 9981 || (c < 9994
              ? c == 9989
              : c <= 9995)))
          : (c <= 10024 || (c < 10067
            ? (c < 10062
              ? c == 10060
              : c <= 10062)
            : (c <= 10069 || c == 10071))))
        : (c <= 10135 || (c < 126980
          ? (c < 11035
            ? (c < 10175
              ? c == 10160
              : c <= 10175)
            : (c <= 11036 || (c < 11093
              ? c == 11088
              : c <= 11093)))
          : (c <= 126980 || (c < 127377
            ? (c < 127374
              ? c == 127183
              : c <= 127374)
            : (c <= 127386 || (c >= 127462 && c <= 127487)))))))))
    : (c <= 127489 || (c < 128507
      ? (c < 127968
        ? (c < 127744
          ? (c < 127538
            ? (c < 127535
              ? c == 127514
              : c <= 127535)
            : (c <= 127542 || (c < 127568
              ? (c >= 127544 && c <= 127546)
              : c <= 127569)))
          : (c <= 127776 || (c < 127870
            ? (c < 127799
              ? (c >= 127789 && c <= 127797)
              : c <= 127868)
            : (c <= 127891 || (c < 127951
              ? (c >= 127904 && c <= 127946)
              : c <= 127955)))))
        : (c <= 127984 || (c < 128331
          ? (c < 128064
            ? (c < 127992
              ? c == 127988
              : c <= 128062)
            : (c <= 128064 || (c < 128255
              ? (c >= 128066 && c <= 128252)
              : c <= 128317)))
          : (c <= 128334 || (c < 128405
            ? (c < 128378
              ? (c >= 128336 && c <= 128359)
              : c <= 128378)
            : (c <= 128406 || c == 128420))))))
      : (c <= 128591 || (c < 129340
        ? (c < 128747
          ? (c < 128720
            ? (c < 128716
              ? (c >= 128640 && c <= 128709)
              : c <= 128716)
            : (c <= 128722 || (c < 128733
              ? (c >= 128725 && c <= 128727)
              : c <= 128735)))
          : (c <= 128748 || (c < 129008
            ? (c < 128992
              ? (c >= 128756 && c <= 128764)
              : c <= 129003)
            : (c <= 129008 || (c >= 129292 && c <= 129338)))))
        : (c <= 129349 || (c < 129712
          ? (c < 129656
            ? (c < 129648
              ? (c >= 129351 && c <= 129535)
              : c <= 129652)
            : (c <= 129660 || (c < 129680
              ? (c >= 129664 && c <= 129670)
              : c <= 129708)))
          : (c <= 129722 || (c < 129760
            ? (c < 129744
              ? (c >= 129728 && c <= 129733)
              : c <= 129753)
            : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))));
}

static inline bool sym_lowercase_identifier_character_set_1(int32_t c) {
  return (c < 127489
    ? (c < 9970
      ? (c < 9748
        ? (c < 'b'
          ? (c < '0'
            ? (c < '\''
              ? c == '!'
              : c <= '\'')
            : (c <= '9' || (c < '_'
              ? (c >= 'A' && c <= 'Z')
              : c <= '_')))
          : (c <= 'z' || (c < 9200
            ? (c < 9193
              ? (c >= 8986 && c <= 8987)
              : c <= 9196)
            : (c <= 9200 || (c < 9725
              ? c == 9203
              : c <= 9726)))))
        : (c <= 9749 || (c < 9917
          ? (c < 9875
            ? (c < 9855
              ? (c >= 9800 && c <= 9811)
              : c <= 9855)
            : (c <= 9875 || (c < 9898
              ? c == 9889
              : c <= 9899)))
          : (c <= 9918 || (c < 9940
            ? (c < 9934
              ? (c >= 9924 && c <= 9925)
              : c <= 9934)
            : (c <= 9940 || c == 9962))))))
      : (c <= 9971 || (c < 10133
        ? (c < 10024
          ? (c < 9981
            ? (c < 9978
              ? c == 9973
              : c <= 9978)
            : (c <= 9981 || (c < 9994
              ? c == 9989
              : c <= 9995)))
          : (c <= 10024 || (c < 10067
            ? (c < 10062
              ? c == 10060
              : c <= 10062)
            : (c <= 10069 || c == 10071))))
        : (c <= 10135 || (c < 126980
          ? (c < 11035
            ? (c < 10175
              ? c == 10160
              : c <= 10175)
            : (c <= 11036 || (c < 11093
              ? c == 11088
              : c <= 11093)))
          : (c <= 126980 || (c < 127377
            ? (c < 127374
              ? c == 127183
              : c <= 127374)
            : (c <= 127386 || (c >= 127462 && c <= 127487)))))))))
    : (c <= 127489 || (c < 128507
      ? (c < 127968
        ? (c < 127744
          ? (c < 127538
            ? (c < 127535
              ? c == 127514
              : c <= 127535)
            : (c <= 127542 || (c < 127568
              ? (c >= 127544 && c <= 127546)
              : c <= 127569)))
          : (c <= 127776 || (c < 127870
            ? (c < 127799
              ? (c >= 127789 && c <= 127797)
              : c <= 127868)
            : (c <= 127891 || (c < 127951
              ? (c >= 127904 && c <= 127946)
              : c <= 127955)))))
        : (c <= 127984 || (c < 128331
          ? (c < 128064
            ? (c < 127992
              ? c == 127988
              : c <= 128062)
            : (c <= 128064 || (c < 128255
              ? (c >= 128066 && c <= 128252)
              : c <= 128317)))
          : (c <= 128334 || (c < 128405
            ? (c < 128378
              ? (c >= 128336 && c <= 128359)
              : c <= 128378)
            : (c <= 128406 || c == 128420))))))
      : (c <= 128591 || (c < 129340
        ? (c < 128747
          ? (c < 128720
            ? (c < 128716
              ? (c >= 128640 && c <= 128709)
              : c <= 128716)
            : (c <= 128722 || (c < 128733
              ? (c >= 128725 && c <= 128727)
              : c <= 128735)))
          : (c <= 128748 || (c < 129008
            ? (c < 128992
              ? (c >= 128756 && c <= 128764)
              : c <= 129003)
            : (c <= 129008 || (c >= 129292 && c <= 129338)))))
        : (c <= 129349 || (c < 129712
          ? (c < 129656
            ? (c < 129648
              ? (c >= 129351 && c <= 129535)
              : c <= 129652)
            : (c <= 129660 || (c < 129680
              ? (c >= 129664 && c <= 129670)
              : c <= 129708)))
          : (c <= 129722 || (c < 129760
            ? (c < 129744
              ? (c >= 129728 && c <= 129733)
              : c <= 129753)
            : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))));
}

static inline bool sym_regular_identifier_character_set_1(int32_t c) {
  return (c < 127535
    ? (c < 9978
      ? (c < 9855
        ? (c < 9200
          ? (c < 'a'
            ? (c < '_'
              ? (c >= 'A' && c <= 'Z')
              : c <= '_')
            : (c <= 'z' || (c < 9193
              ? (c >= 8986 && c <= 8987)
              : c <= 9196)))
          : (c <= 9200 || (c < 9748
            ? (c < 9725
              ? c == 9203
              : c <= 9726)
            : (c <= 9749 || (c >= 9800 && c <= 9811)))))
        : (c <= 9855 || (c < 9934
          ? (c < 9898
            ? (c < 9889
              ? c == 9875
              : c <= 9889)
            : (c <= 9899 || (c < 9924
              ? (c >= 9917 && c <= 9918)
              : c <= 9925)))
          : (c <= 9934 || (c < 9970
            ? (c < 9962
              ? c == 9940
              : c <= 9962)
            : (c <= 9971 || c == 9973))))))
      : (c <= 9978 || (c < 10175
        ? (c < 10062
          ? (c < 9994
            ? (c < 9989
              ? c == 9981
              : c <= 9989)
            : (c <= 9995 || (c < 10060
              ? c == 10024
              : c <= 10060)))
          : (c <= 10062 || (c < 10133
            ? (c < 10071
              ? (c >= 10067 && c <= 10069)
              : c <= 10071)
            : (c <= 10135 || c == 10160))))
        : (c <= 10175 || (c < 127374
          ? (c < 11093
            ? (c < 11088
              ? (c >= 11035 && c <= 11036)
              : c <= 11088)
            : (c <= 11093 || (c < 127183
              ? c == 126980
              : c <= 127183)))
          : (c <= 127374 || (c < 127489
            ? (c < 127462
              ? (c >= 127377 && c <= 127386)
              : c <= 127487)
            : (c <= 127489 || c == 127514))))))))
    : (c <= 127535 || (c < 128640
      ? (c < 127988
        ? (c < 127799
          ? (c < 127568
            ? (c < 127544
              ? (c >= 127538 && c <= 127542)
              : c <= 127546)
            : (c <= 127569 || (c < 127789
              ? (c >= 127744 && c <= 127776)
              : c <= 127797)))
          : (c <= 127868 || (c < 127951
            ? (c < 127904
              ? (c >= 127870 && c <= 127891)
              : c <= 127946)
            : (c <= 127955 || (c >= 127968 && c <= 127984)))))
        : (c <= 127988 || (c < 128336
          ? (c < 128066
            ? (c < 128064
              ? (c >= 127992 && c <= 128062)
              : c <= 128064)
            : (c <= 128252 || (c < 128331
              ? (c >= 128255 && c <= 128317)
              : c <= 128334)))
          : (c <= 128359 || (c < 128420
            ? (c < 128405
              ? c == 128378
              : c <= 128406)
            : (c <= 128420 || (c >= 128507 && c <= 128591)))))))
      : (c <= 128709 || (c < 129351
        ? (c < 128756
          ? (c < 128725
            ? (c < 128720
              ? c == 128716
              : c <= 128722)
            : (c <= 128727 || (c < 128747
              ? (c >= 128733 && c <= 128735)
              : c <= 128748)))
          : (c <= 128764 || (c < 129292
            ? (c < 129008
              ? (c >= 128992 && c <= 129003)
              : c <= 129008)
            : (c <= 129338 || (c >= 129340 && c <= 129349)))))
        : (c <= 129535 || (c < 129712
          ? (c < 129664
            ? (c < 129656
              ? (c >= 129648 && c <= 129652)
              : c <= 129660)
            : (c <= 129670 || (c >= 129680 && c <= 129708)))
          : (c <= 129722 || (c < 129760
            ? (c < 129744
              ? (c >= 129728 && c <= 129733)
              : c <= 129753)
            : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))));
}

static inline bool sym_operator_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < ':'
        ? (c >= '-' && c <= '/')
        : c <= ':')))
    : (c <= '>' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(23);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (sym_uppercase_identifier_character_set_1(lookahead)) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (sym_uppercase_identifier_character_set_1(lookahead)) ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == 'u') ADVANCE(21);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(23);
      if (sym_regular_identifier_character_set_1(lookahead)) ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (sym_operator_character_set_1(lookahead)) ADVANCE(23);
      if (sym_regular_identifier_character_set_1(lookahead)) ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '.') ADVANCE(25);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(23);
      if (sym_regular_identifier_character_set_1(lookahead)) ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (sym_operator_character_set_1(lookahead)) ADVANCE(23);
      if (sym_uppercase_identifier_character_set_1(lookahead)) ADVANCE(8);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'a') ADVANCE(11);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'l') ADVANCE(33);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'l') ADVANCE(10);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'o') ADVANCE(13);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'r') ADVANCE(9);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 'a') ADVANCE(18);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(22);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 'e') ADVANCE(26);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(22);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 'l') ADVANCE(32);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 'l') ADVANCE(17);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 'o') ADVANCE(20);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 'r') ADVANCE(15);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 's') ADVANCE(16);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_operator);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(22);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_forall);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(22);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_forall);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(14);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 3},
  [3] = {.lex_state = 1, .external_lex_state = 3},
  [4] = {.lex_state = 1, .external_lex_state = 3},
  [5] = {.lex_state = 1, .external_lex_state = 3},
  [6] = {.lex_state = 1, .external_lex_state = 3},
  [7] = {.lex_state = 1, .external_lex_state = 3},
  [8] = {.lex_state = 1, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 1, .external_lex_state = 3},
  [12] = {.lex_state = 1, .external_lex_state = 3},
  [13] = {.lex_state = 1, .external_lex_state = 3},
  [14] = {.lex_state = 1, .external_lex_state = 4},
  [15] = {.lex_state = 1, .external_lex_state = 4},
  [16] = {.lex_state = 1, .external_lex_state = 4},
  [17] = {.lex_state = 1, .external_lex_state = 4},
  [18] = {.lex_state = 1, .external_lex_state = 4},
  [19] = {.lex_state = 1, .external_lex_state = 4},
  [20] = {.lex_state = 1, .external_lex_state = 4},
  [21] = {.lex_state = 1, .external_lex_state = 3},
  [22] = {.lex_state = 1, .external_lex_state = 3},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 1, .external_lex_state = 3},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 1, .external_lex_state = 3},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 1, .external_lex_state = 3},
  [30] = {.lex_state = 1, .external_lex_state = 3},
  [31] = {.lex_state = 1, .external_lex_state = 3},
  [32] = {.lex_state = 1, .external_lex_state = 3},
  [33] = {.lex_state = 1, .external_lex_state = 3},
  [34] = {.lex_state = 1, .external_lex_state = 3},
  [35] = {.lex_state = 1, .external_lex_state = 3},
  [36] = {.lex_state = 1, .external_lex_state = 3},
  [37] = {.lex_state = 1, .external_lex_state = 3},
  [38] = {.lex_state = 1, .external_lex_state = 3},
  [39] = {.lex_state = 1, .external_lex_state = 3},
  [40] = {.lex_state = 1, .external_lex_state = 3},
  [41] = {.lex_state = 1, .external_lex_state = 3},
  [42] = {.lex_state = 1, .external_lex_state = 3},
  [43] = {.lex_state = 1, .external_lex_state = 4},
  [44] = {.lex_state = 1, .external_lex_state = 4},
  [45] = {.lex_state = 1, .external_lex_state = 4},
  [46] = {.lex_state = 1, .external_lex_state = 4},
  [47] = {.lex_state = 1, .external_lex_state = 4},
  [48] = {.lex_state = 1, .external_lex_state = 3},
  [49] = {.lex_state = 1, .external_lex_state = 4},
  [50] = {.lex_state = 1, .external_lex_state = 4},
  [51] = {.lex_state = 1, .external_lex_state = 4},
  [52] = {.lex_state = 1, .external_lex_state = 3},
  [53] = {.lex_state = 1, .external_lex_state = 4},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 1, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 1, .external_lex_state = 3},
  [58] = {.lex_state = 2, .external_lex_state = 3},
  [59] = {.lex_state = 3, .external_lex_state = 3},
  [60] = {.lex_state = 3, .external_lex_state = 4},
  [61] = {.lex_state = 3, .external_lex_state = 4},
  [62] = {.lex_state = 3, .external_lex_state = 4},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 4, .external_lex_state = 4},
  [65] = {.lex_state = 4, .external_lex_state = 4},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 5, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 6, .external_lex_state = 3},
  [71] = {.lex_state = 3, .external_lex_state = 3},
  [72] = {.lex_state = 3, .external_lex_state = 4},
  [73] = {.lex_state = 3, .external_lex_state = 4},
  [74] = {.lex_state = 3, .external_lex_state = 3},
  [75] = {.lex_state = 3, .external_lex_state = 4},
  [76] = {.lex_state = 5, .external_lex_state = 3},
  [77] = {.lex_state = 5, .external_lex_state = 3},
  [78] = {.lex_state = 6, .external_lex_state = 3},
  [79] = {.lex_state = 3, .external_lex_state = 4},
  [80] = {.lex_state = 5, .external_lex_state = 3},
  [81] = {.lex_state = 6, .external_lex_state = 3},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 5, .external_lex_state = 3},
  [84] = {.lex_state = 5, .external_lex_state = 3},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 5, .external_lex_state = 3},
  [87] = {.lex_state = 6, .external_lex_state = 3},
  [88] = {.lex_state = 5, .external_lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 5, .external_lex_state = 3},
  [91] = {.lex_state = 5, .external_lex_state = 3},
  [92] = {.lex_state = 5, .external_lex_state = 3},
  [93] = {.lex_state = 5, .external_lex_state = 3},
  [94] = {.lex_state = 5, .external_lex_state = 3},
  [95] = {.lex_state = 5, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 5, .external_lex_state = 3},
  [99] = {.lex_state = 5, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 5, .external_lex_state = 3},
  [102] = {.lex_state = 5, .external_lex_state = 3},
  [103] = {.lex_state = 5, .external_lex_state = 3},
  [104] = {.lex_state = 5, .external_lex_state = 3},
};

enum {
  ts_external_token__start_mark = 0,
  ts_external_token__end_mark = 1,
  ts_external_token__newline = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_mark] = sym__start_mark,
  [ts_external_token__end_mark] = sym__end_mark,
  [ts_external_token__newline] = sym__newline,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_mark] = true,
    [ts_external_token__end_mark] = true,
    [ts_external_token__newline] = true,
  },
  [2] = {
    [ts_external_token__start_mark] = true,
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__end_mark] = true,
    [ts_external_token__newline] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_uppercase_identifier] = ACTIONS(1),
    [sym_regular_identifier] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_forall] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__start_mark] = ACTIONS(1),
    [sym__end_mark] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(97),
    [sym__toplevel] = STATE(54),
    [sym_use_statement] = STATE(54),
    [sym_declaration] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__start_mark] = ACTIONS(7),
    [sym__newline] = ACTIONS(3),
  },
  [2] = {
    [sym_namespace] = STATE(101),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_qualified_operator] = STATE(24),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type] = STATE(6),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(19),
    [sym__newline] = ACTIONS(3),
  },
  [3] = {
    [sym_namespace] = STATE(101),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_qualified_operator] = STATE(24),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type] = STATE(6),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [sym__newline] = ACTIONS(3),
  },
  [4] = {
    [sym_namespace] = STATE(101),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_qualified_operator] = STATE(24),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type] = STATE(6),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [sym__newline] = ACTIONS(3),
  },
  [5] = {
    [sym_namespace] = STATE(101),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_qualified_operator] = STATE(24),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type] = STATE(6),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym__newline] = ACTIONS(3),
  },
  [6] = {
    [sym_namespace] = STATE(101),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_qualified_operator] = STATE(24),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type] = STATE(6),
    [sym_uppercase_identifier] = ACTIONS(31),
    [sym_lowercase_identifier] = ACTIONS(33),
    [sym_regular_identifier] = ACTIONS(33),
    [sym_operator] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_forall] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym__newline] = ACTIONS(3),
  },
  [7] = {
    [sym_namespace] = STATE(101),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_qualified_operator] = STATE(24),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type] = STATE(6),
    [aux_sym_type_tuple_repeat1] = STATE(68),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym__newline] = ACTIONS(3),
  },
  [8] = {
    [sym_namespace] = STATE(101),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_qualified_operator] = STATE(24),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type] = STATE(6),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [sym__newline] = ACTIONS(3),
  },
  [9] = {
    [sym_namespace] = STATE(101),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_qualified_operator] = STATE(24),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type] = STATE(6),
    [aux_sym_type_tuple_repeat1] = STATE(69),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(41),
    [sym__newline] = ACTIONS(3),
  },
  [10] = {
    [sym_namespace] = STATE(101),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_qualified_operator] = STATE(24),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type] = STATE(6),
    [aux_sym_type_tuple_repeat1] = STATE(66),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym__newline] = ACTIONS(3),
  },
  [11] = {
    [sym_namespace] = STATE(101),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_qualified_operator] = STATE(24),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type] = STATE(6),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [sym__newline] = ACTIONS(3),
  },
  [12] = {
    [sym_namespace] = STATE(101),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_qualified_operator] = STATE(96),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type] = STATE(10),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_forall] = ACTIONS(23),
    [sym__newline] = ACTIONS(3),
  },
  [13] = {
    [sym_namespace] = STATE(101),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_qualified_operator] = STATE(100),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type] = STATE(7),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_forall] = ACTIONS(23),
    [sym__newline] = ACTIONS(3),
  },
  [14] = {
    [sym_namespace] = STATE(104),
    [sym_uppercase_qualified_identifier] = STATE(43),
    [sym_qualified_operator] = STATE(22),
    [sym_type_variable] = STATE(47),
    [sym_type_constructor] = STATE(47),
    [sym_type_unit] = STATE(47),
    [sym_type_operator] = STATE(47),
    [sym_type_infix] = STATE(47),
    [sym_type_lazy] = STATE(47),
    [sym_type_parens] = STATE(47),
    [sym_type_forall] = STATE(47),
    [sym_type_tuple] = STATE(47),
    [sym_type_apply] = STATE(47),
    [sym_type] = STATE(16),
    [sym_uppercase_identifier] = ACTIONS(51),
    [sym_lowercase_identifier] = ACTIONS(53),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_forall] = ACTIONS(59),
    [sym__end_mark] = ACTIONS(39),
    [sym__newline] = ACTIONS(3),
  },
  [15] = {
    [sym_namespace] = STATE(104),
    [sym_uppercase_qualified_identifier] = STATE(43),
    [sym_qualified_operator] = STATE(22),
    [sym_type_variable] = STATE(47),
    [sym_type_constructor] = STATE(47),
    [sym_type_unit] = STATE(47),
    [sym_type_operator] = STATE(47),
    [sym_type_infix] = STATE(47),
    [sym_type_lazy] = STATE(47),
    [sym_type_parens] = STATE(47),
    [sym_type_forall] = STATE(47),
    [sym_type_tuple] = STATE(47),
    [sym_type_apply] = STATE(47),
    [sym_type] = STATE(16),
    [sym_uppercase_identifier] = ACTIONS(51),
    [sym_lowercase_identifier] = ACTIONS(53),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_forall] = ACTIONS(59),
    [sym__end_mark] = ACTIONS(61),
    [sym__newline] = ACTIONS(3),
  },
  [16] = {
    [sym_namespace] = STATE(104),
    [sym_uppercase_qualified_identifier] = STATE(43),
    [sym_qualified_operator] = STATE(22),
    [sym_type_variable] = STATE(47),
    [sym_type_constructor] = STATE(47),
    [sym_type_unit] = STATE(47),
    [sym_type_operator] = STATE(47),
    [sym_type_infix] = STATE(47),
    [sym_type_lazy] = STATE(47),
    [sym_type_parens] = STATE(47),
    [sym_type_forall] = STATE(47),
    [sym_type_tuple] = STATE(47),
    [sym_type_apply] = STATE(47),
    [sym_type] = STATE(16),
    [sym_uppercase_identifier] = ACTIONS(31),
    [sym_lowercase_identifier] = ACTIONS(33),
    [sym_regular_identifier] = ACTIONS(33),
    [sym_operator] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_forall] = ACTIONS(33),
    [sym__end_mark] = ACTIONS(31),
    [sym__newline] = ACTIONS(3),
  },
  [17] = {
    [sym_namespace] = STATE(104),
    [sym_uppercase_qualified_identifier] = STATE(43),
    [sym_qualified_operator] = STATE(22),
    [sym_type_variable] = STATE(47),
    [sym_type_constructor] = STATE(47),
    [sym_type_unit] = STATE(47),
    [sym_type_operator] = STATE(47),
    [sym_type_infix] = STATE(47),
    [sym_type_lazy] = STATE(47),
    [sym_type_parens] = STATE(47),
    [sym_type_forall] = STATE(47),
    [sym_type_tuple] = STATE(47),
    [sym_type_apply] = STATE(47),
    [sym_type] = STATE(16),
    [sym_uppercase_identifier] = ACTIONS(51),
    [sym_lowercase_identifier] = ACTIONS(53),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_forall] = ACTIONS(59),
    [sym__end_mark] = ACTIONS(29),
    [sym__newline] = ACTIONS(3),
  },
  [18] = {
    [sym_namespace] = STATE(104),
    [sym_uppercase_qualified_identifier] = STATE(43),
    [sym_qualified_operator] = STATE(22),
    [sym_type_variable] = STATE(47),
    [sym_type_constructor] = STATE(47),
    [sym_type_unit] = STATE(47),
    [sym_type_operator] = STATE(47),
    [sym_type_infix] = STATE(47),
    [sym_type_lazy] = STATE(47),
    [sym_type_parens] = STATE(47),
    [sym_type_forall] = STATE(47),
    [sym_type_tuple] = STATE(47),
    [sym_type_apply] = STATE(47),
    [sym_type] = STATE(16),
    [sym_uppercase_identifier] = ACTIONS(51),
    [sym_lowercase_identifier] = ACTIONS(53),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_forall] = ACTIONS(59),
    [sym__end_mark] = ACTIONS(25),
    [sym__newline] = ACTIONS(3),
  },
  [19] = {
    [sym_namespace] = STATE(104),
    [sym_uppercase_qualified_identifier] = STATE(43),
    [sym_qualified_operator] = STATE(22),
    [sym_type_variable] = STATE(47),
    [sym_type_constructor] = STATE(47),
    [sym_type_unit] = STATE(47),
    [sym_type_operator] = STATE(47),
    [sym_type_infix] = STATE(47),
    [sym_type_lazy] = STATE(47),
    [sym_type_parens] = STATE(47),
    [sym_type_forall] = STATE(47),
    [sym_type_tuple] = STATE(47),
    [sym_type_apply] = STATE(47),
    [sym_type] = STATE(16),
    [sym_uppercase_identifier] = ACTIONS(51),
    [sym_lowercase_identifier] = ACTIONS(53),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_forall] = ACTIONS(59),
    [sym__end_mark] = ACTIONS(19),
    [sym__newline] = ACTIONS(3),
  },
  [20] = {
    [sym_namespace] = STATE(104),
    [sym_uppercase_qualified_identifier] = STATE(43),
    [sym_qualified_operator] = STATE(22),
    [sym_type_variable] = STATE(47),
    [sym_type_constructor] = STATE(47),
    [sym_type_unit] = STATE(47),
    [sym_type_operator] = STATE(47),
    [sym_type_infix] = STATE(47),
    [sym_type_lazy] = STATE(47),
    [sym_type_parens] = STATE(47),
    [sym_type_forall] = STATE(47),
    [sym_type_tuple] = STATE(47),
    [sym_type_apply] = STATE(47),
    [sym_type] = STATE(16),
    [sym_uppercase_identifier] = ACTIONS(51),
    [sym_lowercase_identifier] = ACTIONS(53),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_forall] = ACTIONS(59),
    [sym__end_mark] = ACTIONS(27),
    [sym__newline] = ACTIONS(3),
  },
  [21] = {
    [sym_namespace] = STATE(90),
    [sym_uppercase_qualified_identifier] = STATE(43),
    [sym_type_variable] = STATE(47),
    [sym_type_constructor] = STATE(47),
    [sym_type_unit] = STATE(47),
    [sym_type_operator] = STATE(47),
    [sym_type_infix] = STATE(47),
    [sym_type_lazy] = STATE(47),
    [sym_type_parens] = STATE(47),
    [sym_type_forall] = STATE(47),
    [sym_type_tuple] = STATE(47),
    [sym_type_apply] = STATE(47),
    [sym_type_ability] = STATE(31),
    [sym_type] = STATE(14),
    [sym_uppercase_identifier] = ACTIONS(51),
    [sym_lowercase_identifier] = ACTIONS(53),
    [sym_regular_identifier] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_forall] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym__newline] = ACTIONS(3),
  },
  [22] = {
    [sym_namespace] = STATE(90),
    [sym_uppercase_qualified_identifier] = STATE(43),
    [sym_type_variable] = STATE(47),
    [sym_type_constructor] = STATE(47),
    [sym_type_unit] = STATE(47),
    [sym_type_operator] = STATE(47),
    [sym_type_infix] = STATE(47),
    [sym_type_lazy] = STATE(47),
    [sym_type_parens] = STATE(47),
    [sym_type_forall] = STATE(47),
    [sym_type_tuple] = STATE(47),
    [sym_type_apply] = STATE(47),
    [sym_type_ability] = STATE(26),
    [sym_type] = STATE(20),
    [sym_uppercase_identifier] = ACTIONS(51),
    [sym_lowercase_identifier] = ACTIONS(53),
    [sym_regular_identifier] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_forall] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym__newline] = ACTIONS(3),
  },
  [23] = {
    [sym_namespace] = STATE(103),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type_ability] = STATE(29),
    [sym_type] = STATE(8),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym__newline] = ACTIONS(3),
  },
  [24] = {
    [sym_namespace] = STATE(103),
    [sym_uppercase_qualified_identifier] = STATE(38),
    [sym_type_variable] = STATE(34),
    [sym_type_constructor] = STATE(34),
    [sym_type_unit] = STATE(34),
    [sym_type_operator] = STATE(34),
    [sym_type_infix] = STATE(34),
    [sym_type_lazy] = STATE(34),
    [sym_type_parens] = STATE(34),
    [sym_type_forall] = STATE(34),
    [sym_type_tuple] = STATE(34),
    [sym_type_apply] = STATE(34),
    [sym_type_ability] = STATE(27),
    [sym_type] = STATE(4),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym__newline] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(51), 1,
      sym_uppercase_identifier,
    ACTIONS(53), 1,
      sym_lowercase_identifier,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_forall,
    STATE(19), 1,
      sym_type,
    STATE(43), 1,
      sym_uppercase_qualified_identifier,
    STATE(90), 1,
      sym_namespace,
    STATE(47), 10,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      sym_type_infix,
      sym_type_lazy,
      sym_type_parens,
      sym_type_forall,
      sym_type_tuple,
      sym_type_apply,
  [43] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(51), 1,
      sym_uppercase_identifier,
    ACTIONS(53), 1,
      sym_lowercase_identifier,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_forall,
    STATE(18), 1,
      sym_type,
    STATE(43), 1,
      sym_uppercase_qualified_identifier,
    STATE(90), 1,
      sym_namespace,
    STATE(47), 10,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      sym_type_infix,
      sym_type_lazy,
      sym_type_parens,
      sym_type_forall,
      sym_type_tuple,
      sym_type_apply,
  [86] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_forall,
    STATE(3), 1,
      sym_type,
    STATE(38), 1,
      sym_uppercase_qualified_identifier,
    STATE(103), 1,
      sym_namespace,
    STATE(34), 10,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      sym_type_infix,
      sym_type_lazy,
      sym_type_parens,
      sym_type_forall,
      sym_type_tuple,
      sym_type_apply,
  [129] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(51), 1,
      sym_uppercase_identifier,
    ACTIONS(53), 1,
      sym_lowercase_identifier,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_forall,
    STATE(15), 1,
      sym_type,
    STATE(43), 1,
      sym_uppercase_qualified_identifier,
    STATE(90), 1,
      sym_namespace,
    STATE(47), 10,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      sym_type_infix,
      sym_type_lazy,
      sym_type_parens,
      sym_type_forall,
      sym_type_tuple,
      sym_type_apply,
  [172] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_forall,
    STATE(5), 1,
      sym_type,
    STATE(38), 1,
      sym_uppercase_qualified_identifier,
    STATE(103), 1,
      sym_namespace,
    STATE(34), 10,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      sym_type_infix,
      sym_type_lazy,
      sym_type_parens,
      sym_type_forall,
      sym_type_tuple,
      sym_type_apply,
  [215] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_forall,
    STATE(9), 1,
      sym_type,
    STATE(38), 1,
      sym_uppercase_qualified_identifier,
    STATE(103), 1,
      sym_namespace,
    STATE(34), 10,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      sym_type_infix,
      sym_type_lazy,
      sym_type_parens,
      sym_type_forall,
      sym_type_tuple,
      sym_type_apply,
  [258] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(51), 1,
      sym_uppercase_identifier,
    ACTIONS(53), 1,
      sym_lowercase_identifier,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_forall,
    STATE(17), 1,
      sym_type,
    STATE(43), 1,
      sym_uppercase_qualified_identifier,
    STATE(90), 1,
      sym_namespace,
    STATE(47), 10,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      sym_type_infix,
      sym_type_lazy,
      sym_type_parens,
      sym_type_forall,
      sym_type_tuple,
      sym_type_apply,
  [301] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_forall,
    STATE(2), 1,
      sym_type,
    STATE(38), 1,
      sym_uppercase_qualified_identifier,
    STATE(103), 1,
      sym_namespace,
    STATE(34), 10,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      sym_type_infix,
      sym_type_lazy,
      sym_type_parens,
      sym_type_forall,
      sym_type_tuple,
      sym_type_apply,
  [344] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_forall,
    STATE(11), 1,
      sym_type,
    STATE(38), 1,
      sym_uppercase_qualified_identifier,
    STATE(103), 1,
      sym_namespace,
    STATE(34), 10,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      sym_type_infix,
      sym_type_lazy,
      sym_type_parens,
      sym_type_forall,
      sym_type_tuple,
      sym_type_apply,
  [387] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(67), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(65), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [405] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(71), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(69), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [423] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(75), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(73), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [441] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(79), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(77), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [459] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(83), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(81), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [477] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(87), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(85), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [495] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(91), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(89), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [513] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(95), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(93), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [531] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(99), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(97), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [549] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(83), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(81), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [565] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(75), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(73), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [581] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(87), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(85), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [597] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(71), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(69), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [613] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(67), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(65), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [629] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(103), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(101), 5,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [645] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(99), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(97), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [661] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(91), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(89), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [677] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(79), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(77), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [693] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(107), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(105), 5,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [709] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(95), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(93), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [725] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      sym__start_mark,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(56), 4,
      sym__toplevel,
      sym_use_statement,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [741] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(111), 3,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
    ACTIONS(113), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
  [755] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym__start_mark,
    STATE(56), 4,
      sym__toplevel,
      sym_use_statement,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [771] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(120), 3,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
    ACTIONS(122), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
  [785] = 7,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(124), 1,
      sym_regular_identifier,
    ACTIONS(126), 1,
      sym_operator,
    ACTIONS(128), 1,
      anon_sym_use,
    STATE(91), 1,
      sym_identifier,
    STATE(95), 1,
      sym_namespace,
    STATE(98), 1,
      sym_qualified_identifier,
  [807] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(130), 1,
      sym_regular_identifier,
    ACTIONS(132), 1,
      sym_operator,
    STATE(60), 1,
      sym_qualified_identifier,
    STATE(73), 1,
      sym_identifier,
    STATE(94), 1,
      sym_namespace,
  [826] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(134), 1,
      sym__end_mark,
    STATE(61), 1,
      aux_sym_use_statement_repeat1,
    STATE(79), 1,
      sym_identifier,
    ACTIONS(132), 2,
      sym_regular_identifier,
      sym_operator,
  [843] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(136), 1,
      sym__end_mark,
    STATE(62), 1,
      aux_sym_use_statement_repeat1,
    STATE(79), 1,
      sym_identifier,
    ACTIONS(132), 2,
      sym_regular_identifier,
      sym_operator,
  [860] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(141), 1,
      sym__end_mark,
    STATE(62), 1,
      aux_sym_use_statement_repeat1,
    STATE(79), 1,
      sym_identifier,
    ACTIONS(138), 2,
      sym_regular_identifier,
      sym_operator,
  [877] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_type_tuple_repeat1,
    ACTIONS(45), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [891] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(148), 1,
      sym_operator,
    ACTIONS(150), 1,
      anon_sym_DOT,
    ACTIONS(146), 2,
      sym__end_mark,
      sym_regular_identifier,
  [905] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(148), 1,
      sym_operator,
    ACTIONS(152), 1,
      anon_sym_DOT,
    ACTIONS(146), 2,
      sym__end_mark,
      sym_regular_identifier,
  [919] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_type_tuple_repeat1,
  [932] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(156), 1,
      sym_lowercase_identifier,
    ACTIONS(159), 1,
      anon_sym_DOT,
    STATE(67), 1,
      aux_sym_type_forall_repeat1,
  [945] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_type_tuple_repeat1,
  [958] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_type_tuple_repeat1,
  [971] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(165), 1,
      sym_uppercase_identifier,
    ACTIONS(167), 1,
      sym_regular_identifier,
    ACTIONS(169), 1,
      sym_operator,
  [984] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(126), 1,
      sym_operator,
    ACTIONS(171), 1,
      sym_regular_identifier,
    STATE(102), 1,
      sym_identifier,
  [997] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(146), 3,
      sym__end_mark,
      sym_regular_identifier,
      sym_operator,
  [1006] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(173), 3,
      sym__end_mark,
      sym_regular_identifier,
      sym_operator,
  [1015] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(132), 1,
      sym_operator,
    ACTIONS(175), 1,
      sym_regular_identifier,
    STATE(75), 1,
      sym_identifier,
  [1028] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(177), 3,
      sym__end_mark,
      sym_regular_identifier,
      sym_operator,
  [1037] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(179), 1,
      sym_lowercase_identifier,
    ACTIONS(181), 1,
      anon_sym_DOT,
    STATE(67), 1,
      aux_sym_type_forall_repeat1,
  [1050] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(179), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_DOT,
    STATE(67), 1,
      aux_sym_type_forall_repeat1,
  [1063] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(167), 1,
      sym_regular_identifier,
    ACTIONS(169), 1,
      sym_operator,
    ACTIONS(185), 1,
      sym_uppercase_identifier,
  [1076] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(187), 3,
      sym__end_mark,
      sym_regular_identifier,
      sym_operator,
  [1085] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(179), 1,
      sym_lowercase_identifier,
    STATE(76), 1,
      aux_sym_type_forall_repeat1,
  [1095] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(165), 1,
      sym_uppercase_identifier,
    ACTIONS(167), 1,
      sym_regular_identifier,
  [1105] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(189), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [1113] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_DOT,
  [1123] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(179), 1,
      sym_lowercase_identifier,
    STATE(77), 1,
      aux_sym_type_forall_repeat1,
  [1133] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(193), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [1141] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(195), 2,
      sym_lowercase_identifier,
      anon_sym_DOT,
  [1149] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(167), 1,
      sym_regular_identifier,
    ACTIONS(185), 1,
      sym_uppercase_identifier,
  [1159] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(197), 1,
      anon_sym_DOT,
  [1169] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(199), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [1177] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(201), 1,
      anon_sym_DOT,
  [1184] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(173), 1,
      anon_sym_COLON,
  [1191] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(146), 1,
      anon_sym_COLON,
  [1198] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(191), 1,
      anon_sym_DOT,
  [1205] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(203), 1,
      anon_sym_DOT,
  [1212] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(205), 1,
      anon_sym_DOT,
  [1219] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
  [1226] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [1233] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(211), 1,
      anon_sym_COLON,
  [1240] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(197), 1,
      anon_sym_DOT,
  [1247] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
  [1254] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(215), 1,
      anon_sym_DOT,
  [1261] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(177), 1,
      anon_sym_COLON,
  [1268] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(217), 1,
      anon_sym_DOT,
  [1275] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(219), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 43,
  [SMALL_STATE(27)] = 86,
  [SMALL_STATE(28)] = 129,
  [SMALL_STATE(29)] = 172,
  [SMALL_STATE(30)] = 215,
  [SMALL_STATE(31)] = 258,
  [SMALL_STATE(32)] = 301,
  [SMALL_STATE(33)] = 344,
  [SMALL_STATE(34)] = 387,
  [SMALL_STATE(35)] = 405,
  [SMALL_STATE(36)] = 423,
  [SMALL_STATE(37)] = 441,
  [SMALL_STATE(38)] = 459,
  [SMALL_STATE(39)] = 477,
  [SMALL_STATE(40)] = 495,
  [SMALL_STATE(41)] = 513,
  [SMALL_STATE(42)] = 531,
  [SMALL_STATE(43)] = 549,
  [SMALL_STATE(44)] = 565,
  [SMALL_STATE(45)] = 581,
  [SMALL_STATE(46)] = 597,
  [SMALL_STATE(47)] = 613,
  [SMALL_STATE(48)] = 629,
  [SMALL_STATE(49)] = 645,
  [SMALL_STATE(50)] = 661,
  [SMALL_STATE(51)] = 677,
  [SMALL_STATE(52)] = 693,
  [SMALL_STATE(53)] = 709,
  [SMALL_STATE(54)] = 725,
  [SMALL_STATE(55)] = 741,
  [SMALL_STATE(56)] = 755,
  [SMALL_STATE(57)] = 771,
  [SMALL_STATE(58)] = 785,
  [SMALL_STATE(59)] = 807,
  [SMALL_STATE(60)] = 826,
  [SMALL_STATE(61)] = 843,
  [SMALL_STATE(62)] = 860,
  [SMALL_STATE(63)] = 877,
  [SMALL_STATE(64)] = 891,
  [SMALL_STATE(65)] = 905,
  [SMALL_STATE(66)] = 919,
  [SMALL_STATE(67)] = 932,
  [SMALL_STATE(68)] = 945,
  [SMALL_STATE(69)] = 958,
  [SMALL_STATE(70)] = 971,
  [SMALL_STATE(71)] = 984,
  [SMALL_STATE(72)] = 997,
  [SMALL_STATE(73)] = 1006,
  [SMALL_STATE(74)] = 1015,
  [SMALL_STATE(75)] = 1028,
  [SMALL_STATE(76)] = 1037,
  [SMALL_STATE(77)] = 1050,
  [SMALL_STATE(78)] = 1063,
  [SMALL_STATE(79)] = 1076,
  [SMALL_STATE(80)] = 1085,
  [SMALL_STATE(81)] = 1095,
  [SMALL_STATE(82)] = 1105,
  [SMALL_STATE(83)] = 1113,
  [SMALL_STATE(84)] = 1123,
  [SMALL_STATE(85)] = 1133,
  [SMALL_STATE(86)] = 1141,
  [SMALL_STATE(87)] = 1149,
  [SMALL_STATE(88)] = 1159,
  [SMALL_STATE(89)] = 1169,
  [SMALL_STATE(90)] = 1177,
  [SMALL_STATE(91)] = 1184,
  [SMALL_STATE(92)] = 1191,
  [SMALL_STATE(93)] = 1198,
  [SMALL_STATE(94)] = 1205,
  [SMALL_STATE(95)] = 1212,
  [SMALL_STATE(96)] = 1219,
  [SMALL_STATE(97)] = 1226,
  [SMALL_STATE(98)] = 1233,
  [SMALL_STATE(99)] = 1240,
  [SMALL_STATE(100)] = 1247,
  [SMALL_STATE(101)] = 1254,
  [SMALL_STATE(102)] = 1261,
  [SMALL_STATE(103)] = 1268,
  [SMALL_STATE(104)] = 1275,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_forall, 4, .production_id = 10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_infix, 4, .production_id = 11),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_infix, 3, .production_id = 9),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_lazy, 3, .production_id = 7),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_apply, 2, .production_id = 6),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_apply, 2, .production_id = 6),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_lazy, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_tuple_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tuple, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tuple, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_operator, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_operator, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_unit, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_unit, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_constructor, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parens, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parens, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_qualified_identifier, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uppercase_qualified_identifier, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variable, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_qualified_identifier, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uppercase_qualified_identifier, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_operator, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_operator, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_operator, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_operator, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ability, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_ability, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ability, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_ability, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, .production_id = 4), SHIFT_REPEAT(72),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, .production_id = 4),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_tuple_repeat1, 2), SHIFT_REPEAT(33),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_forall_repeat1, 2, .production_id = 8), SHIFT_REPEAT(86),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_forall_repeat1, 2, .production_id = 8),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 1, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5, .production_id = 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, .production_id = 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_forall_repeat1, 1, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_unison_external_scanner_create(void);
void tree_sitter_unison_external_scanner_destroy(void *);
bool tree_sitter_unison_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_unison_external_scanner_serialize(void *, char *);
void tree_sitter_unison_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_unison(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_unison_external_scanner_create,
      tree_sitter_unison_external_scanner_destroy,
      tree_sitter_unison_external_scanner_scan,
      tree_sitter_unison_external_scanner_serialize,
      tree_sitter_unison_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
