#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 18

enum {
  aux_sym__identifier_suffix_char_token1 = 1,
  aux_sym__identifier_suffix_char_token2 = 2,
  sym_uppercase_identifier = 3,
  sym_lowercase_identifier = 4,
  sym_operator = 5,
  anon_sym_DOT = 6,
  anon_sym_use = 7,
  anon_sym_COLON = 8,
  anon_sym_EQ = 9,
  aux_sym_lit_token1 = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_SQUOTE = 13,
  anon_sym_forall = 14,
  anon_sym_ = 15,
  anon_sym_COMMA = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  sym__start_mark = 19,
  sym__end_mark = 20,
  sym__newline = 21,
  sym_source_file = 22,
  sym_regular_identifier = 23,
  sym_identifier = 24,
  sym_namespace = 25,
  sym_qualified_identifier = 26,
  sym_uppercase_qualified_identifier = 27,
  sym_qualified_operator = 28,
  sym__toplevel = 29,
  sym_use_statement = 30,
  sym_declaration = 31,
  sym_definition = 32,
  sym_statement = 33,
  sym_block = 34,
  sym_var = 35,
  sym_lit = 36,
  sym_expression = 37,
  sym_type_variable = 38,
  sym_type_constructor = 39,
  sym_type_unit = 40,
  sym_type_operator = 41,
  sym_type_infix = 42,
  sym_type_lazy = 43,
  sym_type_parens = 44,
  sym_type_forall = 45,
  sym_type_tuple = 46,
  sym_type_apply = 47,
  sym_type_ability = 48,
  sym_type = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_use_statement_repeat1 = 51,
  aux_sym_definition_repeat1 = 52,
  aux_sym_block_repeat1 = 53,
  aux_sym_type_forall_repeat1 = 54,
  aux_sym_type_tuple_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__identifier_suffix_char_token1] = "_identifier_suffix_char_token1",
  [aux_sym__identifier_suffix_char_token2] = "_identifier_suffix_char_token2",
  [sym_uppercase_identifier] = "uppercase_identifier",
  [sym_lowercase_identifier] = "lowercase_identifier",
  [sym_operator] = "operator",
  [anon_sym_DOT] = ".",
  [anon_sym_use] = "use",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [aux_sym_lit_token1] = "lit_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_forall] = "forall",
  [anon_sym_] = "∀",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__start_mark] = "_start_mark",
  [sym__end_mark] = "_end_mark",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym_regular_identifier] = "regular_identifier",
  [sym_identifier] = "identifier",
  [sym_namespace] = "namespace",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_uppercase_qualified_identifier] = "uppercase_qualified_identifier",
  [sym_qualified_operator] = "qualified_operator",
  [sym__toplevel] = "_toplevel",
  [sym_use_statement] = "use_statement",
  [sym_declaration] = "declaration",
  [sym_definition] = "definition",
  [sym_statement] = "statement",
  [sym_block] = "block",
  [sym_var] = "var",
  [sym_lit] = "lit",
  [sym_expression] = "expression",
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
  [aux_sym_definition_repeat1] = "definition_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_type_forall_repeat1] = "type_forall_repeat1",
  [aux_sym_type_tuple_repeat1] = "type_tuple_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__identifier_suffix_char_token1] = aux_sym__identifier_suffix_char_token1,
  [aux_sym__identifier_suffix_char_token2] = aux_sym__identifier_suffix_char_token2,
  [sym_uppercase_identifier] = sym_uppercase_identifier,
  [sym_lowercase_identifier] = sym_lowercase_identifier,
  [sym_operator] = sym_operator,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_lit_token1] = aux_sym_lit_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_forall] = anon_sym_forall,
  [anon_sym_] = anon_sym_,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__start_mark] = sym__start_mark,
  [sym__end_mark] = sym__end_mark,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym_regular_identifier] = sym_regular_identifier,
  [sym_identifier] = sym_identifier,
  [sym_namespace] = sym_namespace,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_uppercase_qualified_identifier] = sym_uppercase_qualified_identifier,
  [sym_qualified_operator] = sym_qualified_operator,
  [sym__toplevel] = sym__toplevel,
  [sym_use_statement] = sym_use_statement,
  [sym_declaration] = sym_declaration,
  [sym_definition] = sym_definition,
  [sym_statement] = sym_statement,
  [sym_block] = sym_block,
  [sym_var] = sym_var,
  [sym_lit] = sym_lit,
  [sym_expression] = sym_expression,
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
  [aux_sym_definition_repeat1] = aux_sym_definition_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_type_forall_repeat1] = aux_sym_type_forall_repeat1,
  [aux_sym_type_tuple_repeat1] = aux_sym_type_tuple_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__identifier_suffix_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_suffix_char_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_uppercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_lowercase_identifier] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lit_token1] = {
    .visible = false,
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
  [anon_sym_] = {
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
  [sym_regular_identifier] = {
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
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
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
  [aux_sym_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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
  field_name = 5,
  field_namespace = 6,
  field_operator = 7,
  field_parameter = 8,
  field_right = 9,
  field_subject = 10,
  field_variable = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_ability] = "ability",
  [field_function] = "function",
  [field_import] = "import",
  [field_left] = "left",
  [field_name] = "name",
  [field_namespace] = "namespace",
  [field_operator] = "operator",
  [field_parameter] = "parameter",
  [field_right] = "right",
  [field_subject] = "subject",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 19, .length = 3},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 1},
  [17] = {.index = 25, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_subject, 0},
  [1] =
    {field_parameter, 0},
  [2] =
    {field_namespace, 2},
  [3] =
    {field_import, 0},
  [4] =
    {field_namespace, 0},
    {field_subject, 2},
  [6] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [8] =
    {field_import, 3, .inherited = true},
    {field_namespace, 2},
  [10] =
    {field_import, 0, .inherited = true},
    {field_import, 1, .inherited = true},
  [12] =
    {field_variable, 0},
  [13] =
    {field_function, 0},
    {field_parameter, 1},
  [15] =
    {field_name, 1},
  [16] =
    {field_ability, 1},
  [17] =
    {field_variable, 0, .inherited = true},
    {field_variable, 1, .inherited = true},
  [19] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [22] =
    {field_name, 1},
    {field_parameter, 2, .inherited = true},
  [24] =
    {field_variable, 1, .inherited = true},
  [25] =
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
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 6,
  [14] = 14,
  [15] = 7,
  [16] = 16,
  [17] = 5,
  [18] = 2,
  [19] = 10,
  [20] = 14,
  [21] = 16,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 22,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 26,
  [31] = 27,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 28,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 37,
  [47] = 36,
  [48] = 38,
  [49] = 41,
  [50] = 50,
  [51] = 51,
  [52] = 40,
  [53] = 53,
  [54] = 42,
  [55] = 55,
  [56] = 51,
  [57] = 57,
  [58] = 43,
  [59] = 45,
  [60] = 44,
  [61] = 61,
  [62] = 62,
  [63] = 61,
  [64] = 64,
  [65] = 65,
  [66] = 64,
  [67] = 67,
  [68] = 68,
  [69] = 67,
  [70] = 70,
  [71] = 71,
  [72] = 65,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 81,
  [83] = 83,
  [84] = 84,
  [85] = 77,
  [86] = 86,
  [87] = 79,
  [88] = 77,
  [89] = 79,
  [90] = 83,
  [91] = 75,
  [92] = 75,
  [93] = 93,
  [94] = 83,
  [95] = 93,
  [96] = 86,
  [97] = 80,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 77,
  [102] = 98,
  [103] = 103,
  [104] = 93,
  [105] = 80,
  [106] = 86,
  [107] = 107,
  [108] = 100,
  [109] = 109,
  [110] = 77,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 111,
  [115] = 113,
  [116] = 116,
  [117] = 116,
  [118] = 118,
  [119] = 119,
  [120] = 118,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 122,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 123,
  [129] = 119,
  [130] = 130,
  [131] = 130,
  [132] = 132,
  [133] = 133,
  [134] = 133,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 135,
  [139] = 139,
  [140] = 140,
  [141] = 140,
  [142] = 140,
  [143] = 77,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 144,
  [148] = 148,
  [149] = 137,
  [150] = 139,
};

static inline bool aux_sym__identifier_suffix_char_token2_character_set_1(int32_t c) {
  return (c < 127514
    ? (c < 9994
      ? (c < 9917
        ? (c < 9800
          ? (c < 9725
            ? (c < 9193
              ? (c >= 8986 && c <= 8987)
              : c <= 9203)
            : (c <= 9726 || (c >= 9748 && c <= 9749)))
          : (c <= 9811 || (c < 9889
            ? (c < 9875
              ? c == 9855
              : c <= 9875)
            : (c <= 9889 || (c >= 9898 && c <= 9899)))))
        : (c <= 9918 || (c < 9970
          ? (c < 9940
            ? (c < 9934
              ? (c >= 9924 && c <= 9925)
              : c <= 9934)
            : (c <= 9940 || c == 9962))
          : (c <= 9973 || (c < 9981
            ? c == 9978
            : (c <= 9981 || c == 9989))))))
      : (c <= 9995 || (c < 11035
        ? (c < 10071
          ? (c < 10062
            ? (c < 10060
              ? c == 10024
              : c <= 10060)
            : (c <= 10062 || (c >= 10067 && c <= 10069)))
          : (c <= 10071 || (c < 10160
            ? (c >= 10133 && c <= 10135)
            : (c <= 10160 || c == 10175))))
        : (c <= 11036 || (c < 127374
          ? (c < 126980
            ? (c < 11093
              ? c == 11088
              : c <= 11093)
            : (c <= 126980 || c == 127183))
          : (c <= 127374 || (c < 127462
            ? (c >= 127377 && c <= 127386)
            : (c <= 127487 || c == 127489))))))))
    : (c <= 127514 || (c < 128725
      ? (c < 128255
        ? (c < 127789
          ? (c < 127568
            ? (c < 127538
              ? c == 127535
              : c <= 127546)
            : (c <= 127569 || (c >= 127744 && c <= 127776)))
          : (c <= 127891 || (c < 127988
            ? (c >= 127904 && c <= 127984)
            : (c <= 127988 || (c >= 127992 && c <= 128252)))))
        : (c <= 128317 || (c < 128420
          ? (c < 128378
            ? (c < 128336
              ? (c >= 128331 && c <= 128334)
              : c <= 128359)
            : (c <= 128378 || (c >= 128405 && c <= 128406)))
          : (c <= 128420 || (c < 128640
            ? (c >= 128507 && c <= 128591)
            : (c <= 128709 || (c >= 128716 && c <= 128722)))))))
      : (c <= 128727 || (c < 129648
        ? (c < 129008
          ? (c < 128756
            ? (c < 128747
              ? (c >= 128733 && c <= 128735)
              : c <= 128748)
            : (c <= 128764 || (c >= 128992 && c <= 129003)))
          : (c <= 129008 || (c < 129340
            ? (c >= 129292 && c <= 129338)
            : (c <= 129349 || (c >= 129351 && c <= 129535)))))
        : (c <= 129652 || (c < 129728
          ? (c < 129680
            ? (c < 129664
              ? (c >= 129656 && c <= 129660)
              : c <= 129670)
            : (c <= 129708 || (c >= 129712 && c <= 129722)))
          : (c <= 129733 || (c < 129760
            ? (c >= 129744 && c <= 129753)
            : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))));
}

static inline bool sym_uppercase_identifier_character_set_1(int32_t c) {
  return (c < 10004
    ? (c < 9784
      ? (c < 9410
        ? (c < 8596
          ? (c < 8252
            ? (c < 169
              ? c == '#'
              : (c <= 169 || c == 174))
            : (c <= 8252 || (c < 8482
              ? c == 8265
              : (c <= 8482 || c == 8505))))
          : (c <= 8601 || (c < 9197
            ? (c < 9000
              ? (c >= 8617 && c <= 8618)
              : (c <= 9000 || c == 9167))
            : (c <= 9199 || (c < 9208
              ? (c >= 9201 && c <= 9202)
              : c <= 9210)))))
        : (c <= 9410 || (c < 9752
          ? (c < 9723
            ? (c < 9654
              ? (c >= 9642 && c <= 9643)
              : (c <= 9654 || c == 9664))
            : (c <= 9724 || (c < 9742
              ? (c >= 9728 && c <= 9732)
              : (c <= 9742 || c == 9745))))
          : (c <= 9752 || (c < 9766
            ? (c < 9760
              ? c == 9757
              : (c <= 9760 || (c >= 9762 && c <= 9763)))
            : (c <= 9766 || (c < 9774
              ? c == 9770
              : c <= 9775)))))))
      : (c <= 9786 || (c < 9904
        ? (c < 9854
          ? (c < 9827
            ? (c < 9794
              ? c == 9792
              : (c <= 9794 || (c >= 9823 && c <= 9824)))
            : (c <= 9827 || (c < 9832
              ? (c >= 9829 && c <= 9830)
              : (c <= 9832 || c == 9851))))
          : (c <= 9854 || (c < 9883
            ? (c < 9876
              ? c == 9874
              : (c <= 9879 || c == 9881))
            : (c <= 9884 || (c < 9895
              ? c == 9888
              : c <= 9895)))))
        : (c <= 9905 || (c < 9972
          ? (c < 9939
            ? (c < 9935
              ? c == 9928
              : (c <= 9935 || c == 9937))
            : (c <= 9939 || (c < 9968
              ? c == 9961
              : c <= 9969)))
          : (c <= 9972 || (c < 9996
            ? (c < 9986
              ? (c >= 9975 && c <= 9977)
              : (c <= 9986 || (c >= 9992 && c <= 9993)))
            : (c <= 9997 || (c < 10002
              ? c == 9999
              : c <= 10002)))))))))
    : (c <= 10004 || (c < 127991
      ? (c < 127344
        ? (c < 10145
          ? (c < 10035
            ? (c < 10013
              ? c == 10006
              : (c <= 10013 || c == 10017))
            : (c <= 10036 || (c < 10055
              ? c == 10052
              : (c <= 10055 || (c >= 10083 && c <= 10084)))))
          : (c <= 10145 || (c < 12349
            ? (c < 11013
              ? (c >= 10548 && c <= 10549)
              : (c <= 11015 || c == 12336))
            : (c <= 12349 || (c < 12953
              ? c == 12951
              : c <= 12953)))))
        : (c <= 127345 || (c < 127894
          ? (c < 127777
            ? (c < 127490
              ? (c >= 127358 && c <= 127359)
              : (c <= 127490 || c == 127543))
            : (c <= 127777 || (c < 127798
              ? (c >= 127780 && c <= 127788)
              : (c <= 127798 || c == 127869))))
          : (c <= 127895 || (c < 127956
            ? (c < 127902
              ? (c >= 127897 && c <= 127899)
              : (c <= 127903 || (c >= 127947 && c <= 127950)))
            : (c <= 127967 || (c < 127989
              ? c == 127987
              : c <= 127989)))))))
      : (c <= 127991 || (c < 128465
        ? (c < 128394
          ? (c < 128329
            ? (c < 128065
              ? c == 128063
              : (c <= 128065 || c == 128253))
            : (c <= 128330 || (c < 128371
              ? (c >= 128367 && c <= 128368)
              : (c <= 128377 || c == 128391))))
          : (c <= 128397 || (c < 128433
            ? (c < 128421
              ? c == 128400
              : (c <= 128421 || c == 128424))
            : (c <= 128434 || (c < 128450
              ? c == 128444
              : c <= 128452)))))
        : (c <= 128467 || (c < 128506
          ? (c < 128488
            ? (c < 128481
              ? (c >= 128476 && c <= 128478)
              : (c <= 128481 || c == 128483))
            : (c <= 128488 || (c < 128499
              ? c == 128495
              : c <= 128499)))
          : (c <= 128506 || (c < 128745
            ? (c < 128717
              ? c == 128715
              : (c <= 128719 || (c >= 128736 && c <= 128741)))
            : (c <= 128745 || (c < 128755
              ? c == 128752
              : c <= 128755)))))))))));
}

static inline bool sym_uppercase_identifier_character_set_2(int32_t c) {
  return (c < 7736
    ? (c < 931
      ? (c < 425
        ? (c < 330
          ? (c < 290
            ? (c < 270
              ? (c < 260
                ? (c < 256
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 222)
                  : (c <= 256 || c == 258))
                : (c <= 260 || (c < 266
                  ? (c < 264
                    ? c == 262
                    : c <= 264)
                  : (c <= 266 || c == 268))))
              : (c <= 270 || (c < 280
                ? (c < 276
                  ? (c < 274
                    ? c == 272
                    : c <= 274)
                  : (c <= 276 || c == 278))
                : (c <= 280 || (c < 286
                  ? (c < 284
                    ? c == 282
                    : c <= 284)
                  : (c <= 286 || c == 288))))))
            : (c <= 290 || (c < 310
              ? (c < 300
                ? (c < 296
                  ? (c < 294
                    ? c == 292
                    : c <= 294)
                  : (c <= 296 || c == 298))
                : (c <= 300 || (c < 306
                  ? (c < 304
                    ? c == 302
                    : c <= 304)
                  : (c <= 306 || c == 308))))
              : (c <= 310 || (c < 321
                ? (c < 317
                  ? (c < 315
                    ? c == 313
                    : c <= 315)
                  : (c <= 317 || c == 319))
                : (c <= 321 || (c < 325
                  ? c == 323
                  : (c <= 325 || c == 327))))))))
          : (c <= 330 || (c < 368
            ? (c < 350
              ? (c < 340
                ? (c < 336
                  ? (c < 334
                    ? c == 332
                    : c <= 334)
                  : (c <= 336 || c == 338))
                : (c <= 340 || (c < 346
                  ? (c < 344
                    ? c == 342
                    : c <= 344)
                  : (c <= 346 || c == 348))))
              : (c <= 350 || (c < 360
                ? (c < 356
                  ? (c < 354
                    ? c == 352
                    : c <= 354)
                  : (c <= 356 || c == 358))
                : (c <= 360 || (c < 364
                  ? c == 362
                  : (c <= 364 || c == 366))))))
            : (c <= 368 || (c < 393
              ? (c < 379
                ? (c < 374
                  ? (c < 372
                    ? c == 370
                    : c <= 372)
                  : (c <= 374 || (c >= 376 && c <= 377)))
                : (c <= 379 || (c < 388
                  ? (c < 385
                    ? c == 381
                    : c <= 386)
                  : (c <= 388 || (c >= 390 && c <= 391)))))
              : (c <= 395 || (c < 415
                ? (c < 406
                  ? (c < 403
                    ? (c >= 398 && c <= 401)
                    : c <= 404)
                  : (c <= 408 || (c >= 412 && c <= 413)))
                : (c <= 416 || (c < 420
                  ? c == 418
                  : (c <= 420 || (c >= 422 && c <= 423)))))))))))
        : (c <= 425 || (c < 522
          ? (c < 480
            ? (c < 461
              ? (c < 439
                ? (c < 433
                  ? (c < 430
                    ? c == 428
                    : c <= 431)
                  : (c <= 435 || c == 437))
                : (c <= 440 || (c < 455
                  ? (c < 452
                    ? c == 444
                    : c <= 452)
                  : (c <= 455 || c == 458))))
              : (c <= 461 || (c < 471
                ? (c < 467
                  ? (c < 465
                    ? c == 463
                    : c <= 465)
                  : (c <= 467 || c == 469))
                : (c <= 471 || (c < 475
                  ? c == 473
                  : (c <= 475 || c == 478))))))
            : (c <= 480 || (c < 502
              ? (c < 490
                ? (c < 486
                  ? (c < 484
                    ? c == 482
                    : c <= 484)
                  : (c <= 486 || c == 488))
                : (c <= 490 || (c < 497
                  ? (c < 494
                    ? c == 492
                    : c <= 494)
                  : (c <= 497 || c == 500))))
              : (c <= 504 || (c < 514
                ? (c < 510
                  ? (c < 508
                    ? c == 506
                    : c <= 508)
                  : (c <= 510 || c == 512))
                : (c <= 514 || (c < 518
                  ? c == 516
                  : (c <= 518 || c == 520))))))))
          : (c <= 522 || (c < 560
            ? (c < 542
              ? (c < 532
                ? (c < 528
                  ? (c < 526
                    ? c == 524
                    : c <= 526)
                  : (c <= 528 || c == 530))
                : (c <= 532 || (c < 538
                  ? (c < 536
                    ? c == 534
                    : c <= 536)
                  : (c <= 538 || c == 540))))
              : (c <= 542 || (c < 552
                ? (c < 548
                  ? (c < 546
                    ? c == 544
                    : c <= 546)
                  : (c <= 548 || c == 550))
                : (c <= 552 || (c < 556
                  ? c == 554
                  : (c <= 556 || c == 558))))))
            : (c <= 560 || (c < 880
              ? (c < 579
                ? (c < 573
                  ? (c < 570
                    ? c == 562
                    : c <= 571)
                  : (c <= 574 || c == 577))
                : (c <= 582 || (c < 588
                  ? (c < 586
                    ? c == 584
                    : c <= 586)
                  : (c <= 588 || c == 590))))
              : (c <= 880 || (c < 904
                ? (c < 895
                  ? (c < 886
                    ? c == 882
                    : c <= 886)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 911 || (c >= 913 && c <= 929)))))))))))))
      : (c <= 939 || (c < 1246
        ? (c < 1168
          ? (c < 1122
            ? (c < 998
              ? (c < 988
                ? (c < 984
                  ? (c < 978
                    ? c == 975
                    : c <= 980)
                  : (c <= 984 || c == 986))
                : (c <= 988 || (c < 994
                  ? (c < 992
                    ? c == 990
                    : c <= 992)
                  : (c <= 994 || c == 996))))
              : (c <= 998 || (c < 1012
                ? (c < 1004
                  ? (c < 1002
                    ? c == 1000
                    : c <= 1002)
                  : (c <= 1004 || c == 1006))
                : (c <= 1012 || (c < 1021
                  ? (c < 1017
                    ? c == 1015
                    : c <= 1018)
                  : (c <= 1071 || c == 1120))))))
            : (c <= 1122 || (c < 1142
              ? (c < 1132
                ? (c < 1128
                  ? (c < 1126
                    ? c == 1124
                    : c <= 1126)
                  : (c <= 1128 || c == 1130))
                : (c <= 1132 || (c < 1138
                  ? (c < 1136
                    ? c == 1134
                    : c <= 1136)
                  : (c <= 1138 || c == 1140))))
              : (c <= 1142 || (c < 1152
                ? (c < 1148
                  ? (c < 1146
                    ? c == 1144
                    : c <= 1146)
                  : (c <= 1148 || c == 1150))
                : (c <= 1152 || (c < 1164
                  ? c == 1162
                  : (c <= 1164 || c == 1166))))))))
          : (c <= 1168 || (c < 1206
            ? (c < 1188
              ? (c < 1178
                ? (c < 1174
                  ? (c < 1172
                    ? c == 1170
                    : c <= 1172)
                  : (c <= 1174 || c == 1176))
                : (c <= 1178 || (c < 1184
                  ? (c < 1182
                    ? c == 1180
                    : c <= 1182)
                  : (c <= 1184 || c == 1186))))
              : (c <= 1188 || (c < 1198
                ? (c < 1194
                  ? (c < 1192
                    ? c == 1190
                    : c <= 1192)
                  : (c <= 1194 || c == 1196))
                : (c <= 1198 || (c < 1202
                  ? c == 1200
                  : (c <= 1202 || c == 1204))))))
            : (c <= 1206 || (c < 1227
              ? (c < 1216
                ? (c < 1212
                  ? (c < 1210
                    ? c == 1208
                    : c <= 1210)
                  : (c <= 1212 || c == 1214))
                : (c <= 1217 || (c < 1223
                  ? (c < 1221
                    ? c == 1219
                    : c <= 1221)
                  : (c <= 1223 || c == 1225))))
              : (c <= 1227 || (c < 1238
                ? (c < 1234
                  ? (c < 1232
                    ? c == 1229
                    : c <= 1232)
                  : (c <= 1234 || c == 1236))
                : (c <= 1238 || (c < 1242
                  ? c == 1240
                  : (c <= 1242 || c == 1244))))))))))
        : (c <= 1246 || (c < 1322
          ? (c < 1284
            ? (c < 1266
              ? (c < 1256
                ? (c < 1252
                  ? (c < 1250
                    ? c == 1248
                    : c <= 1250)
                  : (c <= 1252 || c == 1254))
                : (c <= 1256 || (c < 1262
                  ? (c < 1260
                    ? c == 1258
                    : c <= 1260)
                  : (c <= 1262 || c == 1264))))
              : (c <= 1266 || (c < 1276
                ? (c < 1272
                  ? (c < 1270
                    ? c == 1268
                    : c <= 1270)
                  : (c <= 1272 || c == 1274))
                : (c <= 1276 || (c < 1280
                  ? c == 1278
                  : (c <= 1280 || c == 1282))))))
            : (c <= 1284 || (c < 1304
              ? (c < 1294
                ? (c < 1290
                  ? (c < 1288
                    ? c == 1286
                    : c <= 1288)
                  : (c <= 1290 || c == 1292))
                : (c <= 1294 || (c < 1300
                  ? (c < 1298
                    ? c == 1296
                    : c <= 1298)
                  : (c <= 1300 || c == 1302))))
              : (c <= 1304 || (c < 1314
                ? (c < 1310
                  ? (c < 1308
                    ? c == 1306
                    : c <= 1308)
                  : (c <= 1310 || c == 1312))
                : (c <= 1314 || (c < 1318
                  ? c == 1316
                  : (c <= 1318 || c == 1320))))))))
          : (c <= 1322 || (c < 7698
            ? (c < 7680
              ? (c < 4295
                ? (c < 1329
                  ? (c < 1326
                    ? c == 1324
                    : c <= 1326)
                  : (c <= 1366 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 7312
                  ? (c < 5024
                    ? c == 4301
                    : c <= 5109)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))
              : (c <= 7680 || (c < 7690
                ? (c < 7686
                  ? (c < 7684
                    ? c == 7682
                    : c <= 7684)
                  : (c <= 7686 || c == 7688))
                : (c <= 7690 || (c < 7694
                  ? c == 7692
                  : (c <= 7694 || c == 7696))))))
            : (c <= 7698 || (c < 7718
              ? (c < 7708
                ? (c < 7704
                  ? (c < 7702
                    ? c == 7700
                    : c <= 7702)
                  : (c <= 7704 || c == 7706))
                : (c <= 7708 || (c < 7714
                  ? (c < 7712
                    ? c == 7710
                    : c <= 7712)
                  : (c <= 7714 || c == 7716))))
              : (c <= 7718 || (c < 7728
                ? (c < 7724
                  ? (c < 7722
                    ? c == 7720
                    : c <= 7722)
                  : (c <= 7724 || c == 7726))
                : (c <= 7728 || (c < 7732
                  ? c == 7730
                  : (c <= 7732 || c == 7734))))))))))))))
    : (c <= 7736 || (c < 11430
      ? (c < 7898
        ? (c < 7814
          ? (c < 7776
            ? (c < 7756
              ? (c < 7746
                ? (c < 7742
                  ? (c < 7740
                    ? c == 7738
                    : c <= 7740)
                  : (c <= 7742 || c == 7744))
                : (c <= 7746 || (c < 7752
                  ? (c < 7750
                    ? c == 7748
                    : c <= 7750)
                  : (c <= 7752 || c == 7754))))
              : (c <= 7756 || (c < 7766
                ? (c < 7762
                  ? (c < 7760
                    ? c == 7758
                    : c <= 7760)
                  : (c <= 7762 || c == 7764))
                : (c <= 7766 || (c < 7772
                  ? (c < 7770
                    ? c == 7768
                    : c <= 7770)
                  : (c <= 7772 || c == 7774))))))
            : (c <= 7776 || (c < 7796
              ? (c < 7786
                ? (c < 7782
                  ? (c < 7780
                    ? c == 7778
                    : c <= 7780)
                  : (c <= 7782 || c == 7784))
                : (c <= 7786 || (c < 7792
                  ? (c < 7790
                    ? c == 7788
                    : c <= 7790)
                  : (c <= 7792 || c == 7794))))
              : (c <= 7796 || (c < 7806
                ? (c < 7802
                  ? (c < 7800
                    ? c == 7798
                    : c <= 7800)
                  : (c <= 7802 || c == 7804))
                : (c <= 7806 || (c < 7810
                  ? c == 7808
                  : (c <= 7810 || c == 7812))))))))
          : (c <= 7814 || (c < 7860
            ? (c < 7842
              ? (c < 7824
                ? (c < 7820
                  ? (c < 7818
                    ? c == 7816
                    : c <= 7818)
                  : (c <= 7820 || c == 7822))
                : (c <= 7824 || (c < 7838
                  ? (c < 7828
                    ? c == 7826
                    : c <= 7828)
                  : (c <= 7838 || c == 7840))))
              : (c <= 7842 || (c < 7852
                ? (c < 7848
                  ? (c < 7846
                    ? c == 7844
                    : c <= 7846)
                  : (c <= 7848 || c == 7850))
                : (c <= 7852 || (c < 7856
                  ? c == 7854
                  : (c <= 7856 || c == 7858))))))
            : (c <= 7860 || (c < 7880
              ? (c < 7870
                ? (c < 7866
                  ? (c < 7864
                    ? c == 7862
                    : c <= 7864)
                  : (c <= 7866 || c == 7868))
                : (c <= 7870 || (c < 7876
                  ? (c < 7874
                    ? c == 7872
                    : c <= 7874)
                  : (c <= 7876 || c == 7878))))
              : (c <= 7880 || (c < 7890
                ? (c < 7886
                  ? (c < 7884
                    ? c == 7882
                    : c <= 7884)
                  : (c <= 7886 || c == 7888))
                : (c <= 7890 || (c < 7894
                  ? c == 7892
                  : (c <= 7894 || c == 7896))))))))))
        : (c <= 7898 || (c < 8469
          ? (c < 7944
            ? (c < 7918
              ? (c < 7908
                ? (c < 7904
                  ? (c < 7902
                    ? c == 7900
                    : c <= 7902)
                  : (c <= 7904 || c == 7906))
                : (c <= 7908 || (c < 7914
                  ? (c < 7912
                    ? c == 7910
                    : c <= 7912)
                  : (c <= 7914 || c == 7916))))
              : (c <= 7918 || (c < 7928
                ? (c < 7924
                  ? (c < 7922
                    ? c == 7920
                    : c <= 7922)
                  : (c <= 7924 || c == 7926))
                : (c <= 7928 || (c < 7932
                  ? c == 7930
                  : (c <= 7932 || c == 7934))))))
            : (c <= 7951 || (c < 8120
              ? (c < 8025
                ? (c < 7992
                  ? (c < 7976
                    ? (c >= 7960 && c <= 7965)
                    : c <= 7983)
                  : (c <= 7999 || (c >= 8008 && c <= 8013)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8031 || (c >= 8040 && c <= 8047)))))
              : (c <= 8123 || (c < 8450
                ? (c < 8168
                  ? (c < 8152
                    ? (c >= 8136 && c <= 8139)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8184 && c <= 8187)))
                : (c <= 8450 || (c < 8459
                  ? c == 8455
                  : (c <= 8461 || (c >= 8464 && c <= 8466)))))))))
          : (c <= 8469 || (c < 11390
            ? (c < 11264
              ? (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8473 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8493 || (c < 8517
                  ? (c < 8510
                    ? (c >= 8496 && c <= 8499)
                    : c <= 8511)
                  : (c <= 8517 || c == 8579))))
              : (c <= 11311 || (c < 11371
                ? (c < 11367
                  ? (c < 11362
                    ? c == 11360
                    : c <= 11364)
                  : (c <= 11367 || c == 11369))
                : (c <= 11371 || (c < 11378
                  ? (c >= 11373 && c <= 11376)
                  : (c <= 11378 || c == 11381))))))
            : (c <= 11392 || (c < 11412
              ? (c < 11402
                ? (c < 11398
                  ? (c < 11396
                    ? c == 11394
                    : c <= 11396)
                  : (c <= 11398 || c == 11400))
                : (c <= 11402 || (c < 11408
                  ? (c < 11406
                    ? c == 11404
                    : c <= 11406)
                  : (c <= 11408 || c == 11410))))
              : (c <= 11412 || (c < 11422
                ? (c < 11418
                  ? (c < 11416
                    ? c == 11414
                    : c <= 11416)
                  : (c <= 11418 || c == 11420))
                : (c <= 11422 || (c < 11426
                  ? c == 11424
                  : (c <= 11426 || c == 11428))))))))))))
      : (c <= 11430 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11450
              ? (c < 11440
                ? (c < 11436
                  ? (c < 11434
                    ? c == 11432
                    : c <= 11434)
                  : (c <= 11436 || c == 11438))
                : (c <= 11440 || (c < 11446
                  ? (c < 11444
                    ? c == 11442
                    : c <= 11444)
                  : (c <= 11446 || c == 11448))))
              : (c <= 11450 || (c < 11460
                ? (c < 11456
                  ? (c < 11454
                    ? c == 11452
                    : c <= 11454)
                  : (c <= 11456 || c == 11458))
                : (c <= 11460 || (c < 11464
                  ? c == 11462
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool sym_uppercase_identifier_character_set_3(int32_t c) {
  return (c < 7734
    ? (c < 913
      ? (c < 422
        ? (c < 327
          ? (c < 288
            ? (c < 268
              ? (c < 258
                ? (c < 216
                  ? (c < 192
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 214)
                  : (c <= 222 || c == 256))
                : (c <= 258 || (c < 264
                  ? (c < 262
                    ? c == 260
                    : c <= 262)
                  : (c <= 264 || c == 266))))
              : (c <= 268 || (c < 278
                ? (c < 274
                  ? (c < 272
                    ? c == 270
                    : c <= 272)
                  : (c <= 274 || c == 276))
                : (c <= 278 || (c < 284
                  ? (c < 282
                    ? c == 280
                    : c <= 282)
                  : (c <= 284 || c == 286))))))
            : (c <= 288 || (c < 308
              ? (c < 298
                ? (c < 294
                  ? (c < 292
                    ? c == 290
                    : c <= 292)
                  : (c <= 294 || c == 296))
                : (c <= 298 || (c < 304
                  ? (c < 302
                    ? c == 300
                    : c <= 302)
                  : (c <= 304 || c == 306))))
              : (c <= 308 || (c < 319
                ? (c < 315
                  ? (c < 313
                    ? c == 310
                    : c <= 313)
                  : (c <= 315 || c == 317))
                : (c <= 319 || (c < 323
                  ? c == 321
                  : (c <= 323 || c == 325))))))))
          : (c <= 327 || (c < 366
            ? (c < 348
              ? (c < 338
                ? (c < 334
                  ? (c < 332
                    ? c == 330
                    : c <= 332)
                  : (c <= 334 || c == 336))
                : (c <= 338 || (c < 344
                  ? (c < 342
                    ? c == 340
                    : c <= 342)
                  : (c <= 344 || c == 346))))
              : (c <= 348 || (c < 358
                ? (c < 354
                  ? (c < 352
                    ? c == 350
                    : c <= 352)
                  : (c <= 354 || c == 356))
                : (c <= 358 || (c < 362
                  ? c == 360
                  : (c <= 362 || c == 364))))))
            : (c <= 366 || (c < 390
              ? (c < 376
                ? (c < 372
                  ? (c < 370
                    ? c == 368
                    : c <= 370)
                  : (c <= 372 || c == 374))
                : (c <= 377 || (c < 385
                  ? (c < 381
                    ? c == 379
                    : c <= 381)
                  : (c <= 386 || c == 388))))
              : (c <= 391 || (c < 412
                ? (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))
                : (c <= 413 || (c < 418
                  ? (c >= 415 && c <= 416)
                  : (c <= 418 || c == 420))))))))))
        : (c <= 423 || (c < 520
          ? (c < 478
            ? (c < 458
              ? (c < 437
                ? (c < 430
                  ? (c < 428
                    ? c == 425
                    : c <= 428)
                  : (c <= 431 || (c >= 433 && c <= 435)))
                : (c <= 437 || (c < 452
                  ? (c < 444
                    ? (c >= 439 && c <= 440)
                    : c <= 444)
                  : (c <= 452 || c == 455))))
              : (c <= 458 || (c < 469
                ? (c < 465
                  ? (c < 463
                    ? c == 461
                    : c <= 463)
                  : (c <= 465 || c == 467))
                : (c <= 469 || (c < 473
                  ? c == 471
                  : (c <= 473 || c == 475))))))
            : (c <= 478 || (c < 500
              ? (c < 488
                ? (c < 484
                  ? (c < 482
                    ? c == 480
                    : c <= 482)
                  : (c <= 484 || c == 486))
                : (c <= 488 || (c < 494
                  ? (c < 492
                    ? c == 490
                    : c <= 492)
                  : (c <= 494 || c == 497))))
              : (c <= 500 || (c < 512
                ? (c < 508
                  ? (c < 506
                    ? (c >= 502 && c <= 504)
                    : c <= 506)
                  : (c <= 508 || c == 510))
                : (c <= 512 || (c < 516
                  ? c == 514
                  : (c <= 516 || c == 518))))))))
          : (c <= 520 || (c < 558
            ? (c < 540
              ? (c < 530
                ? (c < 526
                  ? (c < 524
                    ? c == 522
                    : c <= 524)
                  : (c <= 526 || c == 528))
                : (c <= 530 || (c < 536
                  ? (c < 534
                    ? c == 532
                    : c <= 534)
                  : (c <= 536 || c == 538))))
              : (c <= 540 || (c < 550
                ? (c < 546
                  ? (c < 544
                    ? c == 542
                    : c <= 544)
                  : (c <= 546 || c == 548))
                : (c <= 550 || (c < 554
                  ? c == 552
                  : (c <= 554 || c == 556))))))
            : (c <= 558 || (c < 590
              ? (c < 577
                ? (c < 570
                  ? (c < 562
                    ? c == 560
                    : c <= 562)
                  : (c <= 571 || (c >= 573 && c <= 574)))
                : (c <= 577 || (c < 586
                  ? (c < 584
                    ? (c >= 579 && c <= 582)
                    : c <= 584)
                  : (c <= 586 || c == 588))))
              : (c <= 590 || (c < 902
                ? (c < 886
                  ? (c < 882
                    ? c == 880
                    : c <= 882)
                  : (c <= 886 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 911)))))))))))))
      : (c <= 929 || (c < 1244
        ? (c < 1166
          ? (c < 1120
            ? (c < 996
              ? (c < 986
                ? (c < 978
                  ? (c < 975
                    ? (c >= 931 && c <= 939)
                    : c <= 975)
                  : (c <= 980 || c == 984))
                : (c <= 986 || (c < 992
                  ? (c < 990
                    ? c == 988
                    : c <= 990)
                  : (c <= 992 || c == 994))))
              : (c <= 996 || (c < 1006
                ? (c < 1002
                  ? (c < 1000
                    ? c == 998
                    : c <= 1000)
                  : (c <= 1002 || c == 1004))
                : (c <= 1006 || (c < 1017
                  ? (c < 1015
                    ? c == 1012
                    : c <= 1015)
                  : (c <= 1018 || (c >= 1021 && c <= 1071)))))))
            : (c <= 1120 || (c < 1140
              ? (c < 1130
                ? (c < 1126
                  ? (c < 1124
                    ? c == 1122
                    : c <= 1124)
                  : (c <= 1126 || c == 1128))
                : (c <= 1130 || (c < 1136
                  ? (c < 1134
                    ? c == 1132
                    : c <= 1134)
                  : (c <= 1136 || c == 1138))))
              : (c <= 1140 || (c < 1150
                ? (c < 1146
                  ? (c < 1144
                    ? c == 1142
                    : c <= 1144)
                  : (c <= 1146 || c == 1148))
                : (c <= 1150 || (c < 1162
                  ? c == 1152
                  : (c <= 1162 || c == 1164))))))))
          : (c <= 1166 || (c < 1204
            ? (c < 1186
              ? (c < 1176
                ? (c < 1172
                  ? (c < 1170
                    ? c == 1168
                    : c <= 1170)
                  : (c <= 1172 || c == 1174))
                : (c <= 1176 || (c < 1182
                  ? (c < 1180
                    ? c == 1178
                    : c <= 1180)
                  : (c <= 1182 || c == 1184))))
              : (c <= 1186 || (c < 1196
                ? (c < 1192
                  ? (c < 1190
                    ? c == 1188
                    : c <= 1190)
                  : (c <= 1192 || c == 1194))
                : (c <= 1196 || (c < 1200
                  ? c == 1198
                  : (c <= 1200 || c == 1202))))))
            : (c <= 1204 || (c < 1225
              ? (c < 1214
                ? (c < 1210
                  ? (c < 1208
                    ? c == 1206
                    : c <= 1208)
                  : (c <= 1210 || c == 1212))
                : (c <= 1214 || (c < 1221
                  ? (c < 1219
                    ? (c >= 1216 && c <= 1217)
                    : c <= 1219)
                  : (c <= 1221 || c == 1223))))
              : (c <= 1225 || (c < 1236
                ? (c < 1232
                  ? (c < 1229
                    ? c == 1227
                    : c <= 1229)
                  : (c <= 1232 || c == 1234))
                : (c <= 1236 || (c < 1240
                  ? c == 1238
                  : (c <= 1240 || c == 1242))))))))))
        : (c <= 1244 || (c < 1320
          ? (c < 1282
            ? (c < 1264
              ? (c < 1254
                ? (c < 1250
                  ? (c < 1248
                    ? c == 1246
                    : c <= 1248)
                  : (c <= 1250 || c == 1252))
                : (c <= 1254 || (c < 1260
                  ? (c < 1258
                    ? c == 1256
                    : c <= 1258)
                  : (c <= 1260 || c == 1262))))
              : (c <= 1264 || (c < 1274
                ? (c < 1270
                  ? (c < 1268
                    ? c == 1266
                    : c <= 1268)
                  : (c <= 1270 || c == 1272))
                : (c <= 1274 || (c < 1278
                  ? c == 1276
                  : (c <= 1278 || c == 1280))))))
            : (c <= 1282 || (c < 1302
              ? (c < 1292
                ? (c < 1288
                  ? (c < 1286
                    ? c == 1284
                    : c <= 1286)
                  : (c <= 1288 || c == 1290))
                : (c <= 1292 || (c < 1298
                  ? (c < 1296
                    ? c == 1294
                    : c <= 1296)
                  : (c <= 1298 || c == 1300))))
              : (c <= 1302 || (c < 1312
                ? (c < 1308
                  ? (c < 1306
                    ? c == 1304
                    : c <= 1306)
                  : (c <= 1308 || c == 1310))
                : (c <= 1312 || (c < 1316
                  ? c == 1314
                  : (c <= 1316 || c == 1318))))))))
          : (c <= 1320 || (c < 7696
            ? (c < 7357
              ? (c < 4256
                ? (c < 1326
                  ? (c < 1324
                    ? c == 1322
                    : c <= 1324)
                  : (c <= 1326 || (c >= 1329 && c <= 1366)))
                : (c <= 4293 || (c < 5024
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 5109 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7688
                ? (c < 7684
                  ? (c < 7682
                    ? c == 7680
                    : c <= 7682)
                  : (c <= 7684 || c == 7686))
                : (c <= 7688 || (c < 7692
                  ? c == 7690
                  : (c <= 7692 || c == 7694))))))
            : (c <= 7696 || (c < 7716
              ? (c < 7706
                ? (c < 7702
                  ? (c < 7700
                    ? c == 7698
                    : c <= 7700)
                  : (c <= 7702 || c == 7704))
                : (c <= 7706 || (c < 7712
                  ? (c < 7710
                    ? c == 7708
                    : c <= 7710)
                  : (c <= 7712 || c == 7714))))
              : (c <= 7716 || (c < 7726
                ? (c < 7722
                  ? (c < 7720
                    ? c == 7718
                    : c <= 7720)
                  : (c <= 7722 || c == 7724))
                : (c <= 7726 || (c < 7730
                  ? c == 7728
                  : (c <= 7730 || c == 7732))))))))))))))
    : (c <= 7734 || (c < 11428
      ? (c < 7896
        ? (c < 7812
          ? (c < 7774
            ? (c < 7754
              ? (c < 7744
                ? (c < 7740
                  ? (c < 7738
                    ? c == 7736
                    : c <= 7738)
                  : (c <= 7740 || c == 7742))
                : (c <= 7744 || (c < 7750
                  ? (c < 7748
                    ? c == 7746
                    : c <= 7748)
                  : (c <= 7750 || c == 7752))))
              : (c <= 7754 || (c < 7764
                ? (c < 7760
                  ? (c < 7758
                    ? c == 7756
                    : c <= 7758)
                  : (c <= 7760 || c == 7762))
                : (c <= 7764 || (c < 7770
                  ? (c < 7768
                    ? c == 7766
                    : c <= 7768)
                  : (c <= 7770 || c == 7772))))))
            : (c <= 7774 || (c < 7794
              ? (c < 7784
                ? (c < 7780
                  ? (c < 7778
                    ? c == 7776
                    : c <= 7778)
                  : (c <= 7780 || c == 7782))
                : (c <= 7784 || (c < 7790
                  ? (c < 7788
                    ? c == 7786
                    : c <= 7788)
                  : (c <= 7790 || c == 7792))))
              : (c <= 7794 || (c < 7804
                ? (c < 7800
                  ? (c < 7798
                    ? c == 7796
                    : c <= 7798)
                  : (c <= 7800 || c == 7802))
                : (c <= 7804 || (c < 7808
                  ? c == 7806
                  : (c <= 7808 || c == 7810))))))))
          : (c <= 7812 || (c < 7858
            ? (c < 7840
              ? (c < 7822
                ? (c < 7818
                  ? (c < 7816
                    ? c == 7814
                    : c <= 7816)
                  : (c <= 7818 || c == 7820))
                : (c <= 7822 || (c < 7828
                  ? (c < 7826
                    ? c == 7824
                    : c <= 7826)
                  : (c <= 7828 || c == 7838))))
              : (c <= 7840 || (c < 7850
                ? (c < 7846
                  ? (c < 7844
                    ? c == 7842
                    : c <= 7844)
                  : (c <= 7846 || c == 7848))
                : (c <= 7850 || (c < 7854
                  ? c == 7852
                  : (c <= 7854 || c == 7856))))))
            : (c <= 7858 || (c < 7878
              ? (c < 7868
                ? (c < 7864
                  ? (c < 7862
                    ? c == 7860
                    : c <= 7862)
                  : (c <= 7864 || c == 7866))
                : (c <= 7868 || (c < 7874
                  ? (c < 7872
                    ? c == 7870
                    : c <= 7872)
                  : (c <= 7874 || c == 7876))))
              : (c <= 7878 || (c < 7888
                ? (c < 7884
                  ? (c < 7882
                    ? c == 7880
                    : c <= 7882)
                  : (c <= 7884 || c == 7886))
                : (c <= 7888 || (c < 7892
                  ? c == 7890
                  : (c <= 7892 || c == 7894))))))))))
        : (c <= 7896 || (c < 8464
          ? (c < 7934
            ? (c < 7916
              ? (c < 7906
                ? (c < 7902
                  ? (c < 7900
                    ? c == 7898
                    : c <= 7900)
                  : (c <= 7902 || c == 7904))
                : (c <= 7906 || (c < 7912
                  ? (c < 7910
                    ? c == 7908
                    : c <= 7910)
                  : (c <= 7912 || c == 7914))))
              : (c <= 7916 || (c < 7926
                ? (c < 7922
                  ? (c < 7920
                    ? c == 7918
                    : c <= 7920)
                  : (c <= 7922 || c == 7924))
                : (c <= 7926 || (c < 7930
                  ? c == 7928
                  : (c <= 7930 || c == 7932))))))
            : (c <= 7934 || (c < 8040
              ? (c < 8008
                ? (c < 7976
                  ? (c < 7960
                    ? (c >= 7944 && c <= 7951)
                    : c <= 7965)
                  : (c <= 7983 || (c >= 7992 && c <= 7999)))
                : (c <= 8013 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || c == 8031))))
              : (c <= 8047 || (c < 8184
                ? (c < 8152
                  ? (c < 8136
                    ? (c >= 8120 && c <= 8123)
                    : c <= 8139)
                  : (c <= 8155 || (c >= 8168 && c <= 8172)))
                : (c <= 8187 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
          : (c <= 8466 || (c < 11381
            ? (c < 8579
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8510
                  ? (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8499)
                  : (c <= 8511 || c == 8517))))
              : (c <= 8579 || (c < 11369
                ? (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))
                : (c <= 11369 || (c < 11373
                  ? c == 11371
                  : (c <= 11376 || c == 11378))))))
            : (c <= 11381 || (c < 11410
              ? (c < 11400
                ? (c < 11396
                  ? (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)
                  : (c <= 11396 || c == 11398))
                : (c <= 11400 || (c < 11406
                  ? (c < 11404
                    ? c == 11402
                    : c <= 11404)
                  : (c <= 11406 || c == 11408))))
              : (c <= 11410 || (c < 11420
                ? (c < 11416
                  ? (c < 11414
                    ? c == 11412
                    : c <= 11414)
                  : (c <= 11416 || c == 11418))
                : (c <= 11420 || (c < 11424
                  ? c == 11422
                  : (c <= 11424 || c == 11426))))))))))))
      : (c <= 11428 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11448
              ? (c < 11438
                ? (c < 11434
                  ? (c < 11432
                    ? c == 11430
                    : c <= 11432)
                  : (c <= 11434 || c == 11436))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool sym_uppercase_identifier_character_set_4(int32_t c) {
  return (c < 10133
    ? (c < 9832
      ? (c < 9723
        ? (c < 8617
          ? (c < 8252
            ? (c < 169
              ? (c < '_'
                ? (c >= '#' && c <= '9')
                : c <= '_')
              : (c <= 169 || c == 174))
            : (c <= 8252 || (c < 8505
              ? (c < 8482
                ? c == 8265
                : c <= 8482)
              : (c <= 8505 || (c >= 8596 && c <= 8601)))))
          : (c <= 8618 || (c < 9208
            ? (c < 9167
              ? (c < 9000
                ? (c >= 8986 && c <= 8987)
                : c <= 9000)
              : (c <= 9167 || (c >= 9193 && c <= 9203)))
            : (c <= 9210 || (c < 9654
              ? (c < 9642
                ? c == 9410
                : c <= 9643)
              : (c <= 9654 || c == 9664))))))
        : (c <= 9726 || (c < 9770
          ? (c < 9752
            ? (c < 9745
              ? (c < 9742
                ? (c >= 9728 && c <= 9732)
                : c <= 9742)
              : (c <= 9745 || (c >= 9748 && c <= 9749)))
            : (c <= 9752 || (c < 9762
              ? (c < 9760
                ? c == 9757
                : c <= 9760)
              : (c <= 9763 || c == 9766))))
          : (c <= 9770 || (c < 9800
            ? (c < 9792
              ? (c < 9784
                ? (c >= 9774 && c <= 9775)
                : c <= 9786)
              : (c <= 9792 || c == 9794))
            : (c <= 9811 || (c < 9827
              ? (c >= 9823 && c <= 9824)
              : (c <= 9827 || (c >= 9829 && c <= 9830)))))))))
      : (c <= 9832 || (c < 9981
        ? (c < 9917
          ? (c < 9883
            ? (c < 9874
              ? (c < 9854
                ? c == 9851
                : c <= 9855)
              : (c <= 9879 || c == 9881))
            : (c <= 9884 || (c < 9898
              ? (c < 9895
                ? (c >= 9888 && c <= 9889)
                : c <= 9895)
              : (c <= 9899 || (c >= 9904 && c <= 9905)))))
          : (c <= 9918 || (c < 9939
            ? (c < 9934
              ? (c < 9928
                ? (c >= 9924 && c <= 9925)
                : c <= 9928)
              : (c <= 9935 || c == 9937))
            : (c <= 9940 || (c < 9968
              ? (c >= 9961 && c <= 9962)
              : (c <= 9973 || (c >= 9975 && c <= 9978)))))))
        : (c <= 9981 || (c < 10024
          ? (c < 10002
            ? (c < 9992
              ? (c < 9989
                ? c == 9986
                : c <= 9989)
              : (c <= 9997 || c == 9999))
            : (c <= 10002 || (c < 10013
              ? (c < 10006
                ? c == 10004
                : c <= 10006)
              : (c <= 10013 || c == 10017))))
          : (c <= 10024 || (c < 10062
            ? (c < 10055
              ? (c < 10052
                ? (c >= 10035 && c <= 10036)
                : c <= 10052)
              : (c <= 10055 || c == 10060))
            : (c <= 10062 || (c < 10071
              ? (c >= 10067 && c <= 10069)
              : (c <= 10071 || (c >= 10083 && c <= 10084)))))))))))
    : (c <= 10135 || (c < 128394
      ? (c < 127462
        ? (c < 12349
          ? (c < 11013
            ? (c < 10175
              ? (c < 10160
                ? c == 10145
                : c <= 10160)
              : (c <= 10175 || (c >= 10548 && c <= 10549)))
            : (c <= 11015 || (c < 11093
              ? (c < 11088
                ? (c >= 11035 && c <= 11036)
                : c <= 11088)
              : (c <= 11093 || c == 12336))))
          : (c <= 12349 || (c < 127344
            ? (c < 126980
              ? (c < 12953
                ? c == 12951
                : c <= 12953)
              : (c <= 126980 || c == 127183))
            : (c <= 127345 || (c < 127374
              ? (c >= 127358 && c <= 127359)
              : (c <= 127374 || (c >= 127377 && c <= 127386)))))))
        : (c <= 127487 || (c < 127902
          ? (c < 127568
            ? (c < 127535
              ? (c < 127514
                ? (c >= 127489 && c <= 127490)
                : c <= 127514)
              : (c <= 127535 || (c >= 127538 && c <= 127546)))
            : (c <= 127569 || (c < 127894
              ? (c < 127780
                ? (c >= 127744 && c <= 127777)
                : c <= 127891)
              : (c <= 127895 || (c >= 127897 && c <= 127899)))))
          : (c <= 127984 || (c < 128336
            ? (c < 128255
              ? (c < 127991
                ? (c >= 127987 && c <= 127989)
                : c <= 128253)
              : (c <= 128317 || (c >= 128329 && c <= 128334)))
            : (c <= 128359 || (c < 128371
              ? (c >= 128367 && c <= 128368)
              : (c <= 128378 || c == 128391))))))))
      : (c <= 128397 || (c < 128733
        ? (c < 128481
          ? (c < 128433
            ? (c < 128420
              ? (c < 128405
                ? c == 128400
                : c <= 128406)
              : (c <= 128421 || c == 128424))
            : (c <= 128434 || (c < 128465
              ? (c < 128450
                ? c == 128444
                : c <= 128452)
              : (c <= 128467 || (c >= 128476 && c <= 128478)))))
          : (c <= 128481 || (c < 128506
            ? (c < 128495
              ? (c < 128488
                ? c == 128483
                : c <= 128488)
              : (c <= 128495 || c == 128499))
            : (c <= 128591 || (c < 128715
              ? (c >= 128640 && c <= 128709)
              : (c <= 128722 || (c >= 128725 && c <= 128727)))))))
        : (c <= 128741 || (c < 129648
          ? (c < 128992
            ? (c < 128752
              ? (c < 128747
                ? c == 128745
                : c <= 128748)
              : (c <= 128752 || (c >= 128755 && c <= 128764)))
            : (c <= 129003 || (c < 129340
              ? (c < 129292
                ? c == 129008
                : c <= 129338)
              : (c <= 129349 || (c >= 129351 && c <= 129535)))))
          : (c <= 129652 || (c < 129728
            ? (c < 129680
              ? (c < 129664
                ? (c >= 129656 && c <= 129660)
                : c <= 129670)
              : (c <= 129708 || (c >= 129712 && c <= 129722)))
            : (c <= 129733 || (c < 129760
              ? (c >= 129744 && c <= 129753)
              : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))));
}

static inline bool sym_uppercase_identifier_character_set_5(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c >= '-' && c <= ':')))
    : (c <= '>' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static inline bool sym_uppercase_identifier_character_set_6(int32_t c) {
  return (c < 10133
    ? (c < 9832
      ? (c < 9723
        ? (c < 8617
          ? (c < 8252
            ? (c < 169
              ? (c < '_'
                ? c == '#'
                : c <= '_')
              : (c <= 169 || c == 174))
            : (c <= 8252 || (c < 8505
              ? (c < 8482
                ? c == 8265
                : c <= 8482)
              : (c <= 8505 || (c >= 8596 && c <= 8601)))))
          : (c <= 8618 || (c < 9208
            ? (c < 9167
              ? (c < 9000
                ? (c >= 8986 && c <= 8987)
                : c <= 9000)
              : (c <= 9167 || (c >= 9193 && c <= 9203)))
            : (c <= 9210 || (c < 9654
              ? (c < 9642
                ? c == 9410
                : c <= 9643)
              : (c <= 9654 || c == 9664))))))
        : (c <= 9726 || (c < 9770
          ? (c < 9752
            ? (c < 9745
              ? (c < 9742
                ? (c >= 9728 && c <= 9732)
                : c <= 9742)
              : (c <= 9745 || (c >= 9748 && c <= 9749)))
            : (c <= 9752 || (c < 9762
              ? (c < 9760
                ? c == 9757
                : c <= 9760)
              : (c <= 9763 || c == 9766))))
          : (c <= 9770 || (c < 9800
            ? (c < 9792
              ? (c < 9784
                ? (c >= 9774 && c <= 9775)
                : c <= 9786)
              : (c <= 9792 || c == 9794))
            : (c <= 9811 || (c < 9827
              ? (c >= 9823 && c <= 9824)
              : (c <= 9827 || (c >= 9829 && c <= 9830)))))))))
      : (c <= 9832 || (c < 9981
        ? (c < 9917
          ? (c < 9883
            ? (c < 9874
              ? (c < 9854
                ? c == 9851
                : c <= 9855)
              : (c <= 9879 || c == 9881))
            : (c <= 9884 || (c < 9898
              ? (c < 9895
                ? (c >= 9888 && c <= 9889)
                : c <= 9895)
              : (c <= 9899 || (c >= 9904 && c <= 9905)))))
          : (c <= 9918 || (c < 9939
            ? (c < 9934
              ? (c < 9928
                ? (c >= 9924 && c <= 9925)
                : c <= 9928)
              : (c <= 9935 || c == 9937))
            : (c <= 9940 || (c < 9968
              ? (c >= 9961 && c <= 9962)
              : (c <= 9973 || (c >= 9975 && c <= 9978)))))))
        : (c <= 9981 || (c < 10024
          ? (c < 10002
            ? (c < 9992
              ? (c < 9989
                ? c == 9986
                : c <= 9989)
              : (c <= 9997 || c == 9999))
            : (c <= 10002 || (c < 10013
              ? (c < 10006
                ? c == 10004
                : c <= 10006)
              : (c <= 10013 || c == 10017))))
          : (c <= 10024 || (c < 10062
            ? (c < 10055
              ? (c < 10052
                ? (c >= 10035 && c <= 10036)
                : c <= 10052)
              : (c <= 10055 || c == 10060))
            : (c <= 10062 || (c < 10071
              ? (c >= 10067 && c <= 10069)
              : (c <= 10071 || (c >= 10083 && c <= 10084)))))))))))
    : (c <= 10135 || (c < 128394
      ? (c < 127462
        ? (c < 12349
          ? (c < 11013
            ? (c < 10175
              ? (c < 10160
                ? c == 10145
                : c <= 10160)
              : (c <= 10175 || (c >= 10548 && c <= 10549)))
            : (c <= 11015 || (c < 11093
              ? (c < 11088
                ? (c >= 11035 && c <= 11036)
                : c <= 11088)
              : (c <= 11093 || c == 12336))))
          : (c <= 12349 || (c < 127344
            ? (c < 126980
              ? (c < 12953
                ? c == 12951
                : c <= 12953)
              : (c <= 126980 || c == 127183))
            : (c <= 127345 || (c < 127374
              ? (c >= 127358 && c <= 127359)
              : (c <= 127374 || (c >= 127377 && c <= 127386)))))))
        : (c <= 127487 || (c < 127902
          ? (c < 127568
            ? (c < 127535
              ? (c < 127514
                ? (c >= 127489 && c <= 127490)
                : c <= 127514)
              : (c <= 127535 || (c >= 127538 && c <= 127546)))
            : (c <= 127569 || (c < 127894
              ? (c < 127780
                ? (c >= 127744 && c <= 127777)
                : c <= 127891)
              : (c <= 127895 || (c >= 127897 && c <= 127899)))))
          : (c <= 127984 || (c < 128336
            ? (c < 128255
              ? (c < 127991
                ? (c >= 127987 && c <= 127989)
                : c <= 128253)
              : (c <= 128317 || (c >= 128329 && c <= 128334)))
            : (c <= 128359 || (c < 128371
              ? (c >= 128367 && c <= 128368)
              : (c <= 128378 || c == 128391))))))))
      : (c <= 128397 || (c < 128733
        ? (c < 128481
          ? (c < 128433
            ? (c < 128420
              ? (c < 128405
                ? c == 128400
                : c <= 128406)
              : (c <= 128421 || c == 128424))
            : (c <= 128434 || (c < 128465
              ? (c < 128450
                ? c == 128444
                : c <= 128452)
              : (c <= 128467 || (c >= 128476 && c <= 128478)))))
          : (c <= 128481 || (c < 128506
            ? (c < 128495
              ? (c < 128488
                ? c == 128483
                : c <= 128488)
              : (c <= 128495 || c == 128499))
            : (c <= 128591 || (c < 128715
              ? (c >= 128640 && c <= 128709)
              : (c <= 128722 || (c >= 128725 && c <= 128727)))))))
        : (c <= 128741 || (c < 129648
          ? (c < 128992
            ? (c < 128752
              ? (c < 128747
                ? c == 128745
                : c <= 128748)
              : (c <= 128752 || (c >= 128755 && c <= 128764)))
            : (c <= 129003 || (c < 129340
              ? (c < 129292
                ? c == 129008
                : c <= 129338)
              : (c <= 129349 || (c >= 129351 && c <= 129535)))))
          : (c <= 129652 || (c < 129728
            ? (c < 129680
              ? (c < 129664
                ? (c >= 129656 && c <= 129660)
                : c <= 129670)
              : (c <= 129708 || (c >= 129712 && c <= 129722)))
            : (c <= 129733 || (c < 129760
              ? (c >= 129744 && c <= 129753)
              : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))));
}

static inline bool sym_uppercase_identifier_character_set_7(int32_t c) {
  return (c < '<'
    ? (c < '+'
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

static inline bool sym_uppercase_identifier_character_set_8(int32_t c) {
  return (c < 10083
    ? (c < 9829
      ? (c < 9664
        ? (c < 8596
          ? (c < 174
            ? (c < '_'
              ? (c < '0'
                ? c == '#'
                : c <= '9')
              : (c <= '_' || c == 169))
            : (c <= 174 || (c < 8482
              ? (c < 8265
                ? c == 8252
                : c <= 8265)
              : (c <= 8482 || c == 8505))))
          : (c <= 8601 || (c < 9193
            ? (c < 9000
              ? (c < 8986
                ? (c >= 8617 && c <= 8618)
                : c <= 8987)
              : (c <= 9000 || c == 9167))
            : (c <= 9203 || (c < 9642
              ? (c < 9410
                ? (c >= 9208 && c <= 9210)
                : c <= 9410)
              : (c <= 9643 || c == 9654))))))
        : (c <= 9664 || (c < 9766
          ? (c < 9748
            ? (c < 9742
              ? (c < 9728
                ? (c >= 9723 && c <= 9726)
                : c <= 9732)
              : (c <= 9742 || c == 9745))
            : (c <= 9749 || (c < 9760
              ? (c < 9757
                ? c == 9752
                : c <= 9757)
              : (c <= 9760 || (c >= 9762 && c <= 9763)))))
          : (c <= 9766 || (c < 9794
            ? (c < 9784
              ? (c < 9774
                ? c == 9770
                : c <= 9775)
              : (c <= 9786 || c == 9792))
            : (c <= 9794 || (c < 9823
              ? (c >= 9800 && c <= 9811)
              : (c <= 9824 || c == 9827))))))))
      : (c <= 9830 || (c < 9975
        ? (c < 9904
          ? (c < 9881
            ? (c < 9854
              ? (c < 9851
                ? c == 9832
                : c <= 9851)
              : (c <= 9855 || (c >= 9874 && c <= 9879)))
            : (c <= 9881 || (c < 9895
              ? (c < 9888
                ? (c >= 9883 && c <= 9884)
                : c <= 9889)
              : (c <= 9895 || (c >= 9898 && c <= 9899)))))
          : (c <= 9905 || (c < 9937
            ? (c < 9928
              ? (c < 9924
                ? (c >= 9917 && c <= 9918)
                : c <= 9925)
              : (c <= 9928 || (c >= 9934 && c <= 9935)))
            : (c <= 9937 || (c < 9961
              ? (c >= 9939 && c <= 9940)
              : (c <= 9962 || (c >= 9968 && c <= 9973)))))))
        : (c <= 9978 || (c < 10017
          ? (c < 9999
            ? (c < 9989
              ? (c < 9986
                ? c == 9981
                : c <= 9986)
              : (c <= 9989 || (c >= 9992 && c <= 9997)))
            : (c <= 9999 || (c < 10006
              ? (c < 10004
                ? c == 10002
                : c <= 10004)
              : (c <= 10006 || c == 10013))))
          : (c <= 10017 || (c < 10060
            ? (c < 10052
              ? (c < 10035
                ? c == 10024
                : c <= 10036)
              : (c <= 10052 || c == 10055))
            : (c <= 10060 || (c < 10067
              ? c == 10062
              : (c <= 10069 || c == 10071))))))))))
    : (c <= 10084 || (c < 128394
      ? (c < 127462
        ? (c < 12336
          ? (c < 10548
            ? (c < 10160
              ? (c < 10145
                ? (c >= 10133 && c <= 10135)
                : c <= 10145)
              : (c <= 10160 || c == 10175))
            : (c <= 10549 || (c < 11088
              ? (c < 11035
                ? (c >= 11013 && c <= 11015)
                : c <= 11036)
              : (c <= 11088 || c == 11093))))
          : (c <= 12336 || (c < 127183
            ? (c < 12953
              ? (c < 12951
                ? c == 12349
                : c <= 12951)
              : (c <= 12953 || c == 126980))
            : (c <= 127183 || (c < 127374
              ? (c < 127358
                ? (c >= 127344 && c <= 127345)
                : c <= 127359)
              : (c <= 127374 || (c >= 127377 && c <= 127386)))))))
        : (c <= 127487 || (c < 127902
          ? (c < 127568
            ? (c < 127535
              ? (c < 127514
                ? (c >= 127489 && c <= 127490)
                : c <= 127514)
              : (c <= 127535 || (c >= 127538 && c <= 127546)))
            : (c <= 127569 || (c < 127894
              ? (c < 127780
                ? (c >= 127744 && c <= 127777)
                : c <= 127891)
              : (c <= 127895 || (c >= 127897 && c <= 127899)))))
          : (c <= 127984 || (c < 128336
            ? (c < 128255
              ? (c < 127991
                ? (c >= 127987 && c <= 127989)
                : c <= 128253)
              : (c <= 128317 || (c >= 128329 && c <= 128334)))
            : (c <= 128359 || (c < 128371
              ? (c >= 128367 && c <= 128368)
              : (c <= 128378 || c == 128391))))))))
      : (c <= 128397 || (c < 128733
        ? (c < 128481
          ? (c < 128433
            ? (c < 128420
              ? (c < 128405
                ? c == 128400
                : c <= 128406)
              : (c <= 128421 || c == 128424))
            : (c <= 128434 || (c < 128465
              ? (c < 128450
                ? c == 128444
                : c <= 128452)
              : (c <= 128467 || (c >= 128476 && c <= 128478)))))
          : (c <= 128481 || (c < 128506
            ? (c < 128495
              ? (c < 128488
                ? c == 128483
                : c <= 128488)
              : (c <= 128495 || c == 128499))
            : (c <= 128591 || (c < 128715
              ? (c >= 128640 && c <= 128709)
              : (c <= 128722 || (c >= 128725 && c <= 128727)))))))
        : (c <= 128741 || (c < 129648
          ? (c < 128992
            ? (c < 128752
              ? (c < 128747
                ? c == 128745
                : c <= 128748)
              : (c <= 128752 || (c >= 128755 && c <= 128764)))
            : (c <= 129003 || (c < 129340
              ? (c < 129292
                ? c == 129008
                : c <= 129338)
              : (c <= 129349 || (c >= 129351 && c <= 129535)))))
          : (c <= 129652 || (c < 129728
            ? (c < 129680
              ? (c < 129664
                ? (c >= 129656 && c <= 129660)
                : c <= 129670)
              : (c <= 129708 || (c >= 129712 && c <= 129722)))
            : (c <= 129733 || (c < 129760
              ? (c >= 129744 && c <= 129753)
              : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))));
}

static inline bool sym_uppercase_identifier_character_set_9(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c >= '-' && c <= '/')))
    : (c <= '>' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static inline bool sym_uppercase_identifier_character_set_10(int32_t c) {
  return (c < 9450
    ? (c < 3482
      ? (c < 2534
        ? (c < 1632
          ? (c < 736
            ? (c < 169
              ? (c < ','
                ? (c < '\''
                  ? (c < '#'
                    ? c == '!'
                    : c <= '#')
                  : (c <= '\'' || c == '*'))
                : (c <= ',' || (c < '_'
                  ? (c < '\\'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '\\')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))))
              : (c <= 170 || (c < 188
                ? (c < 181
                  ? (c < 178
                    ? c == 174
                    : c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))
                : (c <= 190 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))))
            : (c <= 740 || (c < 910
              ? (c < 890
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1369
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))))))
          : (c <= 1641 || (c < 2160
            ? (c < 1969
              ? (c < 1774
                ? (c < 1749
                  ? (c < 1649
                    ? (c >= 1646 && c <= 1647)
                    : c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1788 || (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))))
              : (c <= 1969 || (c < 2074
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1984 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2112
                  ? (c < 2088
                    ? c == 2084
                    : c <= 2088)
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))))))
            : (c <= 2183 || (c < 2447
              ? (c < 2384
                ? (c < 2308
                  ? (c < 2208
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2392 && c <= 2401)
                    : c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))
              : (c <= 2448 || (c < 2493
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))))))))))
        : (c <= 2545 || (c < 2969
          ? (c < 2749
            ? (c < 2649
              ? (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2548 && c <= 2553)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2652 || (c < 2703
                ? (c < 2674
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2671)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))
            : (c <= 2749 || (c < 2869
              ? (c < 2821
                ? (c < 2790
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2785)
                  : (c <= 2799 || c == 2809))
                : (c <= 2828 || (c < 2858
                  ? (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))
              : (c <= 2873 || (c < 2929
                ? (c < 2911
                  ? (c < 2908
                    ? c == 2877
                    : c <= 2909)
                  : (c <= 2913 || (c >= 2918 && c <= 2927)))
                : (c <= 2935 || (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))))))
          : (c <= 2970 || (c < 3214
            ? (c < 3090
              ? (c < 2990
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? (c < 3046
                    ? c == 3024
                    : c <= 3058)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c < 3192
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3198)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))))))
            : (c <= 3216 || (c < 3342
              ? (c < 3293
                ? (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3416
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))))))))))))
      : (c <= 3505 || (c < 6314
        ? (c < 4348
          ? (c < 3804
            ? (c < 3716
              ? (c < 3585
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3664
                  ? (c < 3648
                    ? (c >= 3634 && c <= 3635)
                    : c <= 3654)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3762
                ? (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3782
                  ? (c < 3776
                    ? c == 3773
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))))))
            : (c <= 3807 || (c < 4193
              ? (c < 3976
                ? (c < 3904
                  ? (c < 3872
                    ? c == 3840
                    : c <= 3891)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4240
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4249 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))))))))
          : (c <= 4680 || (c < 5121
            ? (c < 4800
              ? (c < 4704
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))
              : (c <= 4800 || (c < 4888
                ? (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4988)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))))
            : (c <= 5740 || (c < 6016
              ? (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5905 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))
              : (c <= 6067 || (c < 6160
                ? (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))))))))))
        : (c <= 6314 || (c < 8118
          ? (c < 7245
            ? (c < 6784
              ? (c < 6528
                ? (c < 6470
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6656
                  ? (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6992
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7001 || (c < 7168
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))))))
            : (c <= 7293 || (c < 7960
              ? (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7424
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))
          : (c <= 8124 || (c < 8482
            ? (c < 8265
              ? (c < 8150
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || c == 8252))))
              : (c <= 8265 || (c < 8450
                ? (c < 8319
                  ? (c < 8308
                    ? (c >= 8304 && c <= 8305)
                    : c <= 8313)
                  : (c <= 8329 || (c >= 8336 && c <= 8348)))
                : (c <= 8450 || (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))))))
            : (c <= 8482 || (c < 8596
              ? (c < 8495
                ? (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8528 && c <= 8585)))))
              : (c <= 8601 || (c < 9193
                ? (c < 9000
                  ? (c < 8986
                    ? (c >= 8617 && c <= 8618)
                    : c <= 8987)
                  : (c <= 9000 || c == 9167))
                : (c <= 9203 || (c < 9312
                  ? (c >= 9208 && c <= 9210)
                  : (c <= 9371 || c == 9410))))))))))))))
    : (c <= 9471 || (c < 43744
      ? (c < 11631
        ? (c < 9968
          ? (c < 9823
            ? (c < 9757
              ? (c < 9728
                ? (c < 9664
                  ? (c < 9654
                    ? (c >= 9642 && c <= 9643)
                    : c <= 9654)
                  : (c <= 9664 || (c >= 9723 && c <= 9726)))
                : (c <= 9732 || (c < 9748
                  ? (c < 9745
                    ? c == 9742
                    : c <= 9745)
                  : (c <= 9749 || c == 9752))))
              : (c <= 9757 || (c < 9774
                ? (c < 9766
                  ? (c < 9762
                    ? c == 9760
                    : c <= 9763)
                  : (c <= 9766 || c == 9770))
                : (c <= 9775 || (c < 9794
                  ? (c < 9792
                    ? (c >= 9784 && c <= 9786)
                    : c <= 9792)
                  : (c <= 9794 || (c >= 9800 && c <= 9811)))))))
            : (c <= 9824 || (c < 9895
              ? (c < 9854
                ? (c < 9832
                  ? (c < 9829
                    ? c == 9827
                    : c <= 9830)
                  : (c <= 9832 || c == 9851))
                : (c <= 9855 || (c < 9883
                  ? (c < 9881
                    ? (c >= 9874 && c <= 9879)
                    : c <= 9881)
                  : (c <= 9884 || (c >= 9888 && c <= 9889)))))
              : (c <= 9895 || (c < 9928
                ? (c < 9917
                  ? (c < 9904
                    ? (c >= 9898 && c <= 9899)
                    : c <= 9905)
                  : (c <= 9918 || (c >= 9924 && c <= 9925)))
                : (c <= 9928 || (c < 9939
                  ? (c < 9937
                    ? (c >= 9934 && c <= 9935)
                    : c <= 9937)
                  : (c <= 9940 || (c >= 9961 && c <= 9962)))))))))
          : (c <= 9973 || (c < 10083
            ? (c < 10013
              ? (c < 9992
                ? (c < 9986
                  ? (c < 9981
                    ? (c >= 9975 && c <= 9978)
                    : c <= 9981)
                  : (c <= 9986 || c == 9989))
                : (c <= 9997 || (c < 10004
                  ? (c < 10002
                    ? c == 9999
                    : c <= 10002)
                  : (c <= 10004 || c == 10006))))
              : (c <= 10013 || (c < 10055
                ? (c < 10035
                  ? (c < 10024
                    ? c == 10017
                    : c <= 10024)
                  : (c <= 10036 || c == 10052))
                : (c <= 10055 || (c < 10067
                  ? (c < 10062
                    ? c == 10060
                    : c <= 10062)
                  : (c <= 10069 || c == 10071))))))
            : (c <= 10084 || (c < 11093
              ? (c < 10175
                ? (c < 10145
                  ? (c < 10133
                    ? (c >= 10102 && c <= 10131)
                    : c <= 10135)
                  : (c <= 10145 || c == 10160))
                : (c <= 10175 || (c < 11035
                  ? (c < 11013
                    ? (c >= 10548 && c <= 10549)
                    : c <= 11015)
                  : (c <= 11036 || c == 11088))))
              : (c <= 11093 || (c < 11520
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))))))
        : (c <= 11631 || (c < 42623
          ? (c < 12593
            ? (c < 11823
              ? (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))
              : (c <= 11823 || (c < 12353
                ? (c < 12336
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12349)))
                : (c <= 12438 || (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 12977
              ? (c < 12872
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12690 && c <= 12693)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12951
                  ? (c < 12928
                    ? (c >= 12881 && c <= 12895)
                    : c <= 12937)
                  : (c <= 12951 || c == 12953))))
              : (c <= 12991 || (c < 42192
                ? (c < 19968
                  ? (c < 19903
                    ? c == 13312
                    : c <= 19903)
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))))))
          : (c <= 42653 || (c < 43312
            ? (c < 43015
              ? (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))
              : (c <= 43018 || (c < 43216
                ? (c < 43072
                  ? (c < 43056
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43061)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43262 || (c >= 43264 && c <= 43301)))))))
            : (c <= 43334 || (c < 43616
              ? (c < 43494
                ? (c < 43471
                  ? (c < 43396
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c >= 43600 && c <= 43609)))))
              : (c <= 43638 || (c < 43705
                ? (c < 43697
                  ? (c < 43646
                    ? c == 43642
                    : c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))))))))))
      : (c <= 43754 || (c < 67463
        ? (c < 65498
          ? (c < 64287
            ? (c < 44016
              ? (c < 43808
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))))
              : (c <= 44025 || (c < 63744
                ? (c < 55216
                  ? (c < 55203
                    ? c == 44032
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65345
                ? (c < 65296
                  ? (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)
                  : (c <= 65305 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))))))))
          : (c <= 65500 || (c < 66513
            ? (c < 65930
              ? (c < 65599
                ? (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65799
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65843 || (c >= 65856 && c <= 65912)))))
              : (c <= 65931 || (c < 66349
                ? (c < 66273
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))
                : (c <= 66378 || (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))))))
            : (c <= 66517 || (c < 66964
              ? (c < 66816
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67072
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))))))))
        : (c <= 67504 || (c < 128391
          ? (c < 127377
            ? (c < 67751
              ? (c < 67639
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67672
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c >= 67705 && c <= 67742)))))
              : (c <= 67759 || (c < 126980
                ? (c < 67835
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67867 || (c >= 67872 && c <= 67883)))
                : (c <= 126980 || (c < 127358
                  ? (c < 127344
                    ? c == 127183
                    : c <= 127345)
                  : (c <= 127359 || c == 127374))))))
            : (c <= 127386 || (c < 127897
              ? (c < 127538
                ? (c < 127514
                  ? (c < 127489
                    ? (c >= 127462 && c <= 127487)
                    : c <= 127490)
                  : (c <= 127514 || c == 127535))
                : (c <= 127546 || (c < 127780
                  ? (c < 127744
                    ? (c >= 127568 && c <= 127569)
                    : c <= 127777)
                  : (c <= 127891 || (c >= 127894 && c <= 127895)))))
              : (c <= 127899 || (c < 128329
                ? (c < 127991
                  ? (c < 127987
                    ? (c >= 127902 && c <= 127984)
                    : c <= 127989)
                  : (c <= 128253 || (c >= 128255 && c <= 128317)))
                : (c <= 128334 || (c < 128367
                  ? (c >= 128336 && c <= 128359)
                  : (c <= 128368 || (c >= 128371 && c <= 128378)))))))))
          : (c <= 128391 || (c < 128733
            ? (c < 128476
              ? (c < 128424
                ? (c < 128405
                  ? (c < 128400
                    ? (c >= 128394 && c <= 128397)
                    : c <= 128400)
                  : (c <= 128406 || (c >= 128420 && c <= 128421)))
                : (c <= 128424 || (c < 128450
                  ? (c < 128444
                    ? (c >= 128433 && c <= 128434)
                    : c <= 128444)
                  : (c <= 128452 || (c >= 128465 && c <= 128467)))))
              : (c <= 128478 || (c < 128499
                ? (c < 128488
                  ? (c < 128483
                    ? c == 128481
                    : c <= 128483)
                  : (c <= 128488 || c == 128495))
                : (c <= 128499 || (c < 128715
                  ? (c < 128640
                    ? (c >= 128506 && c <= 128591)
                    : c <= 128709)
                  : (c <= 128722 || (c >= 128725 && c <= 128727)))))))
            : (c <= 128741 || (c < 129648
              ? (c < 128992
                ? (c < 128752
                  ? (c < 128747
                    ? c == 128745
                    : c <= 128748)
                  : (c <= 128752 || (c >= 128755 && c <= 128764)))
                : (c <= 129003 || (c < 129340
                  ? (c < 129292
                    ? c == 129008
                    : c <= 129338)
                  : (c <= 129349 || (c >= 129351 && c <= 129535)))))
              : (c <= 129652 || (c < 129728
                ? (c < 129680
                  ? (c < 129664
                    ? (c >= 129656 && c <= 129660)
                    : c <= 129670)
                  : (c <= 129708 || (c >= 129712 && c <= 129722)))
                : (c <= 129733 || (c < 129760
                  ? (c >= 129744 && c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym_uppercase_identifier_character_set_11(int32_t c) {
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

static inline bool sym_uppercase_identifier_character_set_12(int32_t c) {
  return (c < 9654
    ? (c < 3520
      ? (c < 2575
        ? (c < 1765
          ? (c < 886
            ? (c < 185
              ? (c < 'a'
                ? (c < 'A'
                  ? (c < ','
                    ? (c >= '#' && c <= '\'')
                    : c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 178
                  ? (c < 174
                    ? (c >= 169 && c <= 170)
                    : c <= 174)
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c < 192
                    ? (c >= 188 && c <= 190)
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))))))
            : (c <= 887 || (c < 1329
              ? (c < 908
                ? (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))))
              : (c <= 1366 || (c < 1568
                ? (c < 1488
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c < 1646
                    ? (c >= 1632 && c <= 1641)
                    : c <= 1647)
                  : (c <= 1747 || c == 1749))))))))
          : (c <= 1766 || (c < 2365
            ? (c < 2048
              ? (c < 1869
                ? (c < 1808
                  ? (c < 1791
                    ? (c >= 1774 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 2036
                  ? (c < 1984
                    ? c == 1969
                    : c <= 2026)
                  : (c <= 2037 || c == 2042))))
              : (c <= 2069 || (c < 2144
                ? (c < 2088
                  ? (c < 2084
                    ? c == 2074
                    : c <= 2084)
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))))))
            : (c <= 2365 || (c < 2486
              ? (c < 2437
                ? (c < 2406
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2534
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))))))))))
        : (c <= 2576 || (c < 2979
          ? (c < 2809
            ? (c < 2693
              ? (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))))
              : (c <= 2701 || (c < 2741
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2784
                  ? (c < 2768
                    ? c == 2749
                    : c <= 2768)
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))))))
            : (c <= 2809 || (c < 2918
              ? (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))))
              : (c <= 2927 || (c < 2962
                ? (c < 2949
                  ? (c < 2947
                    ? (c >= 2929 && c <= 2935)
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))))))))
          : (c <= 2980 || (c < 3253
            ? (c < 3160
              ? (c < 3077
                ? (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3058)))
                : (c <= 3084 || (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3200
                ? (c < 3174
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3169)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))
                : (c <= 3200 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))))
            : (c <= 3257 || (c < 3406
              ? (c < 3313
                ? (c < 3296
                  ? (c < 3293
                    ? c == 3261
                    : c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3461
                ? (c < 3430
                  ? (c < 3416
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))))))))))
      : (c <= 3526 || (c < 6400
        ? (c < 4688
          ? (c < 3904
            ? (c < 3749
              ? (c < 3664
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))
              : (c <= 3749 || (c < 3782
                ? (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))))))
            : (c <= 3911 || (c < 4213
              ? (c < 4176
                ? (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || (c >= 4159 && c <= 4169)))
                : (c <= 4181 || (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? (c < 4240
                    ? c == 4238
                    : c <= 4249)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))))))
          : (c <= 4694 || (c < 5761
            ? (c < 4808
              ? (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))
              : (c <= 4822 || (c < 4992
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4969 && c <= 4988)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))))
            : (c <= 5786 || (c < 6108
              ? (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))
              : (c <= 6108 || (c < 6272
                ? (c < 6160
                  ? (c < 6128
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6137)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))))))
        : (c <= 6430 || (c < 8130
          ? (c < 7312
            ? (c < 6823
              ? (c < 6608
                ? (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6618 || (c < 6784
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))))
              : (c <= 6823 || (c < 7086
                ? (c < 6992
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7001 || (c >= 7043 && c <= 7072)))
                : (c <= 7141 || (c < 7245
                  ? (c < 7232
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))))))))
          : (c <= 8132 || (c < 8486
            ? (c < 8308
              ? (c < 8178
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8265
                  ? (c < 8252
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8252)
                  : (c <= 8265 || (c >= 8304 && c <= 8305)))))
              : (c <= 8313 || (c < 8458
                ? (c < 8450
                  ? (c < 8336
                    ? (c >= 8319 && c <= 8329)
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))
                : (c <= 8467 || (c < 8482
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8482 || c == 8484))))))
            : (c <= 8486 || (c < 8986
              ? (c < 8517
                ? (c < 8495
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8493)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))
                : (c <= 8521 || (c < 8596
                  ? (c < 8528
                    ? c == 8526
                    : c <= 8585)
                  : (c <= 8601 || (c >= 8617 && c <= 8618)))))
              : (c <= 8987 || (c < 9312
                ? (c < 9193
                  ? (c < 9167
                    ? c == 9000
                    : c <= 9167)
                  : (c <= 9203 || (c >= 9208 && c <= 9210)))
                : (c <= 9371 || (c < 9450
                  ? c == 9410
                  : (c <= 9471 || (c >= 9642 && c <= 9643)))))))))))))))
    : (c <= 9654 || (c < 43762
      ? (c < 11648
        ? (c < 9975
          ? (c < 9829
            ? (c < 9762
              ? (c < 9745
                ? (c < 9728
                  ? (c < 9723
                    ? c == 9664
                    : c <= 9726)
                  : (c <= 9732 || c == 9742))
                : (c <= 9745 || (c < 9757
                  ? (c < 9752
                    ? (c >= 9748 && c <= 9749)
                    : c <= 9752)
                  : (c <= 9757 || c == 9760))))
              : (c <= 9763 || (c < 9792
                ? (c < 9774
                  ? (c < 9770
                    ? c == 9766
                    : c <= 9770)
                  : (c <= 9775 || (c >= 9784 && c <= 9786)))
                : (c <= 9792 || (c < 9823
                  ? (c < 9800
                    ? c == 9794
                    : c <= 9811)
                  : (c <= 9824 || c == 9827))))))
            : (c <= 9830 || (c < 9904
              ? (c < 9881
                ? (c < 9854
                  ? (c < 9851
                    ? c == 9832
                    : c <= 9851)
                  : (c <= 9855 || (c >= 9874 && c <= 9879)))
                : (c <= 9881 || (c < 9895
                  ? (c < 9888
                    ? (c >= 9883 && c <= 9884)
                    : c <= 9889)
                  : (c <= 9895 || (c >= 9898 && c <= 9899)))))
              : (c <= 9905 || (c < 9937
                ? (c < 9928
                  ? (c < 9924
                    ? (c >= 9917 && c <= 9918)
                    : c <= 9925)
                  : (c <= 9928 || (c >= 9934 && c <= 9935)))
                : (c <= 9937 || (c < 9961
                  ? (c >= 9939 && c <= 9940)
                  : (c <= 9962 || (c >= 9968 && c <= 9973)))))))))
          : (c <= 9978 || (c < 10102
            ? (c < 10017
              ? (c < 9999
                ? (c < 9989
                  ? (c < 9986
                    ? c == 9981
                    : c <= 9986)
                  : (c <= 9989 || (c >= 9992 && c <= 9997)))
                : (c <= 9999 || (c < 10006
                  ? (c < 10004
                    ? c == 10002
                    : c <= 10004)
                  : (c <= 10006 || c == 10013))))
              : (c <= 10017 || (c < 10060
                ? (c < 10052
                  ? (c < 10035
                    ? c == 10024
                    : c <= 10036)
                  : (c <= 10052 || c == 10055))
                : (c <= 10060 || (c < 10071
                  ? (c < 10067
                    ? c == 10062
                    : c <= 10069)
                  : (c <= 10071 || (c >= 10083 && c <= 10084)))))))
            : (c <= 10131 || (c < 11264
              ? (c < 10548
                ? (c < 10160
                  ? (c < 10145
                    ? (c >= 10133 && c <= 10135)
                    : c <= 10145)
                  : (c <= 10160 || c == 10175))
                : (c <= 10549 || (c < 11088
                  ? (c < 11035
                    ? (c >= 11013 && c <= 11015)
                    : c <= 11036)
                  : (c <= 11088 || c == 11093))))
              : (c <= 11492 || (c < 11559
                ? (c < 11517
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))))))))))
        : (c <= 11670 || (c < 42656
          ? (c < 12690
            ? (c < 12293
              ? (c < 11712
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || c == 11823))))
              : (c <= 12295 || (c < 12445
                ? (c < 12344
                  ? (c < 12336
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12349 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12693 || (c < 13312
              ? (c < 12881
                ? (c < 12832
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))
                : (c <= 12895 || (c < 12953
                  ? (c < 12951
                    ? (c >= 12928 && c <= 12937)
                    : c <= 12951)
                  : (c <= 12953 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42240
                ? (c < 40959
                  ? (c < 19968
                    ? c == 19903
                    : c <= 19968)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))))
          : (c <= 42735 || (c < 43360
            ? (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43250
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43056 && c <= 43061)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43264
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))))
            : (c <= 43388 || (c < 43642
              ? (c < 43520
                ? (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43600
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43609 || (c >= 43616 && c <= 43638)))))
              : (c <= 43642 || (c < 43712
                ? (c < 43701
                  ? (c < 43697
                    ? (c >= 43646 && c <= 43695)
                    : c <= 43697)
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))))))))))))
      : (c <= 43764 || (c < 67463
        ? (c < 65498
          ? (c < 64298
            ? (c < 44032
              ? (c < 43816
                ? (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))
                : (c <= 43822 || (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44002 || (c >= 44016 && c <= 44025)))))
              : (c <= 44032 || (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? c == 55203
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))))
            : (c <= 64310 || (c < 65136
              ? (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))
              : (c <= 65140 || (c < 65382
                ? (c < 65313
                  ? (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))))))))
          : (c <= 65500 || (c < 66513
            ? (c < 65930
              ? (c < 65599
                ? (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65799
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65843 || (c >= 65856 && c <= 65912)))))
              : (c <= 65931 || (c < 66349
                ? (c < 66273
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))
                : (c <= 66378 || (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))))))
            : (c <= 66517 || (c < 66964
              ? (c < 66816
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67072
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))))))))
        : (c <= 67504 || (c < 128391
          ? (c < 127377
            ? (c < 67751
              ? (c < 67639
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67672
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c >= 67705 && c <= 67742)))))
              : (c <= 67759 || (c < 126980
                ? (c < 67835
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67867 || (c >= 67872 && c <= 67883)))
                : (c <= 126980 || (c < 127358
                  ? (c < 127344
                    ? c == 127183
                    : c <= 127345)
                  : (c <= 127359 || c == 127374))))))
            : (c <= 127386 || (c < 127897
              ? (c < 127538
                ? (c < 127514
                  ? (c < 127489
                    ? (c >= 127462 && c <= 127487)
                    : c <= 127490)
                  : (c <= 127514 || c == 127535))
                : (c <= 127546 || (c < 127780
                  ? (c < 127744
                    ? (c >= 127568 && c <= 127569)
                    : c <= 127777)
                  : (c <= 127891 || (c >= 127894 && c <= 127895)))))
              : (c <= 127899 || (c < 128329
                ? (c < 127991
                  ? (c < 127987
                    ? (c >= 127902 && c <= 127984)
                    : c <= 127989)
                  : (c <= 128253 || (c >= 128255 && c <= 128317)))
                : (c <= 128334 || (c < 128367
                  ? (c >= 128336 && c <= 128359)
                  : (c <= 128368 || (c >= 128371 && c <= 128378)))))))))
          : (c <= 128391 || (c < 128733
            ? (c < 128476
              ? (c < 128424
                ? (c < 128405
                  ? (c < 128400
                    ? (c >= 128394 && c <= 128397)
                    : c <= 128400)
                  : (c <= 128406 || (c >= 128420 && c <= 128421)))
                : (c <= 128424 || (c < 128450
                  ? (c < 128444
                    ? (c >= 128433 && c <= 128434)
                    : c <= 128444)
                  : (c <= 128452 || (c >= 128465 && c <= 128467)))))
              : (c <= 128478 || (c < 128499
                ? (c < 128488
                  ? (c < 128483
                    ? c == 128481
                    : c <= 128483)
                  : (c <= 128488 || c == 128495))
                : (c <= 128499 || (c < 128715
                  ? (c < 128640
                    ? (c >= 128506 && c <= 128591)
                    : c <= 128709)
                  : (c <= 128722 || (c >= 128725 && c <= 128727)))))))
            : (c <= 128741 || (c < 129648
              ? (c < 128992
                ? (c < 128752
                  ? (c < 128747
                    ? c == 128745
                    : c <= 128748)
                  : (c <= 128752 || (c >= 128755 && c <= 128764)))
                : (c <= 129003 || (c < 129340
                  ? (c < 129292
                    ? c == 129008
                    : c <= 129338)
                  : (c <= 129349 || (c >= 129351 && c <= 129535)))))
              : (c <= 129652 || (c < 129728
                ? (c < 129680
                  ? (c < 129664
                    ? (c >= 129656 && c <= 129660)
                    : c <= 129670)
                  : (c <= 129708 || (c >= 129712 && c <= 129722)))
                : (c <= 129733 || (c < 129760
                  ? (c >= 129744 && c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_1(int32_t c) {
  return (c < 8160
    ? (c < 5112
      ? (c < 881
        ? (c < 454
          ? (c < 248
            ? (c < 223
              ? c == 181
              : c <= 246)
            : (c <= 442 || (c >= 445 && c <= 447)))
          : (c <= 454 || (c < 499
            ? (c < 460
              ? c == 457
              : c <= 496)
            : (c <= 659 || (c >= 661 && c <= 687)))))
        : (c <= 883 || (c < 1016
          ? (c < 912
            ? (c < 891
              ? c == 887
              : c <= 893)
            : (c <= 912 || (c >= 940 && c <= 1013)))
          : (c <= 1153 || (c < 4304
            ? (c < 1376
              ? (c >= 1163 && c <= 1327)
              : c <= 1416)
            : (c <= 4346 || (c >= 4349 && c <= 4351)))))))
      : (c <= 5117 || (c < 8080
        ? (c < 7681
          ? (c < 7531
            ? (c < 7424
              ? (c >= 7296 && c <= 7304)
              : c <= 7467)
            : (c <= 7543 || (c >= 7545 && c <= 7578)))
          : (c <= 7957 || (c < 8032
            ? (c < 8016
              ? (c >= 7968 && c <= 8005)
              : c <= 8023)
            : (c <= 8061 || (c >= 8064 && c <= 8071)))))
        : (c <= 8087 || (c < 8130
          ? (c < 8118
            ? (c < 8112
              ? (c >= 8096 && c <= 8103)
              : c <= 8116)
            : (c <= 8119 || c == 8126))
          : (c <= 8132 || (c < 8144
            ? (c >= 8134 && c <= 8135)
            : (c <= 8147 || (c >= 8150 && c <= 8151)))))))))
    : (c <= 8167 || (c < 42892
      ? (c < 11393
        ? (c < 8508
          ? (c < 8458
            ? (c < 8182
              ? (c >= 8178 && c <= 8180)
              : c <= 8183)
            : (c <= 8467 || (c >= 8495 && c <= 8500)))
          : (c <= 8509 || (c < 8580
            ? (c < 8526
              ? (c >= 8518 && c <= 8521)
              : c <= 8526)
            : (c <= 8580 || (c >= 11312 && c <= 11387)))))
        : (c <= 11492 || (c < 11565
          ? (c < 11520
            ? (c < 11507
              ? (c >= 11500 && c <= 11502)
              : c <= 11507)
            : (c <= 11557 || c == 11559))
          : (c <= 11565 || (c < 42787
            ? (c < 42625
              ? (c >= 42561 && c <= 42605)
              : c <= 42651)
            : (c <= 42863 || (c >= 42865 && c <= 42887)))))))
      : (c <= 42894 || (c < 64256
        ? (c < 42998
          ? (c < 42963
            ? (c < 42961
              ? (c >= 42897 && c <= 42954)
              : c <= 42961)
            : (c <= 42963 || (c >= 42965 && c <= 42969)))
          : (c <= 42998 || (c < 43872
            ? (c < 43824
              ? c == 43002
              : c <= 43866)
            : (c <= 43880 || (c >= 43888 && c <= 43967)))))
        : (c <= 64262 || (c < 66967
          ? (c < 66600
            ? (c < 65345
              ? (c >= 64275 && c <= 64279)
              : c <= 65370)
            : (c <= 66639 || (c >= 66776 && c <= 66811)))
          : (c <= 66977 || (c < 66995
            ? (c >= 66979 && c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool sym_lowercase_identifier_character_set_2(int32_t c) {
  return (c < 8160
    ? (c < 4349
      ? (c < 661
        ? (c < 445
          ? (c < 223
            ? (c < 181
              ? (c >= 'a' && c <= 'z')
              : c <= 181)
            : (c <= 246 || (c >= 248 && c <= 442)))
          : (c <= 447 || (c < 460
            ? (c < 457
              ? c == 454
              : c <= 457)
            : (c <= 496 || (c >= 499 && c <= 659)))))
        : (c <= 687 || (c < 940
          ? (c < 891
            ? (c < 887
              ? (c >= 881 && c <= 883)
              : c <= 887)
            : (c <= 893 || c == 912))
          : (c <= 1013 || (c < 1376
            ? (c < 1163
              ? (c >= 1016 && c <= 1153)
              : c <= 1327)
            : (c <= 1416 || (c >= 4304 && c <= 4346)))))))
      : (c <= 4351 || (c < 8064
        ? (c < 7545
          ? (c < 7424
            ? (c < 7296
              ? (c >= 5112 && c <= 5117)
              : c <= 7304)
            : (c <= 7467 || (c >= 7531 && c <= 7543)))
          : (c <= 7578 || (c < 8016
            ? (c < 7968
              ? (c >= 7681 && c <= 7957)
              : c <= 8005)
            : (c <= 8023 || (c >= 8032 && c <= 8061)))))
        : (c <= 8071 || (c < 8126
          ? (c < 8112
            ? (c < 8096
              ? (c >= 8080 && c <= 8087)
              : c <= 8103)
            : (c <= 8116 || (c >= 8118 && c <= 8119)))
          : (c <= 8126 || (c < 8144
            ? (c < 8134
              ? (c >= 8130 && c <= 8132)
              : c <= 8135)
            : (c <= 8147 || (c >= 8150 && c <= 8151)))))))))
    : (c <= 8167 || (c < 42892
      ? (c < 11393
        ? (c < 8508
          ? (c < 8458
            ? (c < 8182
              ? (c >= 8178 && c <= 8180)
              : c <= 8183)
            : (c <= 8467 || (c >= 8495 && c <= 8500)))
          : (c <= 8509 || (c < 8580
            ? (c < 8526
              ? (c >= 8518 && c <= 8521)
              : c <= 8526)
            : (c <= 8580 || (c >= 11312 && c <= 11387)))))
        : (c <= 11492 || (c < 11565
          ? (c < 11520
            ? (c < 11507
              ? (c >= 11500 && c <= 11502)
              : c <= 11507)
            : (c <= 11557 || c == 11559))
          : (c <= 11565 || (c < 42787
            ? (c < 42625
              ? (c >= 42561 && c <= 42605)
              : c <= 42651)
            : (c <= 42863 || (c >= 42865 && c <= 42887)))))))
      : (c <= 42894 || (c < 64256
        ? (c < 42998
          ? (c < 42963
            ? (c < 42961
              ? (c >= 42897 && c <= 42954)
              : c <= 42961)
            : (c <= 42963 || (c >= 42965 && c <= 42969)))
          : (c <= 42998 || (c < 43872
            ? (c < 43824
              ? c == 43002
              : c <= 43866)
            : (c <= 43880 || (c >= 43888 && c <= 43967)))))
        : (c <= 64262 || (c < 66967
          ? (c < 66600
            ? (c < 65345
              ? (c >= 64275 && c <= 64279)
              : c <= 65370)
            : (c <= 66639 || (c >= 66776 && c <= 66811)))
          : (c <= 66977 || (c < 66995
            ? (c >= 66979 && c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool sym_lowercase_identifier_character_set_3(int32_t c) {
  return (c < 7899
    ? (c < 1165
      ? (c < 468
        ? (c < 337
          ? (c < 287
            ? (c < 263
              ? (c < 181
                ? (c < 'a'
                  ? (c < '0'
                    ? c == '#'
                    : (c <= '9' || c == '_'))
                  : (c <= 'z' || (c < 174
                    ? c == 169
                    : c <= 174)))
                : (c <= 181 || (c < 257
                  ? (c < 248
                    ? (c >= 223 && c <= 246)
                    : c <= 255)
                  : (c <= 257 || (c < 261
                    ? c == 259
                    : c <= 261)))))
              : (c <= 263 || (c < 275
                ? (c < 269
                  ? (c < 267
                    ? c == 265
                    : c <= 267)
                  : (c <= 269 || (c < 273
                    ? c == 271
                    : c <= 273)))
                : (c <= 275 || (c < 281
                  ? (c < 279
                    ? c == 277
                    : c <= 279)
                  : (c <= 281 || (c < 285
                    ? c == 283
                    : c <= 285)))))))
            : (c <= 287 || (c < 311
              ? (c < 299
                ? (c < 293
                  ? (c < 291
                    ? c == 289
                    : c <= 291)
                  : (c <= 293 || (c < 297
                    ? c == 295
                    : c <= 297)))
                : (c <= 299 || (c < 305
                  ? (c < 303
                    ? c == 301
                    : c <= 303)
                  : (c <= 305 || (c < 309
                    ? c == 307
                    : c <= 309)))))
              : (c <= 312 || (c < 324
                ? (c < 318
                  ? (c < 316
                    ? c == 314
                    : c <= 316)
                  : (c <= 318 || (c < 322
                    ? c == 320
                    : c <= 322)))
                : (c <= 324 || (c < 331
                  ? (c < 328
                    ? c == 326
                    : c <= 329)
                  : (c <= 331 || (c < 335
                    ? c == 333
                    : c <= 335)))))))))
          : (c <= 337 || (c < 389
            ? (c < 361
              ? (c < 349
                ? (c < 343
                  ? (c < 341
                    ? c == 339
                    : c <= 341)
                  : (c <= 343 || (c < 347
                    ? c == 345
                    : c <= 347)))
                : (c <= 349 || (c < 355
                  ? (c < 353
                    ? c == 351
                    : c <= 353)
                  : (c <= 355 || (c < 359
                    ? c == 357
                    : c <= 359)))))
              : (c <= 361 || (c < 373
                ? (c < 367
                  ? (c < 365
                    ? c == 363
                    : c <= 365)
                  : (c <= 367 || (c < 371
                    ? c == 369
                    : c <= 371)))
                : (c <= 373 || (c < 380
                  ? (c < 378
                    ? c == 375
                    : c <= 378)
                  : (c <= 380 || (c < 387
                    ? (c >= 382 && c <= 384)
                    : c <= 387)))))))
            : (c <= 389 || (c < 429
              ? (c < 414
                ? (c < 402
                  ? (c < 396
                    ? c == 392
                    : c <= 397)
                  : (c <= 402 || (c < 409
                    ? c == 405
                    : c <= 411)))
                : (c <= 414 || (c < 421
                  ? (c < 419
                    ? c == 417
                    : c <= 419)
                  : (c <= 421 || (c < 426
                    ? c == 424
                    : c <= 427)))))
              : (c <= 429 || (c < 454
                ? (c < 438
                  ? (c < 436
                    ? c == 432
                    : c <= 436)
                  : (c <= 438 || (c < 445
                    ? (c >= 441 && c <= 442)
                    : c <= 447)))
                : (c <= 454 || (c < 462
                  ? (c < 460
                    ? c == 457
                    : c <= 460)
                  : (c <= 462 || (c < 466
                    ? c == 464
                    : c <= 466)))))))))))
        : (c <= 468 || (c < 583
          ? (c < 523
            ? (c < 495
              ? (c < 483
                ? (c < 476
                  ? (c < 472
                    ? c == 470
                    : (c <= 472 || c == 474))
                  : (c <= 477 || (c < 481
                    ? c == 479
                    : c <= 481)))
                : (c <= 483 || (c < 489
                  ? (c < 487
                    ? c == 485
                    : c <= 487)
                  : (c <= 489 || (c < 493
                    ? c == 491
                    : c <= 493)))))
              : (c <= 496 || (c < 511
                ? (c < 505
                  ? (c < 501
                    ? c == 499
                    : c <= 501)
                  : (c <= 505 || (c < 509
                    ? c == 507
                    : c <= 509)))
                : (c <= 511 || (c < 517
                  ? (c < 515
                    ? c == 513
                    : c <= 515)
                  : (c <= 517 || (c < 521
                    ? c == 519
                    : c <= 521)))))))
            : (c <= 523 || (c < 547
              ? (c < 535
                ? (c < 529
                  ? (c < 527
                    ? c == 525
                    : c <= 527)
                  : (c <= 529 || (c < 533
                    ? c == 531
                    : c <= 533)))
                : (c <= 535 || (c < 541
                  ? (c < 539
                    ? c == 537
                    : c <= 539)
                  : (c <= 541 || (c < 545
                    ? c == 543
                    : c <= 545)))))
              : (c <= 547 || (c < 559
                ? (c < 553
                  ? (c < 551
                    ? c == 549
                    : c <= 551)
                  : (c <= 553 || (c < 557
                    ? c == 555
                    : c <= 557)))
                : (c <= 559 || (c < 572
                  ? (c < 563
                    ? c == 561
                    : c <= 569)
                  : (c <= 572 || (c < 578
                    ? (c >= 575 && c <= 576)
                    : c <= 578)))))))))
          : (c <= 583 || (c < 1005
            ? (c < 976
              ? (c < 881
                ? (c < 589
                  ? (c < 587
                    ? c == 585
                    : c <= 587)
                  : (c <= 589 || (c < 661
                    ? (c >= 591 && c <= 659)
                    : c <= 687)))
                : (c <= 881 || (c < 891
                  ? (c < 887
                    ? c == 883
                    : c <= 887)
                  : (c <= 893 || (c < 940
                    ? c == 912
                    : c <= 974)))))
              : (c <= 977 || (c < 993
                ? (c < 987
                  ? (c < 985
                    ? (c >= 981 && c <= 983)
                    : c <= 985)
                  : (c <= 987 || (c < 991
                    ? c == 989
                    : c <= 991)))
                : (c <= 993 || (c < 999
                  ? (c < 997
                    ? c == 995
                    : c <= 997)
                  : (c <= 999 || (c < 1003
                    ? c == 1001
                    : c <= 1003)))))))
            : (c <= 1005 || (c < 1133
              ? (c < 1121
                ? (c < 1016
                  ? (c < 1013
                    ? (c >= 1007 && c <= 1011)
                    : c <= 1013)
                  : (c <= 1016 || (c < 1072
                    ? (c >= 1019 && c <= 1020)
                    : c <= 1119)))
                : (c <= 1121 || (c < 1127
                  ? (c < 1125
                    ? c == 1123
                    : c <= 1125)
                  : (c <= 1127 || (c < 1131
                    ? c == 1129
                    : c <= 1131)))))
              : (c <= 1133 || (c < 1145
                ? (c < 1139
                  ? (c < 1137
                    ? c == 1135
                    : c <= 1137)
                  : (c <= 1139 || (c < 1143
                    ? c == 1141
                    : c <= 1143)))
                : (c <= 1145 || (c < 1151
                  ? (c < 1149
                    ? c == 1147
                    : c <= 1149)
                  : (c <= 1151 || (c < 1163
                    ? c == 1153
                    : c <= 1163)))))))))))))
      : (c <= 1165 || (c < 7697
        ? (c < 1265
          ? (c < 1215
            ? (c < 1191
              ? (c < 1179
                ? (c < 1173
                  ? (c < 1169
                    ? c == 1167
                    : (c <= 1169 || c == 1171))
                  : (c <= 1173 || (c < 1177
                    ? c == 1175
                    : c <= 1177)))
                : (c <= 1179 || (c < 1185
                  ? (c < 1183
                    ? c == 1181
                    : c <= 1183)
                  : (c <= 1185 || (c < 1189
                    ? c == 1187
                    : c <= 1189)))))
              : (c <= 1191 || (c < 1203
                ? (c < 1197
                  ? (c < 1195
                    ? c == 1193
                    : c <= 1195)
                  : (c <= 1197 || (c < 1201
                    ? c == 1199
                    : c <= 1201)))
                : (c <= 1203 || (c < 1209
                  ? (c < 1207
                    ? c == 1205
                    : c <= 1207)
                  : (c <= 1209 || (c < 1213
                    ? c == 1211
                    : c <= 1213)))))))
            : (c <= 1215 || (c < 1241
              ? (c < 1228
                ? (c < 1222
                  ? (c < 1220
                    ? c == 1218
                    : c <= 1220)
                  : (c <= 1222 || (c < 1226
                    ? c == 1224
                    : c <= 1226)))
                : (c <= 1228 || (c < 1235
                  ? (c < 1233
                    ? (c >= 1230 && c <= 1231)
                    : c <= 1233)
                  : (c <= 1235 || (c < 1239
                    ? c == 1237
                    : c <= 1239)))))
              : (c <= 1241 || (c < 1253
                ? (c < 1247
                  ? (c < 1245
                    ? c == 1243
                    : c <= 1245)
                  : (c <= 1247 || (c < 1251
                    ? c == 1249
                    : c <= 1251)))
                : (c <= 1253 || (c < 1259
                  ? (c < 1257
                    ? c == 1255
                    : c <= 1257)
                  : (c <= 1259 || (c < 1263
                    ? c == 1261
                    : c <= 1263)))))))))
          : (c <= 1265 || (c < 1313
            ? (c < 1289
              ? (c < 1277
                ? (c < 1271
                  ? (c < 1269
                    ? c == 1267
                    : c <= 1269)
                  : (c <= 1271 || (c < 1275
                    ? c == 1273
                    : c <= 1275)))
                : (c <= 1277 || (c < 1283
                  ? (c < 1281
                    ? c == 1279
                    : c <= 1281)
                  : (c <= 1283 || (c < 1287
                    ? c == 1285
                    : c <= 1287)))))
              : (c <= 1289 || (c < 1301
                ? (c < 1295
                  ? (c < 1293
                    ? c == 1291
                    : c <= 1293)
                  : (c <= 1295 || (c < 1299
                    ? c == 1297
                    : c <= 1299)))
                : (c <= 1301 || (c < 1307
                  ? (c < 1305
                    ? c == 1303
                    : c <= 1305)
                  : (c <= 1307 || (c < 1311
                    ? c == 1309
                    : c <= 1311)))))))
            : (c <= 1313 || (c < 7296
              ? (c < 1325
                ? (c < 1319
                  ? (c < 1317
                    ? c == 1315
                    : c <= 1317)
                  : (c <= 1319 || (c < 1323
                    ? c == 1321
                    : c <= 1323)))
                : (c <= 1325 || (c < 4304
                  ? (c < 1376
                    ? c == 1327
                    : c <= 1416)
                  : (c <= 4346 || (c < 5112
                    ? (c >= 4349 && c <= 4351)
                    : c <= 5117)))))
              : (c <= 7304 || (c < 7685
                ? (c < 7545
                  ? (c < 7531
                    ? (c >= 7424 && c <= 7467)
                    : c <= 7543)
                  : (c <= 7578 || (c < 7683
                    ? c == 7681
                    : c <= 7683)))
                : (c <= 7685 || (c < 7691
                  ? (c < 7689
                    ? c == 7687
                    : c <= 7689)
                  : (c <= 7691 || (c < 7695
                    ? c == 7693
                    : c <= 7695)))))))))))
        : (c <= 7697 || (c < 7795
          ? (c < 7747
            ? (c < 7723
              ? (c < 7711
                ? (c < 7705
                  ? (c < 7701
                    ? c == 7699
                    : (c <= 7701 || c == 7703))
                  : (c <= 7705 || (c < 7709
                    ? c == 7707
                    : c <= 7709)))
                : (c <= 7711 || (c < 7717
                  ? (c < 7715
                    ? c == 7713
                    : c <= 7715)
                  : (c <= 7717 || (c < 7721
                    ? c == 7719
                    : c <= 7721)))))
              : (c <= 7723 || (c < 7735
                ? (c < 7729
                  ? (c < 7727
                    ? c == 7725
                    : c <= 7727)
                  : (c <= 7729 || (c < 7733
                    ? c == 7731
                    : c <= 7733)))
                : (c <= 7735 || (c < 7741
                  ? (c < 7739
                    ? c == 7737
                    : c <= 7739)
                  : (c <= 7741 || (c < 7745
                    ? c == 7743
                    : c <= 7745)))))))
            : (c <= 7747 || (c < 7771
              ? (c < 7759
                ? (c < 7753
                  ? (c < 7751
                    ? c == 7749
                    : c <= 7751)
                  : (c <= 7753 || (c < 7757
                    ? c == 7755
                    : c <= 7757)))
                : (c <= 7759 || (c < 7765
                  ? (c < 7763
                    ? c == 7761
                    : c <= 7763)
                  : (c <= 7765 || (c < 7769
                    ? c == 7767
                    : c <= 7769)))))
              : (c <= 7771 || (c < 7783
                ? (c < 7777
                  ? (c < 7775
                    ? c == 7773
                    : c <= 7775)
                  : (c <= 7777 || (c < 7781
                    ? c == 7779
                    : c <= 7781)))
                : (c <= 7783 || (c < 7789
                  ? (c < 7787
                    ? c == 7785
                    : c <= 7787)
                  : (c <= 7789 || (c < 7793
                    ? c == 7791
                    : c <= 7793)))))))))
          : (c <= 7795 || (c < 7851
            ? (c < 7819
              ? (c < 7807
                ? (c < 7801
                  ? (c < 7799
                    ? c == 7797
                    : c <= 7799)
                  : (c <= 7801 || (c < 7805
                    ? c == 7803
                    : c <= 7805)))
                : (c <= 7807 || (c < 7813
                  ? (c < 7811
                    ? c == 7809
                    : c <= 7811)
                  : (c <= 7813 || (c < 7817
                    ? c == 7815
                    : c <= 7817)))))
              : (c <= 7819 || (c < 7839
                ? (c < 7825
                  ? (c < 7823
                    ? c == 7821
                    : c <= 7823)
                  : (c <= 7825 || (c < 7829
                    ? c == 7827
                    : c <= 7837)))
                : (c <= 7839 || (c < 7845
                  ? (c < 7843
                    ? c == 7841
                    : c <= 7843)
                  : (c <= 7845 || (c < 7849
                    ? c == 7847
                    : c <= 7849)))))))
            : (c <= 7851 || (c < 7875
              ? (c < 7863
                ? (c < 7857
                  ? (c < 7855
                    ? c == 7853
                    : c <= 7855)
                  : (c <= 7857 || (c < 7861
                    ? c == 7859
                    : c <= 7861)))
                : (c <= 7863 || (c < 7869
                  ? (c < 7867
                    ? c == 7865
                    : c <= 7867)
                  : (c <= 7869 || (c < 7873
                    ? c == 7871
                    : c <= 7873)))))
              : (c <= 7875 || (c < 7887
                ? (c < 7881
                  ? (c < 7879
                    ? c == 7877
                    : c <= 7879)
                  : (c <= 7881 || (c < 7885
                    ? c == 7883
                    : c <= 7885)))
                : (c <= 7887 || (c < 7893
                  ? (c < 7891
                    ? c == 7889
                    : c <= 7891)
                  : (c <= 7893 || (c < 7897
                    ? c == 7895
                    : c <= 7897)))))))))))))))
    : (c <= 7899 || (c < 12336
      ? (c < 9939
        ? (c < 8518
          ? (c < 8048
            ? (c < 7925
              ? (c < 7913
                ? (c < 7907
                  ? (c < 7903
                    ? c == 7901
                    : (c <= 7903 || c == 7905))
                  : (c <= 7907 || (c < 7911
                    ? c == 7909
                    : c <= 7911)))
                : (c <= 7913 || (c < 7919
                  ? (c < 7917
                    ? c == 7915
                    : c <= 7917)
                  : (c <= 7919 || (c < 7923
                    ? c == 7921
                    : c <= 7923)))))
              : (c <= 7925 || (c < 7952
                ? (c < 7931
                  ? (c < 7929
                    ? c == 7927
                    : c <= 7929)
                  : (c <= 7931 || (c < 7935
                    ? c == 7933
                    : c <= 7943)))
                : (c <= 7957 || (c < 8000
                  ? (c < 7984
                    ? (c >= 7968 && c <= 7975)
                    : c <= 7991)
                  : (c <= 8005 || (c < 8032
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8039)))))))
            : (c <= 8061 || (c < 8178
              ? (c < 8126
                ? (c < 8096
                  ? (c < 8080
                    ? (c >= 8064 && c <= 8071)
                    : c <= 8087)
                  : (c <= 8103 || (c < 8118
                    ? (c >= 8112 && c <= 8116)
                    : c <= 8119)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8135)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8151)
                    : c <= 8167)))))
              : (c <= 8180 || (c < 8467
                ? (c < 8265
                  ? (c < 8252
                    ? (c >= 8182 && c <= 8183)
                    : c <= 8252)
                  : (c <= 8265 || (c < 8462
                    ? c == 8458
                    : c <= 8463)))
                : (c <= 8467 || (c < 8500
                  ? (c < 8495
                    ? c == 8482
                    : c <= 8495)
                  : (c <= 8500 || (c < 8508
                    ? c == 8505
                    : c <= 8509)))))))))
          : (c <= 8521 || (c < 9770
            ? (c < 9654
              ? (c < 9000
                ? (c < 8596
                  ? (c < 8580
                    ? c == 8526
                    : c <= 8580)
                  : (c <= 8601 || (c < 8986
                    ? (c >= 8617 && c <= 8618)
                    : c <= 8987)))
                : (c <= 9000 || (c < 9208
                  ? (c < 9193
                    ? c == 9167
                    : c <= 9203)
                  : (c <= 9210 || (c < 9642
                    ? c == 9410
                    : c <= 9643)))))
              : (c <= 9654 || (c < 9748
                ? (c < 9728
                  ? (c < 9723
                    ? c == 9664
                    : c <= 9726)
                  : (c <= 9732 || (c < 9745
                    ? c == 9742
                    : c <= 9745)))
                : (c <= 9749 || (c < 9760
                  ? (c < 9757
                    ? c == 9752
                    : c <= 9757)
                  : (c <= 9760 || (c < 9766
                    ? (c >= 9762 && c <= 9763)
                    : c <= 9766)))))))
            : (c <= 9770 || (c < 9874
              ? (c < 9823
                ? (c < 9792
                  ? (c < 9784
                    ? (c >= 9774 && c <= 9775)
                    : c <= 9786)
                  : (c <= 9792 || (c < 9800
                    ? c == 9794
                    : c <= 9811)))
                : (c <= 9824 || (c < 9832
                  ? (c < 9829
                    ? c == 9827
                    : c <= 9830)
                  : (c <= 9832 || (c < 9854
                    ? c == 9851
                    : c <= 9855)))))
              : (c <= 9879 || (c < 9904
                ? (c < 9888
                  ? (c < 9883
                    ? c == 9881
                    : c <= 9884)
                  : (c <= 9889 || (c < 9898
                    ? c == 9895
                    : c <= 9899)))
                : (c <= 9905 || (c < 9928
                  ? (c < 9924
                    ? (c >= 9917 && c <= 9918)
                    : c <= 9925)
                  : (c <= 9928 || (c < 9937
                    ? (c >= 9934 && c <= 9935)
                    : c <= 9937)))))))))))
        : (c <= 9940 || (c < 11409
          ? (c < 10160
            ? (c < 10017
              ? (c < 9992
                ? (c < 9981
                  ? (c < 9968
                    ? (c >= 9961 && c <= 9962)
                    : (c <= 9973 || (c >= 9975 && c <= 9978)))
                  : (c <= 9981 || (c < 9989
                    ? c == 9986
                    : c <= 9989)))
                : (c <= 9997 || (c < 10004
                  ? (c < 10002
                    ? c == 9999
                    : c <= 10002)
                  : (c <= 10004 || (c < 10013
                    ? c == 10006
                    : c <= 10013)))))
              : (c <= 10017 || (c < 10062
                ? (c < 10052
                  ? (c < 10035
                    ? c == 10024
                    : c <= 10036)
                  : (c <= 10052 || (c < 10060
                    ? c == 10055
                    : c <= 10060)))
                : (c <= 10062 || (c < 10083
                  ? (c < 10071
                    ? (c >= 10067 && c <= 10069)
                    : c <= 10071)
                  : (c <= 10084 || (c < 10145
                    ? (c >= 10133 && c <= 10135)
                    : c <= 10145)))))))
            : (c <= 10160 || (c < 11372
              ? (c < 11093
                ? (c < 11013
                  ? (c < 10548
                    ? c == 10175
                    : c <= 10549)
                  : (c <= 11015 || (c < 11088
                    ? (c >= 11035 && c <= 11036)
                    : c <= 11088)))
                : (c <= 11093 || (c < 11365
                  ? (c < 11361
                    ? (c >= 11312 && c <= 11359)
                    : c <= 11361)
                  : (c <= 11366 || (c < 11370
                    ? c == 11368
                    : c <= 11370)))))
              : (c <= 11372 || (c < 11397
                ? (c < 11382
                  ? (c < 11379
                    ? c == 11377
                    : c <= 11380)
                  : (c <= 11387 || (c < 11395
                    ? c == 11393
                    : c <= 11395)))
                : (c <= 11397 || (c < 11403
                  ? (c < 11401
                    ? c == 11399
                    : c <= 11401)
                  : (c <= 11403 || (c < 11407
                    ? c == 11405
                    : c <= 11407)))))))))
          : (c <= 11409 || (c < 11457
            ? (c < 11433
              ? (c < 11421
                ? (c < 11415
                  ? (c < 11413
                    ? c == 11411
                    : c <= 11413)
                  : (c <= 11415 || (c < 11419
                    ? c == 11417
                    : c <= 11419)))
                : (c <= 11421 || (c < 11427
                  ? (c < 11425
                    ? c == 11423
                    : c <= 11425)
                  : (c <= 11427 || (c < 11431
                    ? c == 11429
                    : c <= 11431)))))
              : (c <= 11433 || (c < 11445
                ? (c < 11439
                  ? (c < 11437
                    ? c == 11435
                    : c <= 11437)
                  : (c <= 11439 || (c < 11443
                    ? c == 11441
                    : c <= 11443)))
                : (c <= 11445 || (c < 11451
                  ? (c < 11449
                    ? c == 11447
                    : c <= 11449)
                  : (c <= 11451 || (c < 11455
                    ? c == 11453
                    : c <= 11455)))))))
            : (c <= 11457 || (c < 11481
              ? (c < 11469
                ? (c < 11463
                  ? (c < 11461
                    ? c == 11459
                    : c <= 11461)
                  : (c <= 11463 || (c < 11467
                    ? c == 11465
                    : c <= 11467)))
                : (c <= 11469 || (c < 11475
                  ? (c < 11473
                    ? c == 11471
                    : c <= 11473)
                  : (c <= 11475 || (c < 11479
                    ? c == 11477
                    : c <= 11479)))))
              : (c <= 11481 || (c < 11500
                ? (c < 11487
                  ? (c < 11485
                    ? c == 11483
                    : c <= 11485)
                  : (c <= 11487 || (c < 11491
                    ? c == 11489
                    : c <= 11492)))
                : (c <= 11500 || (c < 11520
                  ? (c < 11507
                    ? c == 11502
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))))))))))))
      : (c <= 12336 || (c < 42915
        ? (c < 42805
          ? (c < 42603
            ? (c < 42579
              ? (c < 42567
                ? (c < 42561
                  ? (c < 12951
                    ? c == 12349
                    : (c <= 12951 || c == 12953))
                  : (c <= 42561 || (c < 42565
                    ? c == 42563
                    : c <= 42565)))
                : (c <= 42567 || (c < 42573
                  ? (c < 42571
                    ? c == 42569
                    : c <= 42571)
                  : (c <= 42573 || (c < 42577
                    ? c == 42575
                    : c <= 42577)))))
              : (c <= 42579 || (c < 42591
                ? (c < 42585
                  ? (c < 42583
                    ? c == 42581
                    : c <= 42583)
                  : (c <= 42585 || (c < 42589
                    ? c == 42587
                    : c <= 42589)))
                : (c <= 42591 || (c < 42597
                  ? (c < 42595
                    ? c == 42593
                    : c <= 42595)
                  : (c <= 42597 || (c < 42601
                    ? c == 42599
                    : c <= 42601)))))))
            : (c <= 42603 || (c < 42645
              ? (c < 42633
                ? (c < 42627
                  ? (c < 42625
                    ? c == 42605
                    : c <= 42625)
                  : (c <= 42627 || (c < 42631
                    ? c == 42629
                    : c <= 42631)))
                : (c <= 42633 || (c < 42639
                  ? (c < 42637
                    ? c == 42635
                    : c <= 42637)
                  : (c <= 42639 || (c < 42643
                    ? c == 42641
                    : c <= 42643)))))
              : (c <= 42645 || (c < 42791
                ? (c < 42651
                  ? (c < 42649
                    ? c == 42647
                    : c <= 42649)
                  : (c <= 42651 || (c < 42789
                    ? c == 42787
                    : c <= 42789)))
                : (c <= 42791 || (c < 42797
                  ? (c < 42795
                    ? c == 42793
                    : c <= 42795)
                  : (c <= 42797 || (c < 42803
                    ? (c >= 42799 && c <= 42801)
                    : c <= 42803)))))))))
          : (c <= 42805 || (c < 42853
            ? (c < 42829
              ? (c < 42817
                ? (c < 42811
                  ? (c < 42809
                    ? c == 42807
                    : c <= 42809)
                  : (c <= 42811 || (c < 42815
                    ? c == 42813
                    : c <= 42815)))
                : (c <= 42817 || (c < 42823
                  ? (c < 42821
                    ? c == 42819
                    : c <= 42821)
                  : (c <= 42823 || (c < 42827
                    ? c == 42825
                    : c <= 42827)))))
              : (c <= 42829 || (c < 42841
                ? (c < 42835
                  ? (c < 42833
                    ? c == 42831
                    : c <= 42833)
                  : (c <= 42835 || (c < 42839
                    ? c == 42837
                    : c <= 42839)))
                : (c <= 42841 || (c < 42847
                  ? (c < 42845
                    ? c == 42843
                    : c <= 42845)
                  : (c <= 42847 || (c < 42851
                    ? c == 42849
                    : c <= 42851)))))))
            : (c <= 42853 || (c < 42885
              ? (c < 42865
                ? (c < 42859
                  ? (c < 42857
                    ? c == 42855
                    : c <= 42857)
                  : (c <= 42859 || (c < 42863
                    ? c == 42861
                    : c <= 42863)))
                : (c <= 42872 || (c < 42879
                  ? (c < 42876
                    ? c == 42874
                    : c <= 42876)
                  : (c <= 42879 || (c < 42883
                    ? c == 42881
                    : c <= 42883)))))
              : (c <= 42885 || (c < 42903
                ? (c < 42894
                  ? (c < 42892
                    ? c == 42887
                    : c <= 42892)
                  : (c <= 42894 || (c < 42899
                    ? c == 42897
                    : c <= 42901)))
                : (c <= 42903 || (c < 42909
                  ? (c < 42907
                    ? c == 42905
                    : c <= 42907)
                  : (c <= 42909 || (c < 42913
                    ? c == 42911
                    : c <= 42913)))))))))))
        : (c <= 42915 || (c < 127897
          ? (c < 64256
            ? (c < 42952
              ? (c < 42937
                ? (c < 42927
                  ? (c < 42919
                    ? c == 42917
                    : (c <= 42919 || c == 42921))
                  : (c <= 42927 || (c < 42935
                    ? c == 42933
                    : c <= 42935)))
                : (c <= 42937 || (c < 42943
                  ? (c < 42941
                    ? c == 42939
                    : c <= 42941)
                  : (c <= 42943 || (c < 42947
                    ? c == 42945
                    : c <= 42947)))))
              : (c <= 42952 || (c < 42969
                ? (c < 42963
                  ? (c < 42961
                    ? c == 42954
                    : c <= 42961)
                  : (c <= 42963 || (c < 42967
                    ? c == 42965
                    : c <= 42967)))
                : (c <= 42969 || (c < 43824
                  ? (c < 43002
                    ? c == 42998
                    : c <= 43002)
                  : (c <= 43866 || (c < 43888
                    ? (c >= 43872 && c <= 43880)
                    : c <= 43967)))))))
            : (c <= 64262 || (c < 127358
              ? (c < 66979
                ? (c < 66600
                  ? (c < 65345
                    ? (c >= 64275 && c <= 64279)
                    : c <= 65370)
                  : (c <= 66639 || (c < 66967
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66977)))
                : (c <= 66993 || (c < 126980
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 126980 || (c < 127344
                    ? c == 127183
                    : c <= 127345)))))
              : (c <= 127359 || (c < 127535
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c < 127514
                    ? (c >= 127489 && c <= 127490)
                    : c <= 127514)))
                : (c <= 127535 || (c < 127744
                  ? (c < 127568
                    ? (c >= 127538 && c <= 127546)
                    : c <= 127569)
                  : (c <= 127777 || (c < 127894
                    ? (c >= 127780 && c <= 127891)
                    : c <= 127895)))))))))
          : (c <= 127899 || (c < 128499
            ? (c < 128405
              ? (c < 128336
                ? (c < 127991
                  ? (c < 127987
                    ? (c >= 127902 && c <= 127984)
                    : c <= 127989)
                  : (c <= 128253 || (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)))
                : (c <= 128359 || (c < 128391
                  ? (c < 128371
                    ? (c >= 128367 && c <= 128368)
                    : c <= 128378)
                  : (c <= 128391 || (c < 128400
                    ? (c >= 128394 && c <= 128397)
                    : c <= 128400)))))
              : (c <= 128406 || (c < 128465
                ? (c < 128433
                  ? (c < 128424
                    ? (c >= 128420 && c <= 128421)
                    : c <= 128424)
                  : (c <= 128434 || (c < 128450
                    ? c == 128444
                    : c <= 128452)))
                : (c <= 128467 || (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || (c < 128495
                    ? c == 128488
                    : c <= 128495)))))))
            : (c <= 128499 || (c < 129292
              ? (c < 128745
                ? (c < 128715
                  ? (c < 128640
                    ? (c >= 128506 && c <= 128591)
                    : c <= 128709)
                  : (c <= 128722 || (c < 128733
                    ? (c >= 128725 && c <= 128727)
                    : c <= 128741)))
                : (c <= 128745 || (c < 128755
                  ? (c < 128752
                    ? (c >= 128747 && c <= 128748)
                    : c <= 128752)
                  : (c <= 128764 || (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)))))
              : (c <= 129338 || (c < 129680
                ? (c < 129648
                  ? (c < 129351
                    ? (c >= 129340 && c <= 129349)
                    : c <= 129535)
                  : (c <= 129652 || (c < 129664
                    ? (c >= 129656 && c <= 129660)
                    : c <= 129670)))
                : (c <= 129708 || (c < 129744
                  ? (c < 129728
                    ? (c >= 129712 && c <= 129722)
                    : c <= 129733)
                  : (c <= 129753 || (c < 129776
                    ? (c >= 129760 && c <= 129767)
                    : c <= 129782)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_4(int32_t c) {
  return (c < 9410
    ? (c < 3461
      ? (c < 2527
        ? (c < 1568
          ? (c < 710
            ? (c < 'a'
              ? (c < ','
                ? (c < '\''
                  ? (c < '#'
                    ? c == '!'
                    : c <= '#')
                  : (c <= '\'' || c == '*'))
                : (c <= ',' || (c < '\\'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '\\' || c == '_'))))
              : (c <= 'z' || (c < 185
                ? (c < 178
                  ? (c < 174
                    ? (c >= 169 && c <= 170)
                    : c <= 174)
                  : (c <= 179 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c < 192
                    ? (c >= 188 && c <= 190)
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))))
            : (c <= 721 || (c < 908
              ? (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1488
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))))))
          : (c <= 1610 || (c < 2144
            ? (c < 1869
              ? (c < 1765
                ? (c < 1649
                  ? (c < 1646
                    ? (c >= 1632 && c <= 1641)
                    : c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1774 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))))
              : (c <= 1957 || (c < 2048
                ? (c < 2036
                  ? (c < 1984
                    ? c == 1969
                    : c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2088
                  ? (c < 2084
                    ? c == 2074
                    : c <= 2084)
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))))
            : (c <= 2154 || (c < 2437
              ? (c < 2365
                ? (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2406
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))))
              : (c <= 2444 || (c < 2486
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))))))))
        : (c <= 2529 || (c < 2962
          ? (c < 2741
            ? (c < 2616
              ? (c < 2575
                ? (c < 2556
                  ? (c < 2548
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2553)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))
              : (c <= 2617 || (c < 2693
                ? (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))
            : (c <= 2745 || (c < 2866
              ? (c < 2809
                ? (c < 2784
                  ? (c < 2768
                    ? c == 2749
                    : c <= 2768)
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))
                : (c <= 2809 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))
              : (c <= 2867 || (c < 2918
                ? (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2949
                  ? (c < 2947
                    ? (c >= 2929 && c <= 2935)
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))))
          : (c <= 2965 || (c < 3205
            ? (c < 3086
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3046
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3058 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3192
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3183)
                  : (c <= 3198 || c == 3200))))))
            : (c <= 3212 || (c < 3332
              ? (c < 3261
                ? (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))
              : (c <= 3340 || (c < 3412
                ? (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))))))))))))
      : (c <= 3478 || (c < 6279
        ? (c < 4304
          ? (c < 3792
            ? (c < 3713
              ? (c < 3558
                ? (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3567 || (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3635)
                  : (c <= 3654 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3776
                  ? (c < 3773
                    ? (c >= 3762 && c <= 3763)
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))))
            : (c <= 3801 || (c < 4186
              ? (c < 3913
                ? (c < 3872
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3891 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))))
              : (c <= 4189 || (c < 4238
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c < 4256
                    ? (c >= 4240 && c <= 4249)
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))))))))
          : (c <= 4346 || (c < 5112
            ? (c < 4792
              ? (c < 4698
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4882
                ? (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))
                : (c <= 4885 || (c < 4992
                  ? (c < 4969
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))))))
            : (c <= 5117 || (c < 5998
              ? (c < 5870
                ? (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))))
              : (c <= 6000 || (c < 6128
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))))))))
        : (c <= 6312 || (c < 8064
          ? (c < 7232
            ? (c < 6688
              ? (c < 6512
                ? (c < 6400
                  ? (c < 6320
                    ? c == 6314
                    : c <= 6389)
                  : (c <= 6430 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6608
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6678)))))
              : (c <= 6740 || (c < 6981
                ? (c < 6823
                  ? (c < 6800
                    ? (c >= 6784 && c <= 6793)
                    : c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c < 7043
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7072)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7241 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))))))))
          : (c <= 8116 || (c < 8473
            ? (c < 8252
              ? (c < 8144
                ? (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))))
              : (c <= 8252 || (c < 8336
                ? (c < 8308
                  ? (c < 8304
                    ? c == 8265
                    : c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))))))
            : (c <= 8477 || (c < 8528
              ? (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? c == 8482
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8493 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))
              : (c <= 8585 || (c < 9167
                ? (c < 8986
                  ? (c < 8617
                    ? (c >= 8596 && c <= 8601)
                    : c <= 8618)
                  : (c <= 8987 || c == 9000))
                : (c <= 9167 || (c < 9208
                  ? (c >= 9193 && c <= 9203)
                  : (c <= 9210 || (c >= 9312 && c <= 9371)))))))))))))))
    : (c <= 9410 || (c < 43744
      ? (c < 11568
        ? (c < 9961
          ? (c < 9800
            ? (c < 9752
              ? (c < 9723
                ? (c < 9654
                  ? (c < 9642
                    ? (c >= 9450 && c <= 9471)
                    : c <= 9643)
                  : (c <= 9654 || c == 9664))
                : (c <= 9726 || (c < 9745
                  ? (c < 9742
                    ? (c >= 9728 && c <= 9732)
                    : c <= 9742)
                  : (c <= 9745 || (c >= 9748 && c <= 9749)))))
              : (c <= 9752 || (c < 9770
                ? (c < 9762
                  ? (c < 9760
                    ? c == 9757
                    : c <= 9760)
                  : (c <= 9763 || c == 9766))
                : (c <= 9770 || (c < 9792
                  ? (c < 9784
                    ? (c >= 9774 && c <= 9775)
                    : c <= 9786)
                  : (c <= 9792 || c == 9794))))))
            : (c <= 9811 || (c < 9888
              ? (c < 9851
                ? (c < 9829
                  ? (c < 9827
                    ? (c >= 9823 && c <= 9824)
                    : c <= 9827)
                  : (c <= 9830 || c == 9832))
                : (c <= 9851 || (c < 9881
                  ? (c < 9874
                    ? (c >= 9854 && c <= 9855)
                    : c <= 9879)
                  : (c <= 9881 || (c >= 9883 && c <= 9884)))))
              : (c <= 9889 || (c < 9924
                ? (c < 9904
                  ? (c < 9898
                    ? c == 9895
                    : c <= 9899)
                  : (c <= 9905 || (c >= 9917 && c <= 9918)))
                : (c <= 9925 || (c < 9937
                  ? (c < 9934
                    ? c == 9928
                    : c <= 9935)
                  : (c <= 9937 || (c >= 9939 && c <= 9940)))))))))
          : (c <= 9962 || (c < 10071
            ? (c < 10006
              ? (c < 9989
                ? (c < 9981
                  ? (c < 9975
                    ? (c >= 9968 && c <= 9973)
                    : c <= 9978)
                  : (c <= 9981 || c == 9986))
                : (c <= 9989 || (c < 10002
                  ? (c < 9999
                    ? (c >= 9992 && c <= 9997)
                    : c <= 9999)
                  : (c <= 10002 || c == 10004))))
              : (c <= 10006 || (c < 10052
                ? (c < 10024
                  ? (c < 10017
                    ? c == 10013
                    : c <= 10017)
                  : (c <= 10024 || (c >= 10035 && c <= 10036)))
                : (c <= 10052 || (c < 10062
                  ? (c < 10060
                    ? c == 10055
                    : c <= 10060)
                  : (c <= 10062 || (c >= 10067 && c <= 10069)))))))
            : (c <= 10071 || (c < 11088
              ? (c < 10160
                ? (c < 10133
                  ? (c < 10102
                    ? (c >= 10083 && c <= 10084)
                    : c <= 10131)
                  : (c <= 10135 || c == 10145))
                : (c <= 10160 || (c < 11013
                  ? (c < 10548
                    ? c == 10175
                    : c <= 10549)
                  : (c <= 11015 || (c >= 11035 && c <= 11036)))))
              : (c <= 11088 || (c < 11517
                ? (c < 11499
                  ? (c < 11264
                    ? c == 11093
                    : c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))))))
        : (c <= 11623 || (c < 42623
          ? (c < 12549
            ? (c < 11736
              ? (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))
              : (c <= 11742 || (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? c == 11823
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12336 && c <= 12341)))
                : (c <= 12349 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))))
            : (c <= 12591 || (c < 12953
              ? (c < 12832
                ? (c < 12704
                  ? (c < 12690
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12928
                  ? (c < 12881
                    ? (c >= 12872 && c <= 12879)
                    : c <= 12895)
                  : (c <= 12937 || c == 12951))))
              : (c <= 12953 || (c < 40959
                ? (c < 19903
                  ? (c < 13312
                    ? (c >= 12977 && c <= 12991)
                    : c <= 13312)
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))))))
          : (c <= 42653 || (c < 43312
            ? (c < 43015
              ? (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))
              : (c <= 43018 || (c < 43216
                ? (c < 43072
                  ? (c < 43056
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43061)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43262 || (c >= 43264 && c <= 43301)))))))
            : (c <= 43334 || (c < 43616
              ? (c < 43494
                ? (c < 43471
                  ? (c < 43396
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c >= 43600 && c <= 43609)))))
              : (c <= 43638 || (c < 43705
                ? (c < 43697
                  ? (c < 43646
                    ? c == 43642
                    : c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))))))))))
      : (c <= 43754 || (c < 67463
        ? (c < 65498
          ? (c < 64287
            ? (c < 44016
              ? (c < 43808
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))))
              : (c <= 44025 || (c < 63744
                ? (c < 55216
                  ? (c < 55203
                    ? c == 44032
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65345
                ? (c < 65296
                  ? (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)
                  : (c <= 65305 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))))))))
          : (c <= 65500 || (c < 66513
            ? (c < 65930
              ? (c < 65599
                ? (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65799
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65843 || (c >= 65856 && c <= 65912)))))
              : (c <= 65931 || (c < 66349
                ? (c < 66273
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))
                : (c <= 66378 || (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))))))
            : (c <= 66517 || (c < 66964
              ? (c < 66816
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67072
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))))))))
        : (c <= 67504 || (c < 128391
          ? (c < 127377
            ? (c < 67751
              ? (c < 67639
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67672
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c >= 67705 && c <= 67742)))))
              : (c <= 67759 || (c < 126980
                ? (c < 67835
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67867 || (c >= 67872 && c <= 67883)))
                : (c <= 126980 || (c < 127358
                  ? (c < 127344
                    ? c == 127183
                    : c <= 127345)
                  : (c <= 127359 || c == 127374))))))
            : (c <= 127386 || (c < 127897
              ? (c < 127538
                ? (c < 127514
                  ? (c < 127489
                    ? (c >= 127462 && c <= 127487)
                    : c <= 127490)
                  : (c <= 127514 || c == 127535))
                : (c <= 127546 || (c < 127780
                  ? (c < 127744
                    ? (c >= 127568 && c <= 127569)
                    : c <= 127777)
                  : (c <= 127891 || (c >= 127894 && c <= 127895)))))
              : (c <= 127899 || (c < 128329
                ? (c < 127991
                  ? (c < 127987
                    ? (c >= 127902 && c <= 127984)
                    : c <= 127989)
                  : (c <= 128253 || (c >= 128255 && c <= 128317)))
                : (c <= 128334 || (c < 128367
                  ? (c >= 128336 && c <= 128359)
                  : (c <= 128368 || (c >= 128371 && c <= 128378)))))))))
          : (c <= 128391 || (c < 128733
            ? (c < 128476
              ? (c < 128424
                ? (c < 128405
                  ? (c < 128400
                    ? (c >= 128394 && c <= 128397)
                    : c <= 128400)
                  : (c <= 128406 || (c >= 128420 && c <= 128421)))
                : (c <= 128424 || (c < 128450
                  ? (c < 128444
                    ? (c >= 128433 && c <= 128434)
                    : c <= 128444)
                  : (c <= 128452 || (c >= 128465 && c <= 128467)))))
              : (c <= 128478 || (c < 128499
                ? (c < 128488
                  ? (c < 128483
                    ? c == 128481
                    : c <= 128483)
                  : (c <= 128488 || c == 128495))
                : (c <= 128499 || (c < 128715
                  ? (c < 128640
                    ? (c >= 128506 && c <= 128591)
                    : c <= 128709)
                  : (c <= 128722 || (c >= 128725 && c <= 128727)))))))
            : (c <= 128741 || (c < 129648
              ? (c < 128992
                ? (c < 128752
                  ? (c < 128747
                    ? c == 128745
                    : c <= 128748)
                  : (c <= 128752 || (c >= 128755 && c <= 128764)))
                : (c <= 129003 || (c < 129340
                  ? (c < 129292
                    ? c == 129008
                    : c <= 129338)
                  : (c <= 129349 || (c >= 129351 && c <= 129535)))))
              : (c <= 129652 || (c < 129728
                ? (c < 129680
                  ? (c < 129664
                    ? (c >= 129656 && c <= 129660)
                    : c <= 129670)
                  : (c <= 129708 || (c >= 129712 && c <= 129722)))
                : (c <= 129733 || (c < 129760
                  ? (c >= 129744 && c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_5(int32_t c) {
  return (c < 9410
    ? (c < 3461
      ? (c < 2527
        ? (c < 1568
          ? (c < 710
            ? (c < 'b'
              ? (c < ','
                ? (c < '\''
                  ? (c < '#'
                    ? c == '!'
                    : c <= '#')
                  : (c <= '\'' || c == '*'))
                : (c <= ',' || (c < '\\'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '\\' || c == '_'))))
              : (c <= 'z' || (c < 185
                ? (c < 178
                  ? (c < 174
                    ? (c >= 169 && c <= 170)
                    : c <= 174)
                  : (c <= 179 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c < 192
                    ? (c >= 188 && c <= 190)
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))))
            : (c <= 721 || (c < 908
              ? (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1488
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))))))
          : (c <= 1610 || (c < 2144
            ? (c < 1869
              ? (c < 1765
                ? (c < 1649
                  ? (c < 1646
                    ? (c >= 1632 && c <= 1641)
                    : c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1774 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))))
              : (c <= 1957 || (c < 2048
                ? (c < 2036
                  ? (c < 1984
                    ? c == 1969
                    : c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2088
                  ? (c < 2084
                    ? c == 2074
                    : c <= 2084)
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))))
            : (c <= 2154 || (c < 2437
              ? (c < 2365
                ? (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2406
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))))
              : (c <= 2444 || (c < 2486
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))))))))
        : (c <= 2529 || (c < 2962
          ? (c < 2741
            ? (c < 2616
              ? (c < 2575
                ? (c < 2556
                  ? (c < 2548
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2553)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))
              : (c <= 2617 || (c < 2693
                ? (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))
            : (c <= 2745 || (c < 2866
              ? (c < 2809
                ? (c < 2784
                  ? (c < 2768
                    ? c == 2749
                    : c <= 2768)
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))
                : (c <= 2809 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))
              : (c <= 2867 || (c < 2918
                ? (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2949
                  ? (c < 2947
                    ? (c >= 2929 && c <= 2935)
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))))
          : (c <= 2965 || (c < 3205
            ? (c < 3086
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3046
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3058 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3192
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3183)
                  : (c <= 3198 || c == 3200))))))
            : (c <= 3212 || (c < 3332
              ? (c < 3261
                ? (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))
              : (c <= 3340 || (c < 3412
                ? (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))))))))))))
      : (c <= 3478 || (c < 6279
        ? (c < 4304
          ? (c < 3792
            ? (c < 3713
              ? (c < 3558
                ? (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3567 || (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3635)
                  : (c <= 3654 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3776
                  ? (c < 3773
                    ? (c >= 3762 && c <= 3763)
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))))
            : (c <= 3801 || (c < 4186
              ? (c < 3913
                ? (c < 3872
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3891 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))))
              : (c <= 4189 || (c < 4238
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c < 4256
                    ? (c >= 4240 && c <= 4249)
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))))))))
          : (c <= 4346 || (c < 5112
            ? (c < 4792
              ? (c < 4698
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4882
                ? (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))
                : (c <= 4885 || (c < 4992
                  ? (c < 4969
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))))))
            : (c <= 5117 || (c < 5998
              ? (c < 5870
                ? (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))))
              : (c <= 6000 || (c < 6128
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))))))))
        : (c <= 6312 || (c < 8064
          ? (c < 7232
            ? (c < 6688
              ? (c < 6512
                ? (c < 6400
                  ? (c < 6320
                    ? c == 6314
                    : c <= 6389)
                  : (c <= 6430 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6608
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6678)))))
              : (c <= 6740 || (c < 6981
                ? (c < 6823
                  ? (c < 6800
                    ? (c >= 6784 && c <= 6793)
                    : c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c < 7043
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7072)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7241 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))))))))
          : (c <= 8116 || (c < 8473
            ? (c < 8252
              ? (c < 8144
                ? (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))))
              : (c <= 8252 || (c < 8336
                ? (c < 8308
                  ? (c < 8304
                    ? c == 8265
                    : c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))))))
            : (c <= 8477 || (c < 8528
              ? (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? c == 8482
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8493 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))
              : (c <= 8585 || (c < 9167
                ? (c < 8986
                  ? (c < 8617
                    ? (c >= 8596 && c <= 8601)
                    : c <= 8618)
                  : (c <= 8987 || c == 9000))
                : (c <= 9167 || (c < 9208
                  ? (c >= 9193 && c <= 9203)
                  : (c <= 9210 || (c >= 9312 && c <= 9371)))))))))))))))
    : (c <= 9410 || (c < 43744
      ? (c < 11568
        ? (c < 9961
          ? (c < 9800
            ? (c < 9752
              ? (c < 9723
                ? (c < 9654
                  ? (c < 9642
                    ? (c >= 9450 && c <= 9471)
                    : c <= 9643)
                  : (c <= 9654 || c == 9664))
                : (c <= 9726 || (c < 9745
                  ? (c < 9742
                    ? (c >= 9728 && c <= 9732)
                    : c <= 9742)
                  : (c <= 9745 || (c >= 9748 && c <= 9749)))))
              : (c <= 9752 || (c < 9770
                ? (c < 9762
                  ? (c < 9760
                    ? c == 9757
                    : c <= 9760)
                  : (c <= 9763 || c == 9766))
                : (c <= 9770 || (c < 9792
                  ? (c < 9784
                    ? (c >= 9774 && c <= 9775)
                    : c <= 9786)
                  : (c <= 9792 || c == 9794))))))
            : (c <= 9811 || (c < 9888
              ? (c < 9851
                ? (c < 9829
                  ? (c < 9827
                    ? (c >= 9823 && c <= 9824)
                    : c <= 9827)
                  : (c <= 9830 || c == 9832))
                : (c <= 9851 || (c < 9881
                  ? (c < 9874
                    ? (c >= 9854 && c <= 9855)
                    : c <= 9879)
                  : (c <= 9881 || (c >= 9883 && c <= 9884)))))
              : (c <= 9889 || (c < 9924
                ? (c < 9904
                  ? (c < 9898
                    ? c == 9895
                    : c <= 9899)
                  : (c <= 9905 || (c >= 9917 && c <= 9918)))
                : (c <= 9925 || (c < 9937
                  ? (c < 9934
                    ? c == 9928
                    : c <= 9935)
                  : (c <= 9937 || (c >= 9939 && c <= 9940)))))))))
          : (c <= 9962 || (c < 10071
            ? (c < 10006
              ? (c < 9989
                ? (c < 9981
                  ? (c < 9975
                    ? (c >= 9968 && c <= 9973)
                    : c <= 9978)
                  : (c <= 9981 || c == 9986))
                : (c <= 9989 || (c < 10002
                  ? (c < 9999
                    ? (c >= 9992 && c <= 9997)
                    : c <= 9999)
                  : (c <= 10002 || c == 10004))))
              : (c <= 10006 || (c < 10052
                ? (c < 10024
                  ? (c < 10017
                    ? c == 10013
                    : c <= 10017)
                  : (c <= 10024 || (c >= 10035 && c <= 10036)))
                : (c <= 10052 || (c < 10062
                  ? (c < 10060
                    ? c == 10055
                    : c <= 10060)
                  : (c <= 10062 || (c >= 10067 && c <= 10069)))))))
            : (c <= 10071 || (c < 11088
              ? (c < 10160
                ? (c < 10133
                  ? (c < 10102
                    ? (c >= 10083 && c <= 10084)
                    : c <= 10131)
                  : (c <= 10135 || c == 10145))
                : (c <= 10160 || (c < 11013
                  ? (c < 10548
                    ? c == 10175
                    : c <= 10549)
                  : (c <= 11015 || (c >= 11035 && c <= 11036)))))
              : (c <= 11088 || (c < 11517
                ? (c < 11499
                  ? (c < 11264
                    ? c == 11093
                    : c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))))))
        : (c <= 11623 || (c < 42623
          ? (c < 12549
            ? (c < 11736
              ? (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))
              : (c <= 11742 || (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? c == 11823
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12336 && c <= 12341)))
                : (c <= 12349 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))))
            : (c <= 12591 || (c < 12953
              ? (c < 12832
                ? (c < 12704
                  ? (c < 12690
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12928
                  ? (c < 12881
                    ? (c >= 12872 && c <= 12879)
                    : c <= 12895)
                  : (c <= 12937 || c == 12951))))
              : (c <= 12953 || (c < 40959
                ? (c < 19903
                  ? (c < 13312
                    ? (c >= 12977 && c <= 12991)
                    : c <= 13312)
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))))))
          : (c <= 42653 || (c < 43312
            ? (c < 43015
              ? (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))
              : (c <= 43018 || (c < 43216
                ? (c < 43072
                  ? (c < 43056
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43061)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43262 || (c >= 43264 && c <= 43301)))))))
            : (c <= 43334 || (c < 43616
              ? (c < 43494
                ? (c < 43471
                  ? (c < 43396
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c >= 43600 && c <= 43609)))))
              : (c <= 43638 || (c < 43705
                ? (c < 43697
                  ? (c < 43646
                    ? c == 43642
                    : c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))))))))))
      : (c <= 43754 || (c < 67463
        ? (c < 65498
          ? (c < 64287
            ? (c < 44016
              ? (c < 43808
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))))
              : (c <= 44025 || (c < 63744
                ? (c < 55216
                  ? (c < 55203
                    ? c == 44032
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65345
                ? (c < 65296
                  ? (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)
                  : (c <= 65305 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))))))))
          : (c <= 65500 || (c < 66513
            ? (c < 65930
              ? (c < 65599
                ? (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65799
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65843 || (c >= 65856 && c <= 65912)))))
              : (c <= 65931 || (c < 66349
                ? (c < 66273
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))
                : (c <= 66378 || (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))))))
            : (c <= 66517 || (c < 66964
              ? (c < 66816
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67072
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))))))))
        : (c <= 67504 || (c < 128391
          ? (c < 127377
            ? (c < 67751
              ? (c < 67639
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67672
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c >= 67705 && c <= 67742)))))
              : (c <= 67759 || (c < 126980
                ? (c < 67835
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67867 || (c >= 67872 && c <= 67883)))
                : (c <= 126980 || (c < 127358
                  ? (c < 127344
                    ? c == 127183
                    : c <= 127345)
                  : (c <= 127359 || c == 127374))))))
            : (c <= 127386 || (c < 127897
              ? (c < 127538
                ? (c < 127514
                  ? (c < 127489
                    ? (c >= 127462 && c <= 127487)
                    : c <= 127490)
                  : (c <= 127514 || c == 127535))
                : (c <= 127546 || (c < 127780
                  ? (c < 127744
                    ? (c >= 127568 && c <= 127569)
                    : c <= 127777)
                  : (c <= 127891 || (c >= 127894 && c <= 127895)))))
              : (c <= 127899 || (c < 128329
                ? (c < 127991
                  ? (c < 127987
                    ? (c >= 127902 && c <= 127984)
                    : c <= 127989)
                  : (c <= 128253 || (c >= 128255 && c <= 128317)))
                : (c <= 128334 || (c < 128367
                  ? (c >= 128336 && c <= 128359)
                  : (c <= 128368 || (c >= 128371 && c <= 128378)))))))))
          : (c <= 128391 || (c < 128733
            ? (c < 128476
              ? (c < 128424
                ? (c < 128405
                  ? (c < 128400
                    ? (c >= 128394 && c <= 128397)
                    : c <= 128400)
                  : (c <= 128406 || (c >= 128420 && c <= 128421)))
                : (c <= 128424 || (c < 128450
                  ? (c < 128444
                    ? (c >= 128433 && c <= 128434)
                    : c <= 128444)
                  : (c <= 128452 || (c >= 128465 && c <= 128467)))))
              : (c <= 128478 || (c < 128499
                ? (c < 128488
                  ? (c < 128483
                    ? c == 128481
                    : c <= 128483)
                  : (c <= 128488 || c == 128495))
                : (c <= 128499 || (c < 128715
                  ? (c < 128640
                    ? (c >= 128506 && c <= 128591)
                    : c <= 128709)
                  : (c <= 128722 || (c >= 128725 && c <= 128727)))))))
            : (c <= 128741 || (c < 129648
              ? (c < 128992
                ? (c < 128752
                  ? (c < 128747
                    ? c == 128745
                    : c <= 128748)
                  : (c <= 128752 || (c >= 128755 && c <= 128764)))
                : (c <= 129003 || (c < 129340
                  ? (c < 129292
                    ? c == 129008
                    : c <= 129338)
                  : (c <= 129349 || (c >= 129351 && c <= 129535)))))
              : (c <= 129652 || (c < 129728
                ? (c < 129680
                  ? (c < 129664
                    ? (c >= 129656 && c <= 129660)
                    : c <= 129670)
                  : (c <= 129708 || (c >= 129712 && c <= 129722)))
                : (c <= 129733 || (c < 129760
                  ? (c >= 129744 && c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == 8704) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('$' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (sym_uppercase_identifier_character_set_1(lookahead)) ADVANCE(24);
      if (aux_sym__identifier_suffix_char_token2_character_set_1(lookahead)) ADVANCE(20);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(24);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == 8704) ADVANCE(45);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(23);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(24);
      if (sym_uppercase_identifier_character_set_4(lookahead)) ADVANCE(24);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == 8704) ADVANCE(45);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(23);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(24);
      if (sym_uppercase_identifier_character_set_4(lookahead)) ADVANCE(24);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (sym_uppercase_identifier_character_set_5(lookahead)) ADVANCE(23);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(24);
      if (sym_uppercase_identifier_character_set_6(lookahead)) ADVANCE(24);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '*') ADVANCE(21);
      if (sym_uppercase_identifier_character_set_7(lookahead)) ADVANCE(23);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(24);
      if (sym_uppercase_identifier_character_set_8(lookahead)) ADVANCE(24);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '=') ADVANCE(40);
      if (sym_uppercase_identifier_character_set_9(lookahead)) ADVANCE(23);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(24);
      if (sym_uppercase_identifier_character_set_8(lookahead)) ADVANCE(24);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '=') ADVANCE(40);
      if (sym_uppercase_identifier_character_set_9(lookahead)) ADVANCE(23);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(24);
      if (sym_uppercase_identifier_character_set_8(lookahead)) ADVANCE(24);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '=') ADVANCE(40);
      if (sym_uppercase_identifier_character_set_7(lookahead)) ADVANCE(23);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(24);
      if (sym_uppercase_identifier_character_set_8(lookahead)) ADVANCE(24);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '.') ADVANCE(36);
      if (sym_uppercase_identifier_character_set_7(lookahead)) ADVANCE(23);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(24);
      if (sym_uppercase_identifier_character_set_8(lookahead)) ADVANCE(24);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '.') ADVANCE(37);
      if (sym_uppercase_identifier_character_set_7(lookahead)) ADVANCE(33);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '*') ADVANCE(32);
      if (sym_uppercase_identifier_character_set_7(lookahead)) ADVANCE(33);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == 8704) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(23);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(24);
      if (sym_uppercase_identifier_character_set_6(lookahead)) ADVANCE(24);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__identifier_suffix_char_token1);
      if (lookahead == 'o') ADVANCE(30);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__identifier_suffix_char_token1);
      if (lookahead == 's') ADVANCE(26);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__identifier_suffix_char_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (sym_uppercase_identifier_character_set_10(lookahead)) ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__identifier_suffix_char_token1);
      if (sym_uppercase_identifier_character_set_11(lookahead)) ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__identifier_suffix_char_token1);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__identifier_suffix_char_token1);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__identifier_suffix_char_token2);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '\\') ADVANCE(21);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(23);
      if (sym_uppercase_identifier_character_set_12(lookahead)) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (sym_uppercase_identifier_character_set_10(lookahead)) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (sym_uppercase_identifier_character_set_11(lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'a') ADVANCE(28);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'e') ADVANCE(38);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'l') ADVANCE(44);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'l') ADVANCE(27);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'o') ADVANCE(30);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'r') ADVANCE(25);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 's') ADVANCE(26);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '\\') ADVANCE(32);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(33);
      if (sym_uppercase_identifier_character_set_12(lookahead)) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (sym_uppercase_identifier_character_set_11(lookahead)) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_uppercase_identifier_character_set_11(lookahead)) ADVANCE(23);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_uppercase_identifier_character_set_11(lookahead)) ADVANCE(33);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (sym_uppercase_identifier_character_set_11(lookahead)) ADVANCE(23);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (sym_uppercase_identifier_character_set_11(lookahead)) ADVANCE(23);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_forall);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
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
  [12] = {.lex_state = 1, .external_lex_state = 4},
  [13] = {.lex_state = 1, .external_lex_state = 4},
  [14] = {.lex_state = 1, .external_lex_state = 3},
  [15] = {.lex_state = 1, .external_lex_state = 4},
  [16] = {.lex_state = 1, .external_lex_state = 4},
  [17] = {.lex_state = 1, .external_lex_state = 4},
  [18] = {.lex_state = 1, .external_lex_state = 4},
  [19] = {.lex_state = 1, .external_lex_state = 4},
  [20] = {.lex_state = 1, .external_lex_state = 3},
  [21] = {.lex_state = 1, .external_lex_state = 4},
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
  [36] = {.lex_state = 2, .external_lex_state = 3},
  [37] = {.lex_state = 2, .external_lex_state = 3},
  [38] = {.lex_state = 2, .external_lex_state = 3},
  [39] = {.lex_state = 3, .external_lex_state = 3},
  [40] = {.lex_state = 1, .external_lex_state = 3},
  [41] = {.lex_state = 1, .external_lex_state = 3},
  [42] = {.lex_state = 1, .external_lex_state = 3},
  [43] = {.lex_state = 1, .external_lex_state = 3},
  [44] = {.lex_state = 1, .external_lex_state = 3},
  [45] = {.lex_state = 1, .external_lex_state = 3},
  [46] = {.lex_state = 2, .external_lex_state = 4},
  [47] = {.lex_state = 2, .external_lex_state = 4},
  [48] = {.lex_state = 2, .external_lex_state = 4},
  [49] = {.lex_state = 1, .external_lex_state = 4},
  [50] = {.lex_state = 1, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 1, .external_lex_state = 4},
  [53] = {.lex_state = 0, .external_lex_state = 1},
  [54] = {.lex_state = 1, .external_lex_state = 4},
  [55] = {.lex_state = 1, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 3, .external_lex_state = 3},
  [58] = {.lex_state = 1, .external_lex_state = 4},
  [59] = {.lex_state = 1, .external_lex_state = 4},
  [60] = {.lex_state = 1, .external_lex_state = 4},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 1},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 4, .external_lex_state = 4},
  [65] = {.lex_state = 4, .external_lex_state = 4},
  [66] = {.lex_state = 4, .external_lex_state = 4},
  [67] = {.lex_state = 4, .external_lex_state = 3},
  [68] = {.lex_state = 5, .external_lex_state = 4},
  [69] = {.lex_state = 4, .external_lex_state = 3},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 4, .external_lex_state = 4},
  [72] = {.lex_state = 4, .external_lex_state = 4},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 1, .external_lex_state = 3},
  [75] = {.lex_state = 6, .external_lex_state = 4},
  [76] = {.lex_state = 5, .external_lex_state = 3},
  [77] = {.lex_state = 6, .external_lex_state = 4},
  [78] = {.lex_state = 1, .external_lex_state = 3},
  [79] = {.lex_state = 6, .external_lex_state = 4},
  [80] = {.lex_state = 5, .external_lex_state = 4},
  [81] = {.lex_state = 7, .external_lex_state = 3},
  [82] = {.lex_state = 7, .external_lex_state = 3},
  [83] = {.lex_state = 4, .external_lex_state = 3},
  [84] = {.lex_state = 7, .external_lex_state = 3},
  [85] = {.lex_state = 6, .external_lex_state = 3},
  [86] = {.lex_state = 5, .external_lex_state = 4},
  [87] = {.lex_state = 6, .external_lex_state = 3},
  [88] = {.lex_state = 8, .external_lex_state = 4},
  [89] = {.lex_state = 8, .external_lex_state = 4},
  [90] = {.lex_state = 4, .external_lex_state = 3},
  [91] = {.lex_state = 8, .external_lex_state = 4},
  [92] = {.lex_state = 6, .external_lex_state = 3},
  [93] = {.lex_state = 5, .external_lex_state = 4},
  [94] = {.lex_state = 4, .external_lex_state = 3},
  [95] = {.lex_state = 4, .external_lex_state = 4},
  [96] = {.lex_state = 4, .external_lex_state = 4},
  [97] = {.lex_state = 4, .external_lex_state = 4},
  [98] = {.lex_state = 9, .external_lex_state = 3},
  [99] = {.lex_state = 4, .external_lex_state = 4},
  [100] = {.lex_state = 4, .external_lex_state = 3},
  [101] = {.lex_state = 4, .external_lex_state = 4},
  [102] = {.lex_state = 9, .external_lex_state = 3},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 5, .external_lex_state = 3},
  [105] = {.lex_state = 5, .external_lex_state = 3},
  [106] = {.lex_state = 5, .external_lex_state = 3},
  [107] = {.lex_state = 9, .external_lex_state = 3},
  [108] = {.lex_state = 4, .external_lex_state = 3},
  [109] = {.lex_state = 7, .external_lex_state = 3},
  [110] = {.lex_state = 7, .external_lex_state = 3},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 4, .external_lex_state = 3},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 4, .external_lex_state = 3},
  [116] = {.lex_state = 10, .external_lex_state = 3},
  [117] = {.lex_state = 10, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 1},
  [125] = {.lex_state = 9, .external_lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 1},
  [127] = {.lex_state = 9, .external_lex_state = 3},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 11, .external_lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 0, .external_lex_state = 3},
  [137] = {.lex_state = 11, .external_lex_state = 3},
  [138] = {.lex_state = 0, .external_lex_state = 3},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 11, .external_lex_state = 3},
  [141] = {.lex_state = 11, .external_lex_state = 3},
  [142] = {.lex_state = 11, .external_lex_state = 3},
  [143] = {.lex_state = 11, .external_lex_state = 3},
  [144] = {.lex_state = 11, .external_lex_state = 3},
  [145] = {.lex_state = 11, .external_lex_state = 3},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 11, .external_lex_state = 3},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 11, .external_lex_state = 3},
  [150] = {.lex_state = 0, .external_lex_state = 4},
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
    [aux_sym__identifier_suffix_char_token1] = ACTIONS(1),
    [aux_sym__identifier_suffix_char_token2] = ACTIONS(1),
    [sym_uppercase_identifier] = ACTIONS(1),
    [sym_lowercase_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_lit_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_forall] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__start_mark] = ACTIONS(1),
    [sym__end_mark] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(136),
    [sym__toplevel] = STATE(70),
    [sym_use_statement] = STATE(70),
    [sym_declaration] = STATE(70),
    [sym_definition] = STATE(70),
    [aux_sym_source_file_repeat1] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__start_mark] = ACTIONS(7),
    [sym__newline] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    STATE(10), 1,
      sym_type,
    STATE(22), 1,
      sym_qualified_operator,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(137), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    ACTIONS(17), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(41), 10,
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
  [57] = 17,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_type,
    STATE(22), 1,
      sym_qualified_operator,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(112), 1,
      aux_sym_type_tuple_repeat1,
    STATE(137), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(41), 10,
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
  [118] = 17,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_type,
    STATE(22), 1,
      sym_qualified_operator,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(114), 1,
      aux_sym_type_tuple_repeat1,
    STATE(137), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(41), 10,
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
  [179] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    STATE(10), 1,
      sym_type,
    STATE(22), 1,
      sym_qualified_operator,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(137), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    ACTIONS(31), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(41), 10,
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
  [236] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    STATE(10), 1,
      sym_type,
    STATE(22), 1,
      sym_qualified_operator,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(137), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    ACTIONS(33), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(41), 10,
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
  [293] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    STATE(10), 1,
      sym_type,
    STATE(22), 1,
      sym_qualified_operator,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(137), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    ACTIONS(35), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(41), 10,
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
  [350] = 17,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_type,
    STATE(22), 1,
      sym_qualified_operator,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(111), 1,
      aux_sym_type_tuple_repeat1,
    STATE(137), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(41), 10,
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
  [411] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    STATE(10), 1,
      sym_type,
    STATE(22), 1,
      sym_qualified_operator,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(137), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    ACTIONS(39), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(41), 10,
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
  [468] = 9,
    ACTIONS(3), 1,
      sym__newline,
    STATE(10), 1,
      sym_type,
    STATE(22), 1,
      sym_qualified_operator,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(137), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    ACTIONS(43), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(41), 7,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(41), 10,
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
  [513] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    STATE(10), 1,
      sym_type,
    STATE(22), 1,
      sym_qualified_operator,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(137), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    ACTIONS(45), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(41), 10,
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
  [570] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(39), 1,
      sym__end_mark,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(19), 1,
      sym_type,
    STATE(25), 1,
      sym_qualified_operator,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(149), 1,
      sym_namespace,
    STATE(49), 10,
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
  [625] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(33), 1,
      sym__end_mark,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(19), 1,
      sym_type,
    STATE(25), 1,
      sym_qualified_operator,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(149), 1,
      sym_namespace,
    STATE(49), 10,
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
  [680] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_type,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(135), 1,
      sym_qualified_operator,
    STATE(137), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(41), 10,
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
  [735] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(35), 1,
      sym__end_mark,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(19), 1,
      sym_type,
    STATE(25), 1,
      sym_qualified_operator,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(149), 1,
      sym_namespace,
    STATE(49), 10,
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
  [790] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    ACTIONS(61), 1,
      sym__end_mark,
    STATE(19), 1,
      sym_type,
    STATE(25), 1,
      sym_qualified_operator,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(149), 1,
      sym_namespace,
    STATE(49), 10,
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
  [845] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(31), 1,
      sym__end_mark,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(19), 1,
      sym_type,
    STATE(25), 1,
      sym_qualified_operator,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(149), 1,
      sym_namespace,
    STATE(49), 10,
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
  [900] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(17), 1,
      sym__end_mark,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(19), 1,
      sym_type,
    STATE(25), 1,
      sym_qualified_operator,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(149), 1,
      sym_namespace,
    STATE(49), 10,
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
  [955] = 9,
    ACTIONS(3), 1,
      sym__newline,
    STATE(19), 1,
      sym_type,
    STATE(25), 1,
      sym_qualified_operator,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(149), 1,
      sym_namespace,
    ACTIONS(43), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(41), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
    STATE(49), 10,
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
  [998] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_type,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(137), 1,
      sym_namespace,
    STATE(138), 1,
      sym_qualified_operator,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(41), 10,
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
  [1053] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_operator,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    ACTIONS(65), 1,
      sym__end_mark,
    STATE(19), 1,
      sym_type,
    STATE(25), 1,
      sym_qualified_operator,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(149), 1,
      sym_namespace,
    STATE(49), 10,
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
  [1108] = 14,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_type,
    STATE(28), 1,
      sym_type_ability,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(147), 1,
      sym_namespace,
    STATE(41), 10,
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
  [1160] = 14,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_type,
    STATE(31), 1,
      sym_type_ability,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(144), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(49), 10,
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
  [1212] = 14,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym_type,
    STATE(27), 1,
      sym_type_ability,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(147), 1,
      sym_namespace,
    STATE(41), 10,
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
  [1264] = 14,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_type,
    STATE(35), 1,
      sym_type_ability,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(144), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(49), 10,
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
  [1316] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    STATE(6), 1,
      sym_type,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(147), 1,
      sym_namespace,
    STATE(41), 10,
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
  [1362] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    STATE(9), 1,
      sym_type,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(147), 1,
      sym_namespace,
    STATE(41), 10,
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
  [1408] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    STATE(5), 1,
      sym_type,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(147), 1,
      sym_namespace,
    STATE(41), 10,
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
  [1454] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    STATE(11), 1,
      sym_type,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(147), 1,
      sym_namespace,
    STATE(41), 10,
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
  [1500] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(13), 1,
      sym_type,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(144), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(49), 10,
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
  [1546] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(12), 1,
      sym_type,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(144), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(49), 10,
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
  [1592] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(16), 1,
      sym_type,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(144), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(49), 10,
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
  [1638] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(21), 1,
      sym_type,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(144), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(49), 10,
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
  [1684] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_,
    STATE(3), 1,
      sym_type,
    STATE(40), 1,
      sym_uppercase_qualified_identifier,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(147), 1,
      sym_namespace,
    STATE(41), 10,
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
  [1730] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(47), 1,
      sym_uppercase_identifier,
    ACTIONS(49), 1,
      sym_lowercase_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_forall,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(17), 1,
      sym_type,
    STATE(52), 1,
      sym_uppercase_qualified_identifier,
    STATE(144), 1,
      sym_namespace,
    STATE(145), 1,
      sym_regular_identifier,
    STATE(49), 10,
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
  [1776] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(69), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(73), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1797] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(75), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(77), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1818] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(79), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(81), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1839] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(83), 1,
      sym_uppercase_identifier,
    ACTIONS(85), 1,
      sym_lowercase_identifier,
    ACTIONS(87), 1,
      sym_operator,
    ACTIONS(89), 1,
      anon_sym_use,
    ACTIONS(91), 1,
      aux_sym_lit_token1,
    STATE(68), 1,
      sym_qualified_identifier,
    STATE(79), 1,
      sym_regular_identifier,
    STATE(86), 1,
      sym_identifier,
    STATE(142), 1,
      sym_namespace,
    STATE(148), 2,
      sym_var,
      sym_lit,
  [1874] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(95), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(93), 7,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1892] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(99), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(97), 7,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1910] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(103), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(101), 7,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1928] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(107), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(105), 7,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1946] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(111), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(109), 7,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1964] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(115), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(113), 7,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1982] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(75), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(77), 4,
      sym__end_mark,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
  [2001] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(69), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(73), 4,
      sym__end_mark,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
  [2020] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(79), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(81), 4,
      sym__end_mark,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
  [2039] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(99), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(97), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
  [2055] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(119), 2,
      sym_lowercase_identifier,
      anon_sym_forall,
    ACTIONS(117), 6,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
      anon_sym_LBRACE,
  [2071] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(121), 1,
      sym__start_mark,
    STATE(133), 1,
      sym_block,
    STATE(53), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(121), 4,
      sym_use_statement,
      sym_declaration,
      sym_definition,
      sym_expression,
  [2091] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(95), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(93), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
  [2107] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(121), 1,
      sym__start_mark,
    ACTIONS(123), 1,
      sym__end_mark,
    STATE(62), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(121), 4,
      sym_use_statement,
      sym_declaration,
      sym_definition,
      sym_expression,
  [2127] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(103), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(101), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
  [2143] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(127), 2,
      sym_lowercase_identifier,
      anon_sym_forall,
    ACTIONS(125), 6,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
      anon_sym_LBRACE,
  [2159] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(121), 1,
      sym__start_mark,
    STATE(134), 1,
      sym_block,
    STATE(53), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(121), 4,
      sym_use_statement,
      sym_declaration,
      sym_definition,
      sym_expression,
  [2179] = 9,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(129), 1,
      sym_uppercase_identifier,
    ACTIONS(131), 1,
      sym_lowercase_identifier,
    ACTIONS(133), 1,
      sym_operator,
    ACTIONS(135), 1,
      anon_sym_use,
    STATE(76), 1,
      sym_qualified_identifier,
    STATE(87), 1,
      sym_regular_identifier,
    STATE(106), 1,
      sym_identifier,
    STATE(140), 1,
      sym_namespace,
  [2207] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(107), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(105), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
  [2223] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(115), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(113), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
  [2239] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(111), 3,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_forall,
    ACTIONS(109), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
  [2255] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(121), 1,
      sym__start_mark,
    STATE(150), 1,
      sym_block,
    STATE(53), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(121), 4,
      sym_use_statement,
      sym_declaration,
      sym_definition,
      sym_expression,
  [2275] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(137), 1,
      sym__start_mark,
    ACTIONS(140), 1,
      sym__end_mark,
    STATE(62), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(121), 4,
      sym_use_statement,
      sym_declaration,
      sym_definition,
      sym_expression,
  [2295] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(121), 1,
      sym__start_mark,
    STATE(139), 1,
      sym_block,
    STATE(53), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(121), 4,
      sym_use_statement,
      sym_declaration,
      sym_definition,
      sym_expression,
  [2315] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(142), 1,
      sym_uppercase_identifier,
    ACTIONS(144), 1,
      sym_lowercase_identifier,
    ACTIONS(146), 1,
      sym_operator,
    ACTIONS(148), 1,
      sym__end_mark,
    STATE(71), 1,
      aux_sym_use_statement_repeat1,
    STATE(95), 1,
      sym_regular_identifier,
    STATE(99), 1,
      sym_identifier,
  [2340] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(142), 1,
      sym_uppercase_identifier,
    ACTIONS(144), 1,
      sym_lowercase_identifier,
    ACTIONS(146), 1,
      sym_operator,
    ACTIONS(150), 1,
      sym__end_mark,
    STATE(66), 1,
      aux_sym_use_statement_repeat1,
    STATE(95), 1,
      sym_regular_identifier,
    STATE(99), 1,
      sym_identifier,
  [2365] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(142), 1,
      sym_uppercase_identifier,
    ACTIONS(144), 1,
      sym_lowercase_identifier,
    ACTIONS(146), 1,
      sym_operator,
    ACTIONS(152), 1,
      sym__end_mark,
    STATE(71), 1,
      aux_sym_use_statement_repeat1,
    STATE(95), 1,
      sym_regular_identifier,
    STATE(99), 1,
      sym_identifier,
  [2390] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(146), 1,
      sym_operator,
    ACTIONS(154), 1,
      sym_uppercase_identifier,
    ACTIONS(156), 1,
      sym_lowercase_identifier,
    STATE(65), 1,
      sym_qualified_identifier,
    STATE(89), 1,
      sym_regular_identifier,
    STATE(96), 1,
      sym_identifier,
    STATE(141), 1,
      sym_namespace,
  [2415] = 7,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(160), 1,
      anon_sym_COLON,
    ACTIONS(162), 1,
      anon_sym_EQ,
    ACTIONS(164), 1,
      sym__end_mark,
    STATE(82), 1,
      aux_sym_definition_repeat1,
    STATE(109), 1,
      sym_regular_identifier,
    ACTIONS(158), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [2438] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(146), 1,
      sym_operator,
    ACTIONS(154), 1,
      sym_uppercase_identifier,
    ACTIONS(156), 1,
      sym_lowercase_identifier,
    STATE(72), 1,
      sym_qualified_identifier,
    STATE(89), 1,
      sym_regular_identifier,
    STATE(96), 1,
      sym_identifier,
    STATE(141), 1,
      sym_namespace,
  [2463] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      sym__start_mark,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(73), 5,
      sym__toplevel,
      sym_use_statement,
      sym_declaration,
      sym_definition,
      aux_sym_source_file_repeat1,
  [2480] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(168), 1,
      sym_uppercase_identifier,
    ACTIONS(171), 1,
      sym_lowercase_identifier,
    ACTIONS(174), 1,
      sym_operator,
    ACTIONS(177), 1,
      sym__end_mark,
    STATE(71), 1,
      aux_sym_use_statement_repeat1,
    STATE(95), 1,
      sym_regular_identifier,
    STATE(99), 1,
      sym_identifier,
  [2505] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(142), 1,
      sym_uppercase_identifier,
    ACTIONS(144), 1,
      sym_lowercase_identifier,
    ACTIONS(146), 1,
      sym_operator,
    ACTIONS(179), 1,
      sym__end_mark,
    STATE(64), 1,
      aux_sym_use_statement_repeat1,
    STATE(95), 1,
      sym_regular_identifier,
    STATE(99), 1,
      sym_identifier,
  [2530] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym__start_mark,
    STATE(73), 5,
      sym__toplevel,
      sym_use_statement,
      sym_declaration,
      sym_definition,
      aux_sym_source_file_repeat1,
  [2547] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(188), 2,
      sym_lowercase_identifier,
      anon_sym_forall,
    ACTIONS(186), 4,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
  [2561] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      sym__end_mark,
    ACTIONS(190), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_COLON,
      anon_sym_EQ,
  [2577] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(196), 1,
      anon_sym_COLON,
    ACTIONS(198), 1,
      anon_sym_EQ,
    STATE(81), 1,
      aux_sym_definition_repeat1,
    STATE(109), 1,
      sym_regular_identifier,
    ACTIONS(158), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [2597] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(200), 1,
      sym__end_mark,
    ACTIONS(71), 5,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
  [2611] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(204), 2,
      sym_lowercase_identifier,
      anon_sym_forall,
    ACTIONS(202), 4,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_,
  [2625] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(194), 1,
      sym__end_mark,
    ACTIONS(206), 1,
      anon_sym_DOT,
    ACTIONS(190), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_COLON,
      anon_sym_EQ,
  [2641] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(210), 1,
      sym__end_mark,
    ACTIONS(208), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_COLON,
      anon_sym_EQ,
  [2654] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(212), 1,
      anon_sym_EQ,
    STATE(84), 1,
      aux_sym_definition_repeat1,
    STATE(109), 1,
      sym_regular_identifier,
    ACTIONS(158), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [2671] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(214), 1,
      anon_sym_EQ,
    STATE(84), 1,
      aux_sym_definition_repeat1,
    STATE(109), 1,
      sym_regular_identifier,
    ACTIONS(158), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [2688] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(83), 1,
      sym_uppercase_identifier,
    ACTIONS(85), 1,
      sym_lowercase_identifier,
    ACTIONS(87), 1,
      sym_operator,
    STATE(75), 1,
      sym_regular_identifier,
    STATE(80), 1,
      sym_identifier,
  [2707] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(219), 1,
      anon_sym_EQ,
    STATE(84), 1,
      aux_sym_definition_repeat1,
    STATE(109), 1,
      sym_regular_identifier,
    ACTIONS(216), 2,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
  [2724] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(71), 5,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
  [2735] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(223), 1,
      sym__end_mark,
    ACTIONS(221), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_COLON,
      anon_sym_EQ,
  [2748] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(206), 1,
      anon_sym_DOT,
    ACTIONS(190), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_COLON,
      anon_sym_EQ,
  [2761] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(200), 1,
      sym__end_mark,
    ACTIONS(71), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      sym_operator,
      anon_sym_DOT,
  [2774] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(194), 1,
      sym__end_mark,
    ACTIONS(206), 1,
      anon_sym_DOT,
    ACTIONS(190), 3,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      sym_operator,
  [2789] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(146), 1,
      sym_operator,
    ACTIONS(154), 1,
      sym_uppercase_identifier,
    ACTIONS(156), 1,
      sym_lowercase_identifier,
    STATE(91), 1,
      sym_regular_identifier,
    STATE(97), 1,
      sym_identifier,
  [2808] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      sym__end_mark,
    ACTIONS(190), 3,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      sym_operator,
  [2823] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(190), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_COLON,
      anon_sym_EQ,
  [2836] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(194), 1,
      sym__end_mark,
    ACTIONS(190), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_COLON,
      anon_sym_EQ,
  [2849] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(129), 1,
      sym_uppercase_identifier,
    ACTIONS(131), 1,
      sym_lowercase_identifier,
    ACTIONS(133), 1,
      sym_operator,
    STATE(92), 1,
      sym_regular_identifier,
    STATE(105), 1,
      sym_identifier,
  [2868] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(190), 2,
      sym_lowercase_identifier,
      sym_operator,
    ACTIONS(194), 2,
      sym__end_mark,
      sym_uppercase_identifier,
  [2880] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(221), 2,
      sym_lowercase_identifier,
      sym_operator,
    ACTIONS(223), 2,
      sym__end_mark,
      sym_uppercase_identifier,
  [2892] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(208), 2,
      sym_lowercase_identifier,
      sym_operator,
    ACTIONS(210), 2,
      sym__end_mark,
      sym_uppercase_identifier,
  [2904] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(225), 1,
      sym_lowercase_identifier,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(107), 1,
      aux_sym_type_forall_repeat1,
    STATE(125), 1,
      sym_type_variable,
  [2920] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(229), 2,
      sym__end_mark,
      sym_uppercase_identifier,
    ACTIONS(231), 2,
      sym_lowercase_identifier,
      sym_operator,
  [2932] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(233), 1,
      sym_uppercase_identifier,
    ACTIONS(235), 1,
      sym_lowercase_identifier,
    ACTIONS(237), 1,
      sym_operator,
    STATE(132), 1,
      sym_regular_identifier,
  [2948] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(71), 2,
      sym_lowercase_identifier,
      sym_operator,
    ACTIONS(200), 2,
      sym__end_mark,
      sym_uppercase_identifier,
  [2960] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(225), 1,
      sym_lowercase_identifier,
    ACTIONS(239), 1,
      anon_sym_DOT,
    STATE(107), 1,
      aux_sym_type_forall_repeat1,
    STATE(125), 1,
      sym_type_variable,
  [2976] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_type_tuple_repeat1,
    ACTIONS(45), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [2990] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(190), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_COLON,
      anon_sym_EQ,
  [3000] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(208), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_COLON,
      anon_sym_EQ,
  [3010] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(221), 4,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_COLON,
      anon_sym_EQ,
  [3020] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(244), 1,
      sym_lowercase_identifier,
    ACTIONS(247), 1,
      anon_sym_DOT,
    STATE(107), 1,
      aux_sym_type_forall_repeat1,
    STATE(125), 1,
      sym_type_variable,
  [3036] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(235), 1,
      sym_lowercase_identifier,
    ACTIONS(237), 1,
      sym_operator,
    ACTIONS(249), 1,
      sym_uppercase_identifier,
    STATE(132), 1,
      sym_regular_identifier,
  [3052] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(251), 3,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_EQ,
  [3061] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(71), 3,
      sym_uppercase_identifier,
      sym_lowercase_identifier,
      anon_sym_EQ,
  [3070] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_type_tuple_repeat1,
  [3083] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_type_tuple_repeat1,
  [3096] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(233), 1,
      sym_uppercase_identifier,
    ACTIONS(235), 1,
      sym_lowercase_identifier,
    STATE(132), 1,
      sym_regular_identifier,
  [3109] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_type_tuple_repeat1,
  [3122] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(235), 1,
      sym_lowercase_identifier,
    ACTIONS(249), 1,
      sym_uppercase_identifier,
    STATE(132), 1,
      sym_regular_identifier,
  [3135] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(259), 1,
      sym_lowercase_identifier,
    STATE(102), 1,
      aux_sym_type_forall_repeat1,
    STATE(125), 1,
      sym_type_variable,
  [3148] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(259), 1,
      sym_lowercase_identifier,
    STATE(98), 1,
      aux_sym_type_forall_repeat1,
    STATE(125), 1,
      sym_type_variable,
  [3161] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(261), 2,
      sym__start_mark,
      sym__end_mark,
  [3169] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(263), 2,
      sym__start_mark,
      sym__end_mark,
  [3177] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(261), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [3185] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(265), 2,
      sym__start_mark,
      sym__end_mark,
  [3193] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(267), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [3201] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(269), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [3209] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(267), 2,
      sym__start_mark,
      sym__end_mark,
  [3217] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(271), 2,
      sym_lowercase_identifier,
      anon_sym_DOT,
  [3225] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(273), 2,
      sym__start_mark,
      sym__end_mark,
  [3233] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(69), 2,
      sym_lowercase_identifier,
      anon_sym_DOT,
  [3241] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(269), 2,
      sym__start_mark,
      sym__end_mark,
  [3249] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(263), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [3257] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(275), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [3265] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(275), 2,
      sym__start_mark,
      sym__end_mark,
  [3273] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(277), 1,
      anon_sym_DOT,
  [3280] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(279), 1,
      sym__end_mark,
  [3287] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(281), 1,
      sym__end_mark,
  [3294] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
  [3301] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [3308] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(287), 1,
      anon_sym_DOT,
  [3315] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
  [3322] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(291), 1,
      sym__end_mark,
  [3329] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(293), 1,
      anon_sym_DOT,
  [3336] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(295), 1,
      anon_sym_DOT,
  [3343] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(297), 1,
      anon_sym_DOT,
  [3350] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(200), 1,
      anon_sym_DOT,
  [3357] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(299), 1,
      anon_sym_DOT,
  [3364] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(301), 1,
      anon_sym_DOT,
  [3371] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(303), 1,
      sym__end_mark,
  [3378] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(305), 1,
      anon_sym_DOT,
  [3385] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(307), 1,
      sym__end_mark,
  [3392] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(309), 1,
      anon_sym_DOT,
  [3399] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(311), 1,
      sym__end_mark,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 179,
  [SMALL_STATE(6)] = 236,
  [SMALL_STATE(7)] = 293,
  [SMALL_STATE(8)] = 350,
  [SMALL_STATE(9)] = 411,
  [SMALL_STATE(10)] = 468,
  [SMALL_STATE(11)] = 513,
  [SMALL_STATE(12)] = 570,
  [SMALL_STATE(13)] = 625,
  [SMALL_STATE(14)] = 680,
  [SMALL_STATE(15)] = 735,
  [SMALL_STATE(16)] = 790,
  [SMALL_STATE(17)] = 845,
  [SMALL_STATE(18)] = 900,
  [SMALL_STATE(19)] = 955,
  [SMALL_STATE(20)] = 998,
  [SMALL_STATE(21)] = 1053,
  [SMALL_STATE(22)] = 1108,
  [SMALL_STATE(23)] = 1160,
  [SMALL_STATE(24)] = 1212,
  [SMALL_STATE(25)] = 1264,
  [SMALL_STATE(26)] = 1316,
  [SMALL_STATE(27)] = 1362,
  [SMALL_STATE(28)] = 1408,
  [SMALL_STATE(29)] = 1454,
  [SMALL_STATE(30)] = 1500,
  [SMALL_STATE(31)] = 1546,
  [SMALL_STATE(32)] = 1592,
  [SMALL_STATE(33)] = 1638,
  [SMALL_STATE(34)] = 1684,
  [SMALL_STATE(35)] = 1730,
  [SMALL_STATE(36)] = 1776,
  [SMALL_STATE(37)] = 1797,
  [SMALL_STATE(38)] = 1818,
  [SMALL_STATE(39)] = 1839,
  [SMALL_STATE(40)] = 1874,
  [SMALL_STATE(41)] = 1892,
  [SMALL_STATE(42)] = 1910,
  [SMALL_STATE(43)] = 1928,
  [SMALL_STATE(44)] = 1946,
  [SMALL_STATE(45)] = 1964,
  [SMALL_STATE(46)] = 1982,
  [SMALL_STATE(47)] = 2001,
  [SMALL_STATE(48)] = 2020,
  [SMALL_STATE(49)] = 2039,
  [SMALL_STATE(50)] = 2055,
  [SMALL_STATE(51)] = 2071,
  [SMALL_STATE(52)] = 2091,
  [SMALL_STATE(53)] = 2107,
  [SMALL_STATE(54)] = 2127,
  [SMALL_STATE(55)] = 2143,
  [SMALL_STATE(56)] = 2159,
  [SMALL_STATE(57)] = 2179,
  [SMALL_STATE(58)] = 2207,
  [SMALL_STATE(59)] = 2223,
  [SMALL_STATE(60)] = 2239,
  [SMALL_STATE(61)] = 2255,
  [SMALL_STATE(62)] = 2275,
  [SMALL_STATE(63)] = 2295,
  [SMALL_STATE(64)] = 2315,
  [SMALL_STATE(65)] = 2340,
  [SMALL_STATE(66)] = 2365,
  [SMALL_STATE(67)] = 2390,
  [SMALL_STATE(68)] = 2415,
  [SMALL_STATE(69)] = 2438,
  [SMALL_STATE(70)] = 2463,
  [SMALL_STATE(71)] = 2480,
  [SMALL_STATE(72)] = 2505,
  [SMALL_STATE(73)] = 2530,
  [SMALL_STATE(74)] = 2547,
  [SMALL_STATE(75)] = 2561,
  [SMALL_STATE(76)] = 2577,
  [SMALL_STATE(77)] = 2597,
  [SMALL_STATE(78)] = 2611,
  [SMALL_STATE(79)] = 2625,
  [SMALL_STATE(80)] = 2641,
  [SMALL_STATE(81)] = 2654,
  [SMALL_STATE(82)] = 2671,
  [SMALL_STATE(83)] = 2688,
  [SMALL_STATE(84)] = 2707,
  [SMALL_STATE(85)] = 2724,
  [SMALL_STATE(86)] = 2735,
  [SMALL_STATE(87)] = 2748,
  [SMALL_STATE(88)] = 2761,
  [SMALL_STATE(89)] = 2774,
  [SMALL_STATE(90)] = 2789,
  [SMALL_STATE(91)] = 2808,
  [SMALL_STATE(92)] = 2823,
  [SMALL_STATE(93)] = 2836,
  [SMALL_STATE(94)] = 2849,
  [SMALL_STATE(95)] = 2868,
  [SMALL_STATE(96)] = 2880,
  [SMALL_STATE(97)] = 2892,
  [SMALL_STATE(98)] = 2904,
  [SMALL_STATE(99)] = 2920,
  [SMALL_STATE(100)] = 2932,
  [SMALL_STATE(101)] = 2948,
  [SMALL_STATE(102)] = 2960,
  [SMALL_STATE(103)] = 2976,
  [SMALL_STATE(104)] = 2990,
  [SMALL_STATE(105)] = 3000,
  [SMALL_STATE(106)] = 3010,
  [SMALL_STATE(107)] = 3020,
  [SMALL_STATE(108)] = 3036,
  [SMALL_STATE(109)] = 3052,
  [SMALL_STATE(110)] = 3061,
  [SMALL_STATE(111)] = 3070,
  [SMALL_STATE(112)] = 3083,
  [SMALL_STATE(113)] = 3096,
  [SMALL_STATE(114)] = 3109,
  [SMALL_STATE(115)] = 3122,
  [SMALL_STATE(116)] = 3135,
  [SMALL_STATE(117)] = 3148,
  [SMALL_STATE(118)] = 3161,
  [SMALL_STATE(119)] = 3169,
  [SMALL_STATE(120)] = 3177,
  [SMALL_STATE(121)] = 3185,
  [SMALL_STATE(122)] = 3193,
  [SMALL_STATE(123)] = 3201,
  [SMALL_STATE(124)] = 3209,
  [SMALL_STATE(125)] = 3217,
  [SMALL_STATE(126)] = 3225,
  [SMALL_STATE(127)] = 3233,
  [SMALL_STATE(128)] = 3241,
  [SMALL_STATE(129)] = 3249,
  [SMALL_STATE(130)] = 3257,
  [SMALL_STATE(131)] = 3265,
  [SMALL_STATE(132)] = 3273,
  [SMALL_STATE(133)] = 3280,
  [SMALL_STATE(134)] = 3287,
  [SMALL_STATE(135)] = 3294,
  [SMALL_STATE(136)] = 3301,
  [SMALL_STATE(137)] = 3308,
  [SMALL_STATE(138)] = 3315,
  [SMALL_STATE(139)] = 3322,
  [SMALL_STATE(140)] = 3329,
  [SMALL_STATE(141)] = 3336,
  [SMALL_STATE(142)] = 3343,
  [SMALL_STATE(143)] = 3350,
  [SMALL_STATE(144)] = 3357,
  [SMALL_STATE(145)] = 3364,
  [SMALL_STATE(146)] = 3371,
  [SMALL_STATE(147)] = 3378,
  [SMALL_STATE(148)] = 3385,
  [SMALL_STATE(149)] = 3392,
  [SMALL_STATE(150)] = 3399,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_lazy, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_infix, 4, .production_id = 17),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_forall, 4, .production_id = 16),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_infix, 3, .production_id = 14),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_lazy, 3, .production_id = 12),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_apply, 2, .production_id = 10),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_apply, 2, .production_id = 10),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_tuple_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variable, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regular_identifier, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uppercase_qualified_identifier, 1, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_qualified_identifier, 1, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uppercase_qualified_identifier, 3, .production_id = 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_qualified_identifier, 3, .production_id = 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_constructor, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_unit, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_unit, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tuple, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tuple, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parens, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parens, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_operator, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_operator, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_operator, 3, .production_id = 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_operator, 3, .production_id = 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_operator, 1, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_operator, 1, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(39),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, .production_id = 8), SHIFT_REPEAT(101),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_use_statement_repeat1, 2, .production_id = 8), SHIFT_REPEAT(101),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_use_statement_repeat1, 2, .production_id = 8), SHIFT_REPEAT(95),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2, .production_id = 8),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ability, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_ability, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_identifier, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ability, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_ability, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 5),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(110),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_definition_repeat1, 2, .production_id = 6),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 1, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1, .production_id = 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 1, .production_id = 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_use_statement_repeat1, 1, .production_id = 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_tuple_repeat1, 2), SHIFT_REPEAT(29),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_forall_repeat1, 2, .production_id = 13), SHIFT_REPEAT(127),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_forall_repeat1, 2, .production_id = 13),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_definition_repeat1, 1, .production_id = 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 6, .production_id = 15),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, .production_id = 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 5, .production_id = 11),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_forall_repeat1, 1, .production_id = 9),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5, .production_id = 7),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [285] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
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
