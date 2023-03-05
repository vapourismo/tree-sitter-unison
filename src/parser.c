#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_Nat = 1,
  anon_sym_Int = 2,
  sym_regular_identifier = 3,
  sym_operator = 4,
  anon_sym_DOT = 5,
  anon_sym_use = 6,
  sym__start_mark = 7,
  sym__end_mark = 8,
  sym__newline = 9,
  sym_source_file = 10,
  sym__toplevel = 11,
  sym_identifier = 12,
  sym_qualified_identifier = 13,
  sym_use_statement = 14,
  aux_sym_source_file_repeat1 = 15,
  aux_sym_qualified_identifier_repeat1 = 16,
  aux_sym_use_statement_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Nat] = "Nat",
  [anon_sym_Int] = "Int",
  [sym_regular_identifier] = "regular_identifier",
  [sym_operator] = "operator",
  [anon_sym_DOT] = ".",
  [anon_sym_use] = "use",
  [sym__start_mark] = "_start_mark",
  [sym__end_mark] = "_end_mark",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym__toplevel] = "_toplevel",
  [sym_identifier] = "identifier",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_use_statement] = "use_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_qualified_identifier_repeat1] = "qualified_identifier_repeat1",
  [aux_sym_use_statement_repeat1] = "use_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Nat] = anon_sym_Nat,
  [anon_sym_Int] = anon_sym_Int,
  [sym_regular_identifier] = sym_regular_identifier,
  [sym_operator] = sym_operator,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_use] = anon_sym_use,
  [sym__start_mark] = sym__start_mark,
  [sym__end_mark] = sym__end_mark,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym__toplevel] = sym__toplevel,
  [sym_identifier] = sym_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_use_statement] = sym_use_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_qualified_identifier_repeat1] = aux_sym_qualified_identifier_repeat1,
  [aux_sym_use_statement_repeat1] = aux_sym_use_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Nat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
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
  [sym_use_statement] = {
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
};

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

static inline bool sym_regular_identifier_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(10);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'I') ADVANCE(3);
      if (lookahead == 'N') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(4);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 's') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (sym_operator_character_set_1(lookahead)) ADVANCE(14);
      if (sym_regular_identifier_character_set_1(lookahead)) ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '.') ADVANCE(16);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(14);
      if (sym_regular_identifier_character_set_1(lookahead)) ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_Nat);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_regular_identifier);
      if (sym_regular_identifier_character_set_2(lookahead)) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_operator);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 7, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 7, .external_lex_state = 4},
  [6] = {.lex_state = 7, .external_lex_state = 4},
  [7] = {.lex_state = 7, .external_lex_state = 4},
  [8] = {.lex_state = 8, .external_lex_state = 4},
  [9] = {.lex_state = 7, .external_lex_state = 3},
  [10] = {.lex_state = 7, .external_lex_state = 4},
  [11] = {.lex_state = 7, .external_lex_state = 4},
  [12] = {.lex_state = 7, .external_lex_state = 4},
  [13] = {.lex_state = 7, .external_lex_state = 3},
  [14] = {.lex_state = 7, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 9, .external_lex_state = 3},
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
    [anon_sym_Nat] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [sym__start_mark] = ACTIONS(1),
    [sym__end_mark] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__toplevel] = STATE(2),
    [sym_use_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__start_mark] = ACTIONS(7),
    [sym__newline] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      sym__start_mark,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(4), 3,
      sym__toplevel,
      sym_use_statement,
      aux_sym_source_file_repeat1,
  [15] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(11), 1,
      sym_regular_identifier,
    ACTIONS(13), 1,
      sym_operator,
    STATE(5), 1,
      sym_qualified_identifier,
    STATE(9), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(11), 1,
      sym_identifier,
  [34] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym__start_mark,
    STATE(4), 3,
      sym__toplevel,
      sym_use_statement,
      aux_sym_source_file_repeat1,
  [49] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(20), 1,
      sym__end_mark,
    ACTIONS(13), 2,
      sym_regular_identifier,
      sym_operator,
    STATE(6), 2,
      sym_identifier,
      aux_sym_use_statement_repeat1,
  [64] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(22), 1,
      sym__end_mark,
    ACTIONS(13), 2,
      sym_regular_identifier,
      sym_operator,
    STATE(7), 2,
      sym_identifier,
      aux_sym_use_statement_repeat1,
  [79] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(27), 1,
      sym__end_mark,
    ACTIONS(24), 2,
      sym_regular_identifier,
      sym_operator,
    STATE(7), 2,
      sym_identifier,
      aux_sym_use_statement_repeat1,
  [94] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(31), 1,
      sym_operator,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(29), 2,
      sym__end_mark,
      sym_regular_identifier,
  [108] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(11), 1,
      sym_regular_identifier,
    ACTIONS(13), 1,
      sym_operator,
    STATE(12), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym_qualified_identifier_repeat1,
  [124] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(29), 3,
      sym__end_mark,
      sym_regular_identifier,
      sym_operator,
  [133] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(35), 3,
      sym__end_mark,
      sym_regular_identifier,
      sym_operator,
  [142] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(37), 3,
      sym__end_mark,
      sym_regular_identifier,
      sym_operator,
  [151] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(39), 1,
      sym_regular_identifier,
    ACTIONS(42), 1,
      sym_operator,
    STATE(13), 1,
      aux_sym_qualified_identifier_repeat1,
  [164] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(42), 2,
      sym_regular_identifier,
      sym_operator,
  [172] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(44), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [180] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(46), 2,
      sym__start_mark,
      ts_builtin_sym_end,
  [188] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(48), 1,
      anon_sym_use,
  [195] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
  [202] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(52), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 79,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 108,
  [SMALL_STATE(10)] = 124,
  [SMALL_STATE(11)] = 133,
  [SMALL_STATE(12)] = 142,
  [SMALL_STATE(13)] = 151,
  [SMALL_STATE(14)] = 164,
  [SMALL_STATE(15)] = 172,
  [SMALL_STATE(16)] = 180,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 195,
  [SMALL_STATE(19)] = 202,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2), SHIFT_REPEAT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_statement_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(19),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [50] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
