#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

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
  anon_sym_COMMA = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  sym__start_mark = 14,
  sym__end_mark = 15,
  sym__newline = 16,
  sym_source_file = 17,
  sym__toplevel = 18,
  sym_identifier = 19,
  sym_qualified_identifier = 20,
  sym_qualified_operator = 21,
  sym_use_statement = 22,
  sym_declaration = 23,
  sym_type_variable = 24,
  sym_type_constructor = 25,
  sym_type_unit = 26,
  sym_type_operator = 27,
  sym_type = 28,
  aux_sym__type1 = 29,
  sym__type_or_tuple_contents = 30,
  sym__type2 = 31,
  sym_ability = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_qualified_identifier_repeat1 = 34,
  aux_sym_use_statement_repeat1 = 35,
  aux_sym__type_or_tuple_contents_repeat1 = 36,
  aux_sym__type2_repeat1 = 37,
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
  [sym_qualified_operator] = "qualified_operator",
  [sym_use_statement] = "use_statement",
  [sym_declaration] = "declaration",
  [sym_type_variable] = "type_variable",
  [sym_type_constructor] = "type_constructor",
  [sym_type_unit] = "type_unit",
  [sym_type_operator] = "type_operator",
  [sym_type] = "type",
  [aux_sym__type1] = "_type1",
  [sym__type_or_tuple_contents] = "_type_or_tuple_contents",
  [sym__type2] = "_type2",
  [sym_ability] = "ability",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_qualified_identifier_repeat1] = "qualified_identifier_repeat1",
  [aux_sym_use_statement_repeat1] = "use_statement_repeat1",
  [aux_sym__type_or_tuple_contents_repeat1] = "_type_or_tuple_contents_repeat1",
  [aux_sym__type2_repeat1] = "_type2_repeat1",
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
  [sym_qualified_operator] = sym_qualified_operator,
  [sym_use_statement] = sym_use_statement,
  [sym_declaration] = sym_declaration,
  [sym_type_variable] = sym_type_variable,
  [sym_type_constructor] = sym_type_constructor,
  [sym_type_unit] = sym_type_unit,
  [sym_type_operator] = sym_type_operator,
  [sym_type] = sym_type,
  [aux_sym__type1] = aux_sym__type1,
  [sym__type_or_tuple_contents] = sym__type_or_tuple_contents,
  [sym__type2] = sym__type2,
  [sym_ability] = sym_ability,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_qualified_identifier_repeat1] = aux_sym_qualified_identifier_repeat1,
  [aux_sym_use_statement_repeat1] = aux_sym_use_statement_repeat1,
  [aux_sym__type_or_tuple_contents_repeat1] = aux_sym__type_or_tuple_contents_repeat1,
  [aux_sym__type2_repeat1] = aux_sym__type2_repeat1,
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
  [aux_sym__type_or_tuple_contents_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__type2_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 6,
  [11] = 7,
  [12] = 8,
  [13] = 9,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 19,
  [20] = 14,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 21,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 29,
  [33] = 24,
  [34] = 27,
  [35] = 25,
  [36] = 26,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 31,
  [41] = 41,
  [42] = 42,
  [43] = 30,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
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
  [68] = 68,
  [69] = 51,
  [70] = 70,
  [71] = 61,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 60,
  [76] = 76,
  [77] = 59,
  [78] = 63,
  [79] = 79,
  [80] = 72,
  [81] = 73,
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
      if (eof) ADVANCE(6);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(12);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      if (sym_uppercase_identifier_character_set_1(lookahead)) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (sym_uppercase_identifier_character_set_2(lookahead)) ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(12);
      if (sym_regular_identifier_character_set_1(lookahead)) ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 'u') ADVANCE(10);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(12);
      if (sym_regular_identifier_character_set_1(lookahead)) ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '.') ADVANCE(14);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(12);
      if (sym_regular_identifier_character_set_1(lookahead)) ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 'e') ADVANCE(15);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (lookahead == 's') ADVANCE(9);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_operator);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_uppercase_identifier_character_set_3(lookahead)) ADVANCE(11);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
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
  [5] = {.lex_state = 1, .external_lex_state = 4},
  [6] = {.lex_state = 1, .external_lex_state = 3},
  [7] = {.lex_state = 1, .external_lex_state = 3},
  [8] = {.lex_state = 1, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 4},
  [11] = {.lex_state = 1, .external_lex_state = 4},
  [12] = {.lex_state = 1, .external_lex_state = 4},
  [13] = {.lex_state = 1, .external_lex_state = 4},
  [14] = {.lex_state = 1, .external_lex_state = 3},
  [15] = {.lex_state = 1, .external_lex_state = 3},
  [16] = {.lex_state = 1, .external_lex_state = 3},
  [17] = {.lex_state = 1, .external_lex_state = 3},
  [18] = {.lex_state = 1, .external_lex_state = 3},
  [19] = {.lex_state = 1, .external_lex_state = 3},
  [20] = {.lex_state = 1, .external_lex_state = 3},
  [21] = {.lex_state = 1, .external_lex_state = 3},
  [22] = {.lex_state = 1, .external_lex_state = 3},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 1, .external_lex_state = 3},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 1, .external_lex_state = 3},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 1, .external_lex_state = 3},
  [30] = {.lex_state = 2, .external_lex_state = 3},
  [31] = {.lex_state = 2, .external_lex_state = 3},
  [32] = {.lex_state = 1, .external_lex_state = 4},
  [33] = {.lex_state = 1, .external_lex_state = 4},
  [34] = {.lex_state = 1, .external_lex_state = 4},
  [35] = {.lex_state = 1, .external_lex_state = 4},
  [36] = {.lex_state = 1, .external_lex_state = 4},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 1, .external_lex_state = 3},
  [40] = {.lex_state = 2, .external_lex_state = 4},
  [41] = {.lex_state = 3, .external_lex_state = 3},
  [42] = {.lex_state = 1, .external_lex_state = 3},
  [43] = {.lex_state = 2, .external_lex_state = 4},
  [44] = {.lex_state = 2, .external_lex_state = 4},
  [45] = {.lex_state = 2, .external_lex_state = 4},
  [46] = {.lex_state = 2, .external_lex_state = 3},
  [47] = {.lex_state = 2, .external_lex_state = 4},
  [48] = {.lex_state = 2, .external_lex_state = 3},
  [49] = {.lex_state = 2, .external_lex_state = 3},
  [50] = {.lex_state = 1, .external_lex_state = 3},
  [51] = {.lex_state = 4, .external_lex_state = 4},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 1, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 2, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 2, .external_lex_state = 4},
  [60] = {.lex_state = 2, .external_lex_state = 4},
  [61] = {.lex_state = 2, .external_lex_state = 4},
  [62] = {.lex_state = 2, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 2, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 5, .external_lex_state = 3},
  [70] = {.lex_state = 5, .external_lex_state = 3},
  [71] = {.lex_state = 5, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 5, .external_lex_state = 3},
  [75] = {.lex_state = 5, .external_lex_state = 3},
  [76] = {.lex_state = 0, .external_lex_state = 4},
  [77] = {.lex_state = 5, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 4},
  [79] = {.lex_state = 0, .external_lex_state = 3},
  [80] = {.lex_state = 0, .external_lex_state = 3},
  [81] = {.lex_state = 0, .external_lex_state = 3},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__start_mark] = ACTIONS(1),
    [sym__end_mark] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(79),
    [sym__toplevel] = STATE(37),
    [sym_use_statement] = STATE(37),
    [sym_declaration] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__start_mark] = ACTIONS(7),
    [sym__newline] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
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
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      sym_qualified_operator,
    STATE(31), 1,
      aux_sym__type2_repeat1,
    STATE(62), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(19), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(8), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [43] = 14,
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
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_type,
    STATE(62), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(63), 1,
      sym__type2,
    STATE(80), 1,
      sym_qualified_operator,
    STATE(81), 1,
      sym__type_or_tuple_contents,
    STATE(2), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [90] = 14,
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
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_type,
    STATE(62), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(63), 1,
      sym__type2,
    STATE(72), 1,
      sym_qualified_operator,
    STATE(73), 1,
      sym__type_or_tuple_contents,
    STATE(2), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [137] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_regular_identifier,
    ACTIONS(15), 1,
      sym_operator,
    ACTIONS(19), 1,
      sym__end_mark,
    ACTIONS(27), 1,
      sym_uppercase_identifier,
    ACTIONS(29), 1,
      sym_lowercase_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(16), 1,
      sym_qualified_operator,
    STATE(40), 1,
      aux_sym__type2_repeat1,
    STATE(62), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(12), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [178] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(35), 1,
      sym_uppercase_identifier,
    ACTIONS(38), 1,
      sym_lowercase_identifier,
    ACTIONS(41), 1,
      sym_regular_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 4,
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
  [210] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      sym_regular_identifier,
    ACTIONS(53), 4,
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
  [242] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(55), 1,
      sym_uppercase_identifier,
    ACTIONS(58), 1,
      sym_lowercase_identifier,
    ACTIONS(61), 1,
      sym_regular_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 4,
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
  [274] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_regular_identifier,
    ACTIONS(73), 4,
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
  [306] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(41), 1,
      sym_regular_identifier,
    ACTIONS(75), 1,
      sym_uppercase_identifier,
    ACTIONS(78), 1,
      sym_lowercase_identifier,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 2,
      sym__end_mark,
      sym_operator,
    STATE(12), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [336] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(27), 1,
      sym_uppercase_identifier,
    ACTIONS(29), 1,
      sym_lowercase_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      sym_regular_identifier,
    ACTIONS(53), 2,
      sym__end_mark,
      sym_operator,
    STATE(12), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [366] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(61), 1,
      sym_regular_identifier,
    ACTIONS(87), 1,
      sym_uppercase_identifier,
    ACTIONS(90), 1,
      sym_lowercase_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 2,
      sym__end_mark,
      sym_operator,
    STATE(12), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [396] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(27), 1,
      sym_uppercase_identifier,
    ACTIONS(29), 1,
      sym_lowercase_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_regular_identifier,
    ACTIONS(73), 2,
      sym__end_mark,
      sym_operator,
    STATE(12), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [426] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(27), 1,
      sym_uppercase_identifier,
    ACTIONS(29), 1,
      sym_lowercase_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_ability,
    STATE(12), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [455] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym_type,
    STATE(63), 1,
      sym__type2,
    STATE(2), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [484] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(27), 1,
      sym_uppercase_identifier,
    ACTIONS(29), 1,
      sym_lowercase_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_ability,
    STATE(11), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [513] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      sym_type,
    STATE(63), 1,
      sym__type2,
    STATE(2), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [542] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_ability,
    STATE(7), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [571] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(27), 1,
      sym_uppercase_identifier,
    ACTIONS(29), 1,
      sym_lowercase_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(76), 1,
      sym_type,
    STATE(78), 1,
      sym__type2,
    STATE(5), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [600] = 8,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_ability,
    STATE(8), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [629] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    STATE(6), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [652] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      sym_uppercase_identifier,
    ACTIONS(11), 1,
      sym_lowercase_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    STATE(9), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [675] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(27), 1,
      sym_uppercase_identifier,
    ACTIONS(29), 1,
      sym_lowercase_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(13), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [698] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(41), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(43), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [715] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(103), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(101), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [732] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(107), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(105), 7,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [749] = 3,
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
  [766] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(27), 1,
      sym_uppercase_identifier,
    ACTIONS(29), 1,
      sym_lowercase_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(10), 5,
      sym_type_variable,
      sym_type_constructor,
      sym_type_unit,
      sym_type_operator,
      aux_sym__type1,
  [789] = 3,
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
  [806] = 7,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(117), 1,
      sym_regular_identifier,
    ACTIONS(120), 1,
      sym_operator,
    STATE(18), 1,
      sym_qualified_operator,
    STATE(30), 1,
      aux_sym__type2_repeat1,
    STATE(62), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(53), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [830] = 7,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(15), 1,
      sym_operator,
    ACTIONS(123), 1,
      sym_regular_identifier,
    STATE(18), 1,
      sym_qualified_operator,
    STATE(30), 1,
      aux_sym__type2_repeat1,
    STATE(62), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(125), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [854] = 3,
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
  [869] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(41), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(43), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [884] = 3,
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
  [899] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(103), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(101), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [914] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(107), 2,
      sym_lowercase_identifier,
      sym_regular_identifier,
    ACTIONS(105), 5,
      sym__end_mark,
      sym_uppercase_identifier,
      sym_operator,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [929] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      sym__start_mark,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(38), 4,
      sym__toplevel,
      sym_use_statement,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [945] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      sym__start_mark,
    STATE(38), 4,
      sym__toplevel,
      sym_use_statement,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [961] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(136), 1,
      sym_lowercase_identifier,
    ACTIONS(134), 5,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [975] = 7,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(15), 1,
      sym_operator,
    ACTIONS(123), 1,
      sym_regular_identifier,
    ACTIONS(125), 1,
      sym__end_mark,
    STATE(16), 1,
      sym_qualified_operator,
    STATE(43), 1,
      aux_sym__type2_repeat1,
    STATE(62), 1,
      aux_sym_qualified_identifier_repeat1,
  [997] = 7,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(138), 1,
      sym_regular_identifier,
    ACTIONS(140), 1,
      sym_operator,
    ACTIONS(142), 1,
      anon_sym_use,
    STATE(48), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(74), 1,
      sym_qualified_identifier,
    STATE(75), 1,
      sym_identifier,
  [1019] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(146), 1,
      sym_lowercase_identifier,
    ACTIONS(144), 5,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [1033] = 7,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(53), 1,
      sym__end_mark,
    ACTIONS(117), 1,
      sym_regular_identifier,
    ACTIONS(120), 1,
      sym_operator,
    STATE(16), 1,
      sym_qualified_operator,
    STATE(43), 1,
      aux_sym__type2_repeat1,
    STATE(62), 1,
      aux_sym_qualified_identifier_repeat1,
  [1055] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(150), 1,
      sym__end_mark,
    ACTIONS(148), 2,
      sym_regular_identifier,
      sym_operator,
    STATE(47), 2,
      sym_identifier,
      aux_sym_use_statement_repeat1,
  [1070] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(155), 1,
      sym__end_mark,
    ACTIONS(152), 2,
      sym_regular_identifier,
      sym_operator,
    STATE(45), 2,
      sym_identifier,
      aux_sym_use_statement_repeat1,
  [1085] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(148), 1,
      sym_operator,
    ACTIONS(157), 1,
      sym_regular_identifier,
    STATE(44), 1,
      sym_qualified_identifier,
    STATE(49), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(60), 1,
      sym_identifier,
  [1104] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(159), 1,
      sym__end_mark,
    ACTIONS(148), 2,
      sym_regular_identifier,
      sym_operator,
    STATE(45), 2,
      sym_identifier,
      aux_sym_use_statement_repeat1,
  [1119] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(140), 1,
      sym_operator,
    ACTIONS(161), 1,
      sym_regular_identifier,
    STATE(55), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(71), 1,
      sym_identifier,
  [1135] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(148), 1,
      sym_operator,
    ACTIONS(157), 1,
      sym_regular_identifier,
    STATE(55), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(61), 1,
      sym_identifier,
  [1151] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(165), 1,
      sym_lowercase_identifier,
    ACTIONS(163), 3,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [1163] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(169), 1,
      sym_operator,
    ACTIONS(171), 1,
      anon_sym_DOT,
    ACTIONS(167), 2,
      sym__end_mark,
      sym_regular_identifier,
  [1177] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym__type_or_tuple_contents_repeat1,
    ACTIONS(173), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1191] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(180), 1,
      sym_lowercase_identifier,
    ACTIONS(178), 3,
      sym_uppercase_identifier,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
  [1203] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym__type_or_tuple_contents_repeat1,
  [1216] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(186), 1,
      sym_regular_identifier,
    ACTIONS(189), 1,
      sym_operator,
    STATE(55), 1,
      aux_sym_qualified_identifier_repeat1,
  [1229] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym__type_or_tuple_contents_repeat1,
  [1242] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(173), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1251] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym__type_or_tuple_contents_repeat1,
  [1264] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(167), 3,
      sym__end_mark,
      sym_regular_identifier,
      sym_operator,
  [1273] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(195), 3,
      sym__end_mark,
      sym_regular_identifier,
      sym_operator,
  [1282] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(197), 3,
      sym__end_mark,
      sym_regular_identifier,
      sym_operator,
  [1291] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(123), 1,
      sym_regular_identifier,
    ACTIONS(199), 1,
      sym_operator,
    STATE(55), 1,
      aux_sym_qualified_identifier_repeat1,
  [1304] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(201), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1313] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym__type_or_tuple_contents_repeat1,
  [1326] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(205), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [1334] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(207), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [1342] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(189), 2,
      sym_regular_identifier,
      sym_operator,
  [1350] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(209), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [1358] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(211), 1,
      anon_sym_DOT,
  [1368] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(211), 1,
      anon_sym_DOT,
  [1375] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(197), 1,
      anon_sym_COLON,
  [1382] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
  [1389] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
  [1396] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(217), 1,
      anon_sym_COLON,
  [1403] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(195), 1,
      anon_sym_COLON,
  [1410] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(219), 1,
      sym__end_mark,
  [1417] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(167), 1,
      anon_sym_COLON,
  [1424] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(201), 1,
      sym__end_mark,
  [1431] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
  [1438] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
  [1445] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 137,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 242,
  [SMALL_STATE(9)] = 274,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 336,
  [SMALL_STATE(12)] = 366,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 426,
  [SMALL_STATE(15)] = 455,
  [SMALL_STATE(16)] = 484,
  [SMALL_STATE(17)] = 513,
  [SMALL_STATE(18)] = 542,
  [SMALL_STATE(19)] = 571,
  [SMALL_STATE(20)] = 600,
  [SMALL_STATE(21)] = 629,
  [SMALL_STATE(22)] = 652,
  [SMALL_STATE(23)] = 675,
  [SMALL_STATE(24)] = 698,
  [SMALL_STATE(25)] = 715,
  [SMALL_STATE(26)] = 732,
  [SMALL_STATE(27)] = 749,
  [SMALL_STATE(28)] = 766,
  [SMALL_STATE(29)] = 789,
  [SMALL_STATE(30)] = 806,
  [SMALL_STATE(31)] = 830,
  [SMALL_STATE(32)] = 854,
  [SMALL_STATE(33)] = 869,
  [SMALL_STATE(34)] = 884,
  [SMALL_STATE(35)] = 899,
  [SMALL_STATE(36)] = 914,
  [SMALL_STATE(37)] = 929,
  [SMALL_STATE(38)] = 945,
  [SMALL_STATE(39)] = 961,
  [SMALL_STATE(40)] = 975,
  [SMALL_STATE(41)] = 997,
  [SMALL_STATE(42)] = 1019,
  [SMALL_STATE(43)] = 1033,
  [SMALL_STATE(44)] = 1055,
  [SMALL_STATE(45)] = 1070,
  [SMALL_STATE(46)] = 1085,
  [SMALL_STATE(47)] = 1104,
  [SMALL_STATE(48)] = 1119,
  [SMALL_STATE(49)] = 1135,
  [SMALL_STATE(50)] = 1151,
  [SMALL_STATE(51)] = 1163,
  [SMALL_STATE(52)] = 1177,
  [SMALL_STATE(53)] = 1191,
  [SMALL_STATE(54)] = 1203,
  [SMALL_STATE(55)] = 1216,
  [SMALL_STATE(56)] = 1229,
  [SMALL_STATE(57)] = 1242,
  [SMALL_STATE(58)] = 1251,
  [SMALL_STATE(59)] = 1264,
  [SMALL_STATE(60)] = 1273,
  [SMALL_STATE(61)] = 1282,
  [SMALL_STATE(62)] = 1291,
  [SMALL_STATE(63)] = 1304,
  [SMALL_STATE(64)] = 1313,
  [SMALL_STATE(65)] = 1326,
  [SMALL_STATE(66)] = 1334,
  [SMALL_STATE(67)] = 1342,
  [SMALL_STATE(68)] = 1350,
  [SMALL_STATE(69)] = 1358,
  [SMALL_STATE(70)] = 1368,
  [SMALL_STATE(71)] = 1375,
  [SMALL_STATE(72)] = 1382,
  [SMALL_STATE(73)] = 1389,
  [SMALL_STATE(74)] = 1396,
  [SMALL_STATE(75)] = 1403,
  [SMALL_STATE(76)] = 1410,
  [SMALL_STATE(77)] = 1417,
  [SMALL_STATE(78)] = 1424,
  [SMALL_STATE(79)] = 1431,
  [SMALL_STATE(80)] = 1438,
  [SMALL_STATE(81)] = 1445,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type2, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(25),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(26),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type1, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type1, 3),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(20),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type2_repeat1, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type2_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(25),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(26),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(3),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(20),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type2_repeat1, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type2_repeat1, 3),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(35),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(36),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 3), SHIFT_REPEAT(14),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(35),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(36),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(4),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type1, 2), SHIFT_REPEAT(14),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_constructor, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variable, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_unit, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_unit, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_operator, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_operator, 3),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type2_repeat1, 2), SHIFT_REPEAT(70),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type2_repeat1, 2), SHIFT_REPEAT(39),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type2, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_operator, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_operator, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_operator, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_operator, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2), SHIFT_REPEAT(59),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ability, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ability, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_or_tuple_contents_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_or_tuple_contents_repeat1, 2), SHIFT_REPEAT(17),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ability, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ability, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(70),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_or_tuple_contents, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_or_tuple_contents, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [221] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
