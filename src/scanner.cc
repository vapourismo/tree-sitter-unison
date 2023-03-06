extern "C" {
#include "tree_sitter/parser.h"
}

#include <list>

enum Token { START_MARK, END_MARK, NEWLINE };

struct Scanner {
  std::list<int> levels;
  std::list<int> marked;

  int get_level() { return levels.size() > 0 ? levels.front() : 0; }

  bool after_newline(TSLexer *lexer, const bool *valid_symbols) {
    int level = 0;

    while ((lexer->lookahead == ' ' || lexer->lookahead == '\t') &&
           !lexer->eof(lexer)) {
      lexer->advance(lexer, true);
      level++;
    }

    if (lexer->lookahead == '\n') {
      lexer->advance(lexer, true);
      return after_newline(lexer, valid_symbols);
    }

    while (levels.size() > 0 && levels.front() > level) {
      levels.pop_front();
    }

    if (levels.size() > 0 && levels.front() < level && level > 0) {
      levels.push_front(level);
    }

    if (valid_symbols[END_MARK] && marked.size() > 0 &&
        (level <= marked.front() || lexer->eof(lexer))) {
      marked.pop_front();
      lexer->result_symbol = END_MARK;
      return true;
    }

    lexer->result_symbol = NEWLINE;
    return true;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[START_MARK] && !lexer->eof(lexer)) {
      int level = get_level();
      if (marked.empty() || (!marked.empty() && marked.front() < level)) {
        marked.push_front(level);
      }
      lexer->result_symbol = START_MARK;
      return true;
    }

    if (valid_symbols[END_MARK] && !marked.empty() && lexer->eof(lexer)) {
      marked.pop_front();
      lexer->result_symbol = END_MARK;
      return true;
    }

    // Trim whitespace
    while ((lexer->lookahead == ' ' || lexer->lookahead == '\t') &&
           !lexer->eof(lexer)) {
      lexer->advance(lexer, true);
    }

    if (lexer->lookahead == '\n' && !lexer->eof(lexer)) {
      lexer->advance(lexer, true);
      return after_newline(lexer, valid_symbols);
    }

    return false;
  }
};

extern "C" {
void *tree_sitter_unison_external_scanner_create() { return new Scanner(); }

void tree_sitter_unison_external_scanner_destroy(void *payload) {
  delete static_cast<Scanner *>(payload);
}

unsigned tree_sitter_unison_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  return 0;
}

void tree_sitter_unison_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {}

bool tree_sitter_unison_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  return static_cast<Scanner *>(payload)->scan(lexer, valid_symbols);
}
}
