#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_forall = 10,
  anon_sym_SQUOTE = 11,
  anon_sym_COMMA = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  sym__start_mark = 15,
  sym__end_mark = 16,
  sym__newline = 17,
  sym_source_file = 18,
  sym__toplevel = 19,
  sym_identifier = 20,
  sym_qualified_identifier = 21,
  sym_uppercase_qualified_identifier = 22,
  sym_qualified_operator = 23,
  sym_use_statement = 24,
  sym_declaration = 25,
  sym_type_variable = 26,
  sym_type_constructor = 27,
  sym_type_unit = 28,
  sym_type_operator = 29,
  sym_type = 30,
  sym_forall_type = 31,
  aux_sym__type1 = 32,
  sym__type_or_tuple_contents = 33,
  sym__type2 = 34,
  sym_ability = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_qualified_identifier_repeat1 = 37,
  aux_sym_use_statement_repeat1 = 38,
  aux_sym_forall_type_repeat1 = 39,
  aux_sym__type_or_tuple_contents_repeat1 = 40,
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
  [anon_sym_forall] = "forall",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__start_mark] = "_start_mark",
  [sym__end_mark] = "_end_mark",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym__toplevel] = "_toplevel",
  [sym_identifier] = "identifier",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_uppercase_qualified_identifier] = "uppercase_qualified_identifier",
  [sym_qualified_operator] = "qualified_operator",
  [sym_use_statement] = "use_statement",
  [sym_declaration] = "declaration",
  [sym_type_variable] = "type_variable",
  [sym_type_constructor] = "type_constructor",
  [sym_type_unit] = "type_unit",
  [sym_type_operator] = "type_operator",
  [sym_type] = "type",
  [sym_forall_type] = "forall_type",
  [aux_sym__type1] = "_type1",
  [sym__type_or_tuple_contents] = "_type_or_tuple_contents",
  [sym__type2] = "_type2",
  [sym_ability] = "ability",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_qualified_identifier_repeat1] = "qualified_identifier_repeat1",
  [aux_sym_use_statement_repeat1] = "use_statement_repeat1",
  [aux_sym_forall_type_repeat1] = "forall_type_repeat1",
  [aux_sym__type_or_tuple_contents_repeat1] = "_type_or_tuple_contents_repeat1",
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
  [anon_sym_forall] = anon_sym_forall,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__start_mark] = sym__start_mark,
  [sym__end_mark] = sym__end_mark,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym__toplevel] = sym__toplevel,
  [sym_identifier] = sym_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_uppercase_qualified_identifier] = sym_uppercase_qualified_identifier,
  [sym_qualified_operator] = sym_qualified_operator,
  [sym_use_statement] = sym_use_statement,
  [sym_declaration] = sym_declaration,
  [sym_type_variable] = sym_type_variable,
  [sym_type_constructor] = sym_type_constructor,
  [sym_type_unit] = sym_type_unit,
  [sym_type_operator] = sym_type_operator,
  [sym_type] = sym_type,
  [sym_forall_type] = sym_forall_type,
  [aux_sym__type1] = aux_sym__type1,
  [sym__type_or_tuple_contents] = sym__type_or_tuple_contents,
  [sym__type2] = sym__type2,
  [sym_ability] = sym_ability,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_qualified_identifier_repeat1] = aux_sym_qualified_identifier_repeat1,
  [aux_sym_use_statement_repeat1] = aux_sym_use_statement_repeat1,
  [aux_sym_forall_type_repeat1] = aux_sym_forall_type_repeat1,
  [aux_sym__type_or_tuple_contents_repeat1] = aux_sym__type_or_tuple_contents_repeat1,
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
  [anon_sym_forall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
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
  [sym__toplevel] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_forall_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__type1] = {
    .visible = false,
    .named = false,
  },
  [sym__type_or_tuple_contents] = {
    .visible = false,
    .named = true,
  },
  [sym__type2] = {
    .visible = false,
    .named = true,
  },
  [sym_ability] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_forall_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__type_or_tuple_contents_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_operator = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_operator] = "operator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 1},
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 6,
  [16] = 8,
  [17] = 17,
  [18] = 13,
  [19] = 17,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 28,
  [34] = 29,
  [35] = 25,
  [36] = 27,
  [37] = 24,
  [38] = 30,
  [39] = 26,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 41,
  [51] = 42,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 52,
  [56] = 53,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 62,
  [66] = 66,
  [67] = 60,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 63,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 54,
  [77] = 77,
  [78] = 78,
  [79] = 57,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 68,
  [85] = 85,
  [86] = 69,
  [87] = 59,
  [88] = 88,
  [89] = 77,
  [90] = 66,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 78,
  [95] = 85,
  [96] = 88,
  [97] = 72,
  [98] = 91,
  [99] = 73,
  [100] = 100,
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
  return (c < 127538
    ? (c < 9989
      ? (c < 9898
        ? (c < 9748
          ? (c < 9200
            ? (c < 9193
              ? (c >= 8986 && c <= 8987)
              : c <= 9196)
            : (c <= 9200 || (c < 9725
              ? c == 9203
              : c <= 9726)))
          : (c <= 9749 || (c < 9875
            ? (c < 9855
              ? (c >= 9800 && c <= 9811)
              : c <= 9855)
            : (c <= 9875 || c == 9889))))
        : (c <= 9899 || (c < 9962
          ? (c < 9934
            ? (c < 9924
              ? (c >= 9917 && c <= 9918)
              : c <= 9925)
            : (c <= 9934 || c == 9940))
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

static inline bool sym_uppercase_identifier_character_set_3(int32_t c) {
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
  return (c < 127538
    ? (c < 9989
      ? (c < 9889
        ? (c < 9725
          ? (c < 9193
            ? (c < 8986
              ? (c >= 'a' && c <= 'z')
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

static inline bool sym_lowercase_identifier_character_set_2(int32_t c) {
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
    ? (c < '-'
      ? (c < '$'
        ? c == '!'
        : c <= '+')
      : (c <= '/' || c == ':'))
    : (c <= '>' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static inline bool sym_operator_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(8);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(24);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (sym_uppercase_identifier_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == '{') ADVANCE(36);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(9);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 'u') ADVANCE(22);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(24);
      if (sym_regular_identifier_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (sym_operator_character_set_2(lookahead)) ADVANCE(24);
      if (sym_regular_identifier_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (sym_operator_character_set_2(lookahead)) ADVANCE(24);
      if (sym_uppercase_identifier_character_set_1(lookahead)) ADVANCE(9);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '.') ADVANCE(26);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(24);
      if (sym_regular_identifier_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(28);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(15);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'a') ADVANCE(12);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'l') ADVANCE(33);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'l') ADVANCE(11);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'o') ADVANCE(14);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (lookahead == 'r') ADVANCE(10);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 'a') ADVANCE(19);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 'e') ADVANCE(27);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 'l') ADVANCE(32);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 'l') ADVANCE(18);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 'o') ADVANCE(21);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 'r') ADVANCE(16);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 's') ADVANCE(17);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_operator);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(23);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(24);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_forall);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(23);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_forall);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(15);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
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
  [6] = {.lex_state = 2, .external_lex_state = 3},
  [7] = {.lex_state = 1, .external_lex_state = 3},
  [8] = {.lex_state = 2, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 1, .external_lex_state = 3},
  [12] = {.lex_state = 1, .external_lex_state = 3},
  [13] = {.lex_state = 2, .external_lex_state = 3},
  [14] = {.lex_state = 1, .external_lex_state = 3},
  [15] = {.lex_state = 2, .external_lex_state = 4},
  [16] = {.lex_state = 2, .external_lex_state = 4},
  [17] = {.lex_state = 2, .external_lex_state = 3},
  [18] = {.lex_state = 2, .external_lex_state = 4},
  [19] = {.lex_state = 2, .external_lex_state = 3},
  [20] = {.lex_state = 2, .external_lex_state = 3},
  [21] = {.lex_state = 2, .external_lex_state = 3},
  [22] = {.lex_state = 2, .external_lex_state = 3},
  [23] = {.lex_state = 2, .external_lex_state = 3},
  [24] = {.lex_state = 2, .external_lex_state = 3},
  [25] = {.lex_state = 2, .external_lex_state = 3},
  [26] = {.lex_state = 2, .external_lex_state = 3},
  [27] = {.lex_state = 2, .external_lex_state = 3},
  [28] = {.lex_state = 2, .external_lex_state = 3},
  [29] = {.lex_state = 2, .external_lex_state = 3},
  [30] = {.lex_state = 2, .external_lex_state = 3},
  [31] = {.lex_state = 1, .external_lex_state = 3},
  [32] = {.lex_state = 1, .external_lex_state = 3},
  [33] = {.lex_state = 2, .external_lex_state = 4},
  [34] = {.lex_state = 2, .external_lex_state = 4},
  [35] = {.lex_state = 2, .external_lex_state = 4},
  [36] = {.lex_state = 2, .external_lex_state = 4},
  [37] = {.lex_state = 2, .external_lex_state = 4},
  [38] = {.lex_state = 2, .external_lex_state = 4},
  [39] = {.lex_state = 2, .external_lex_state = 4},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 1, .external_lex_state = 3},
  [42] = {.lex_state = 1, .external_lex_state = 3},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 3, .external_lex_state = 3},
  [45] = {.lex_state = 2, .external_lex_state = 3},
  [46] = {.lex_state = 4, .external_lex_state = 4},
  [47] = {.lex_state = 4, .external_lex_state = 3},
  [48] = {.lex_state = 4, .external_lex_state = 4},
  [49] = {.lex_state = 4, .external_lex_state = 4},
  [50] = {.lex_state = 2, .external_lex_state = 3},
  [51] = {.lex_state = 2, .external_lex_state = 3},
  [52] = {.lex_state = 4, .external_lex_state = 3},
  [53] = {.lex_state = 5, .external_lex_state = 3},
  [54] = {.lex_state = 5, .external_lex_state = 3},
  [55] = {.lex_state = 4, .external_lex_state = 3},
  [56] = {.lex_state = 5, .external_lex_state = 3},
  [57] = {.lex_state = 6, .external_lex_state = 4},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 4, .external_lex_state = 4},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 5, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 4, .external_lex_state = 4},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 5, .external_lex_state = 3},
  [69] = {.lex_state = 4, .external_lex_state = 4},
  [70] = {.lex_state = 7, .external_lex_state = 3},
  [71] = {.lex_state = 5, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 7, .external_lex_state = 3},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 4, .external_lex_state = 3},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 7, .external_lex_state = 3},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 7, .external_lex_state = 3},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 4, .external_lex_state = 3},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 7, .external_lex_state = 3},
  [87] = {.lex_state = 7, .external_lex_state = 3},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 4},
  [90] = {.lex_state = 7, .external_lex_state = 3},
  [91] = {.lex_state = 7, .external_lex_state = 3},
  [92] = {.lex_state = 7, .external_lex_state = 3},
  [93] = {.lex_state = 0, .external_lex_state = 4},
  [94] = {.lex_state = 0, .external_lex_state = 4},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 4},
  [98] = {.lex_state = 7, .external_lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 3},
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
    [anon_sym_forall] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__start_mark] = ACTIONS(1),
    [sym__end_mark] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(100),
    [sym__toplevel] = STATE(40),
    [sym_use_statement] = STATE(40),
    [sym_declaration] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__start_mark] = ACTIONS(7),
    [sym__newline] = ACTIONS(3),
  },
  [2] = {
    [sym_uppercase_qualified_identifier] = STATE(28),
    [sym_qualified_operator] = STATE(95),
    [sym_type_variable] = STATE(6),
    [sym_type_constructor] = STATE(6),
    [sym_type_unit] = STATE(6),
    [sym_type_operator] = STATE(6),
    [sym_type] = STATE(75),
    [sym_forall_type] = STATE(20),
    [aux_sym__type1] = STATE(6),
    [sym__type_or_tuple_contents] = STATE(96),
    [sym__type2] = STATE(78),
    [aux_sym_qualified_identifier_repeat1] = STATE(56),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_forall] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym__newline] = ACTIONS(3),
  },
  [3] = {
    [sym_uppercase_qualified_identifier] = STATE(28),
    [sym_qualified_operator] = STATE(85),
    [sym_type_variable] = STATE(6),
    [sym_type_constructor] = STATE(6),
    [sym_type_unit] = STATE(6),
    [sym_type_operator] = STATE(6),
    [sym_type] = STATE(75),
    [sym_forall_type] = STATE(20),
    [aux_sym__type1] = STATE(6),
    [sym__type_or_tuple_contents] = STATE(88),
    [sym__type2] = STATE(78),
    [aux_sym_qualified_identifier_repeat1] = STATE(56),
    [sym_uppercase_identifier] = ACTIONS(9),
    [sym_lowercase_identifier] = ACTIONS(11),
    [sym_regular_identifier] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_forall] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
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
      sym_regular_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_ability,
    STATE(20), 1,
      sym_forall_type,
    STATE(28), 1,
      sym_uppercase_qualified_identifier,
    STATE(63), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(73), 1,
      sym_type,
    STATE(78), 1,
      sym__type2,
    STATE(6), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [50] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_uppercase_identifier,
    ACTIONS(31), 1,
      sym_lowercase_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym_ability,
    STATE(21), 1,
      sym_forall_type,
    STATE(33), 1,
      sym_uppercase_qualified_identifier,
    STATE(71), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(94), 1,
      sym__type2,
    STATE(99), 1,
      sym_type,
    STATE(15), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [100] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(15), 1,
      sym_operator,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      sym_qualified_operator,
    STATE(28), 1,
      sym_uppercase_qualified_identifier,
    STATE(56), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(37), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(8), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [143] = 13,
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
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      sym_forall_type,
    STATE(28), 1,
      sym_uppercase_qualified_identifier,
    STATE(63), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(67), 1,
      sym_type,
    STATE(78), 1,
      sym__type2,
    STATE(6), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [187] = 10,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(39), 1,
      sym_uppercase_identifier,
    ACTIONS(42), 1,
      sym_lowercase_identifier,
    ACTIONS(45), 1,
      sym_regular_identifier,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_uppercase_qualified_identifier,
    STATE(63), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(48), 4,
      sym_operator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(8), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [225] = 13,
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
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      sym_forall_type,
    STATE(28), 1,
      sym_uppercase_qualified_identifier,
    STATE(61), 1,
      sym_type,
    STATE(63), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(78), 1,
      sym__type2,
    STATE(6), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [269] = 13,
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
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      sym_forall_type,
    STATE(28), 1,
      sym_uppercase_qualified_identifier,
    STATE(60), 1,
      sym_type,
    STATE(63), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(78), 1,
      sym__type2,
    STATE(6), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [313] = 13,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(29), 1,
      sym_uppercase_identifier,
    ACTIONS(31), 1,
      sym_lowercase_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_forall_type,
    STATE(33), 1,
      sym_uppercase_qualified_identifier,
    STATE(71), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(93), 1,
      sym_type,
    STATE(94), 1,
      sym__type2,
    STATE(15), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [357] = 13,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(21), 1,
      anon_sym_forall,
    ACTIONS(29), 1,
      sym_uppercase_identifier,
    ACTIONS(31), 1,
      sym_lowercase_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_forall_type,
    STATE(33), 1,
      sym_uppercase_qualified_identifier,
    STATE(71), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(94), 1,
      sym__type2,
    STATE(97), 1,
      sym_type,
    STATE(15), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [401] = 10,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(56), 1,
      sym_uppercase_identifier,
    ACTIONS(59), 1,
      sym_lowercase_identifier,
    ACTIONS(62), 1,
      sym_regular_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_uppercase_qualified_identifier,
    STATE(63), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(65), 4,
      sym_operator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(8), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [439] = 13,
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
      anon_sym_forall,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      sym_forall_type,
    STATE(28), 1,
      sym_uppercase_qualified_identifier,
    STATE(63), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(72), 1,
      sym_type,
    STATE(78), 1,
      sym__type2,
    STATE(6), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [483] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(15), 1,
      sym_operator,
    ACTIONS(29), 1,
      sym_uppercase_identifier,
    ACTIONS(31), 1,
      sym_lowercase_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__end_mark,
    STATE(5), 1,
      sym_qualified_operator,
    STATE(33), 1,
      sym_uppercase_qualified_identifier,
    STATE(53), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(16), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [524] = 10,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(45), 1,
      sym_regular_identifier,
    ACTIONS(73), 1,
      sym_uppercase_identifier,
    ACTIONS(76), 1,
      sym_lowercase_identifier,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym_uppercase_qualified_identifier,
    STATE(71), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(48), 2,
      sym__end_mark,
      sym_operator,
    STATE(16), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [560] = 11,
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
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_ability,
    STATE(28), 1,
      sym_uppercase_qualified_identifier,
    STATE(63), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(8), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [598] = 10,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(62), 1,
      sym_regular_identifier,
    ACTIONS(87), 1,
      sym_uppercase_identifier,
    ACTIONS(90), 1,
      sym_lowercase_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym_uppercase_qualified_identifier,
    STATE(71), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(65), 2,
      sym__end_mark,
      sym_operator,
    STATE(16), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [634] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(29), 1,
      sym_uppercase_identifier,
    ACTIONS(31), 1,
      sym_lowercase_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_ability,
    STATE(33), 1,
      sym_uppercase_qualified_identifier,
    STATE(71), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(16), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [672] = 10,
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
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_uppercase_qualified_identifier,
    STATE(63), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(77), 1,
      sym__type2,
    STATE(6), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [707] = 10,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(29), 1,
      sym_uppercase_identifier,
    ACTIONS(31), 1,
      sym_lowercase_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym_uppercase_qualified_identifier,
    STATE(71), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(89), 1,
      sym__type2,
    STATE(15), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [742] = 9,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(29), 1,
      sym_uppercase_identifier,
    ACTIONS(31), 1,
      sym_lowercase_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym_uppercase_qualified_identifier,
    STATE(71), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(18), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [774] = 9,
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
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_uppercase_qualified_identifier,
    STATE(63), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(13), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [806] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(101), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(99), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [823] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(105), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(103), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [840] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(107), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(65), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [857] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(111), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(109), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [874] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(115), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(113), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [891] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(119), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(117), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [908] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(123), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(121), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [925] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(127), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(125), 5,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [941] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(131), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
    ACTIONS(129), 5,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [957] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(115), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(113), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [972] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(119), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(117), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [987] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(105), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(103), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [1002] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(111), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(109), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [1017] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(101), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(99), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [1032] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(123), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(121), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [1047] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(107), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(65), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [1062] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      sym__start_mark,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(43), 4,
      sym__toplevel,
      sym_use_statement,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [1078] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(135), 3,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
    ACTIONS(137), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
  [1092] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(139), 3,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
    ACTIONS(141), 3,
      sym_lowercase_identifier,
      sym_regular_identifier,
      anon_sym_forall,
  [1106] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      sym__start_mark,
    STATE(43), 4,
      sym__toplevel,
      sym_use_statement,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [1122] = 7,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(148), 1,
      sym_regular_identifier,
    ACTIONS(150), 1,
      sym_operator,
    ACTIONS(152), 1,
      anon_sym_use,
    STATE(52), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(90), 1,
      sym_identifier,
    STATE(92), 1,
      sym_qualified_identifier,
  [1144] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(156), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(154), 3,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [1157] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(161), 1,
      sym__end_mark,
    ACTIONS(158), 2,
      sym_regular_identifier,
      sym_operator,
    STATE(46), 2,
      sym_identifier,
      aux_sym_use_statement_repeat1,
  [1172] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(163), 1,
      sym_regular_identifier,
    ACTIONS(165), 1,
      sym_operator,
    STATE(48), 1,
      sym_qualified_identifier,
    STATE(55), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(66), 1,
      sym_identifier,
  [1191] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(167), 1,
      sym__end_mark,
    ACTIONS(165), 2,
      sym_regular_identifier,
      sym_operator,
    STATE(49), 2,
      sym_identifier,
      aux_sym_use_statement_repeat1,
  [1206] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(169), 1,
      sym__end_mark,
    ACTIONS(165), 2,
      sym_regular_identifier,
      sym_operator,
    STATE(46), 2,
      sym_identifier,
      aux_sym_use_statement_repeat1,
  [1221] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(137), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(135), 3,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [1234] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(141), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(139), 3,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [1247] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(150), 1,
      sym_operator,
    ACTIONS(171), 1,
      sym_regular_identifier,
    STATE(76), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(86), 1,
      sym_identifier,
  [1263] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(173), 1,
      sym_uppercase_identifier,
    ACTIONS(175), 1,
      sym_operator,
    STATE(54), 1,
      aux_sym_qualified_identifier_repeat1,
  [1279] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(179), 1,
      sym_regular_identifier,
    STATE(54), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(177), 2,
      sym_uppercase_identifier,
      sym_operator,
  [1293] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(163), 1,
      sym_regular_identifier,
    ACTIONS(165), 1,
      sym_operator,
    STATE(69), 1,
      sym_identifier,
    STATE(76), 1,
      aux_sym_qualified_identifier_repeat1,
  [1309] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(175), 1,
      sym_operator,
    ACTIONS(182), 1,
      sym_uppercase_identifier,
    STATE(54), 1,
      aux_sym_qualified_identifier_repeat1,
  [1325] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(186), 1,
      sym_operator,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(184), 2,
      sym__end_mark,
      sym_regular_identifier,
  [1339] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym__type_or_tuple_contents_repeat1,
    ACTIONS(190), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1353] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(184), 3,
      sym__end_mark,
      sym_regular_identifier,
      sym_operator,
  [1362] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym__type_or_tuple_contents_repeat1,
  [1375] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(190), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1384] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym__type_or_tuple_contents_repeat1,
  [1397] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(182), 1,
      sym_uppercase_identifier,
    STATE(54), 1,
      aux_sym_qualified_identifier_repeat1,
  [1410] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym__type_or_tuple_contents_repeat1,
  [1423] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym__type_or_tuple_contents_repeat1,
  [1436] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(205), 3,
      sym__end_mark,
      sym_regular_identifier,
      sym_operator,
  [1445] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym__type_or_tuple_contents_repeat1,
  [1458] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(209), 1,
      sym_regular_identifier,
    ACTIONS(177), 2,
      sym_uppercase_identifier,
      sym_operator,
  [1469] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(211), 3,
      sym__end_mark,
      sym_regular_identifier,
      sym_operator,
  [1478] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(213), 1,
      sym_lowercase_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    STATE(70), 1,
      aux_sym_forall_type_repeat1,
  [1491] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(173), 1,
      sym_uppercase_identifier,
    STATE(54), 1,
      aux_sym_qualified_identifier_repeat1,
  [1504] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(218), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1513] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(220), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1522] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(222), 1,
      sym_lowercase_identifier,
    ACTIONS(224), 1,
      anon_sym_DOT,
    STATE(70), 1,
      aux_sym_forall_type_repeat1,
  [1535] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym__type_or_tuple_contents_repeat1,
  [1548] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(177), 1,
      sym_operator,
    ACTIONS(228), 1,
      sym_regular_identifier,
    STATE(76), 1,
      aux_sym_qualified_identifier_repeat1,
  [1561] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(231), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1570] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(233), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1579] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(184), 1,
      anon_sym_COLON,
    ACTIONS(235), 1,
      anon_sym_DOT,
  [1589] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(237), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [1597] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(239), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [1605] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(241), 1,
      sym_lowercase_identifier,
    STATE(74), 1,
      aux_sym_forall_type_repeat1,
  [1615] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(243), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [1623] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(177), 2,
      sym_regular_identifier,
      sym_operator,
  [1631] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
  [1638] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(211), 1,
      anon_sym_COLON,
  [1645] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [1652] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
  [1659] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(231), 1,
      sym__end_mark,
  [1666] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(205), 1,
      anon_sym_COLON,
  [1673] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(235), 1,
      anon_sym_DOT,
  [1680] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(249), 1,
      anon_sym_COLON,
  [1687] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(251), 1,
      sym__end_mark,
  [1694] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(233), 1,
      sym__end_mark,
  [1701] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
  [1708] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
  [1715] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(218), 1,
      sym__end_mark,
  [1722] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(257), 1,
      anon_sym_DOT,
  [1729] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(220), 1,
      sym__end_mark,
  [1736] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 187,
  [SMALL_STATE(9)] = 225,
  [SMALL_STATE(10)] = 269,
  [SMALL_STATE(11)] = 313,
  [SMALL_STATE(12)] = 357,
  [SMALL_STATE(13)] = 401,
  [SMALL_STATE(14)] = 439,
  [SMALL_STATE(15)] = 483,
  [SMALL_STATE(16)] = 524,
  [SMALL_STATE(17)] = 560,
  [SMALL_STATE(18)] = 598,
  [SMALL_STATE(19)] = 634,
  [SMALL_STATE(20)] = 672,
  [SMALL_STATE(21)] = 707,
  [SMALL_STATE(22)] = 742,
  [SMALL_STATE(23)] = 774,
  [SMALL_STATE(24)] = 806,
  [SMALL_STATE(25)] = 823,
  [SMALL_STATE(26)] = 840,
  [SMALL_STATE(27)] = 857,
  [SMALL_STATE(28)] = 874,
  [SMALL_STATE(29)] = 891,
  [SMALL_STATE(30)] = 908,
  [SMALL_STATE(31)] = 925,
  [SMALL_STATE(32)] = 941,
  [SMALL_STATE(33)] = 957,
  [SMALL_STATE(34)] = 972,
  [SMALL_STATE(35)] = 987,
  [SMALL_STATE(36)] = 1002,
  [SMALL_STATE(37)] = 1017,
  [SMALL_STATE(38)] = 1032,
  [SMALL_STATE(39)] = 1047,
  [SMALL_STATE(40)] = 1062,
  [SMALL_STATE(41)] = 1078,
  [SMALL_STATE(42)] = 1092,
  [SMALL_STATE(43)] = 1106,
  [SMALL_STATE(44)] = 1122,
  [SMALL_STATE(45)] = 1144,
  [SMALL_STATE(46)] = 1157,
  [SMALL_STATE(47)] = 1172,
  [SMALL_STATE(48)] = 1191,
  [SMALL_STATE(49)] = 1206,
  [SMALL_STATE(50)] = 1221,
  [SMALL_STATE(51)] = 1234,
  [SMALL_STATE(52)] = 1247,
  [SMALL_STATE(53)] = 1263,
  [SMALL_STATE(54)] = 1279,
  [SMALL_STATE(55)] = 1293,
  [SMALL_STATE(56)] = 1309,
  [SMALL_STATE(57)] = 1325,
  [SMALL_STATE(58)] = 1339,
  [SMALL_STATE(59)] = 1353,
  [SMALL_STATE(60)] = 1362,
  [SMALL_STATE(61)] = 1375,
  [SMALL_STATE(62)] = 1384,
  [SMALL_STATE(63)] = 1397,
  [SMALL_STATE(64)] = 1410,
  [SMALL_STATE(65)] = 1423,
  [SMALL_STATE(66)] = 1436,
  [SMALL_STATE(67)] = 1445,
  [SMALL_STATE(68)] = 1458,
  [SMALL_STATE(69)] = 1469,
  [SMALL_STATE(70)] = 1478,
  [SMALL_STATE(71)] = 1491,
  [SMALL_STATE(72)] = 1504,
  [SMALL_STATE(73)] = 1513,
  [SMALL_STATE(74)] = 1522,
  [SMALL_STATE(75)] = 1535,
  [SMALL_STATE(76)] = 1548,
  [SMALL_STATE(77)] = 1561,
  [SMALL_STATE(78)] = 1570,
  [SMALL_STATE(79)] = 1579,
  [SMALL_STATE(80)] = 1589,
  [SMALL_STATE(81)] = 1597,
  [SMALL_STATE(82)] = 1605,
  [SMALL_STATE(83)] = 1615,
  [SMALL_STATE(84)] = 1623,
  [SMALL_STATE(85)] = 1631,
  [SMALL_STATE(86)] = 1638,
  [SMALL_STATE(87)] = 1645,
  [SMALL_STATE(88)] = 1652,
  [SMALL_STATE(89)] = 1659,
  [SMALL_STATE(90)] = 1666,
  [SMALL_STATE(91)] = 1673,
  [SMALL_STATE(92)] = 1680,
  [SMALL_STATE(93)] = 1687,
  [SMALL_STATE(94)] = 1694,
  [SMALL_STATE(95)] = 1701,
  [SMALL_STATE(96)] = 1708,
  [SMALL_STATE(97)] = 1715,
  [SMALL_STATE(98)] = 1722,
  [SMALL_STATE(99)] = 1729,
  [SMALL_STATE(100)] = 1736,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type2, 1),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(25),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(27),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(98),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(17),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(25),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(27),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(98),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type1, 3),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(17),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(35),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(36),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(3),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(35),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(36),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(3),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(19),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_qualified_identifier, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uppercase_qualified_identifier, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_qualified_identifier, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uppercase_qualified_identifier, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type1, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variable, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_constructor, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_unit, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_unit, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_operator, 3, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_operator, 3, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_operator, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_operator, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_operator, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_operator, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ability, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ability, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ability, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ability, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall_type, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forall_type, 3),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2), SHIFT_REPEAT(59),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(98),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_or_tuple_contents_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_or_tuple_contents_repeat1, 2), SHIFT_REPEAT(9),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_or_tuple_contents, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_forall_type_repeat1, 2), SHIFT_REPEAT(70),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_forall_type_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type2, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type2, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_or_tuple_contents, 1),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(91),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [259] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
