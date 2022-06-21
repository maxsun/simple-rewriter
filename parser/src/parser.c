#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  aux_sym_metavar_token1 = 2,
  sym_num_literal = 3,
  aux_sym_field_lookup_token1 = 4,
  anon_sym_EQ = 5,
  sym_emp = 6,
  aux_sym_singleton_heap_token1 = 7,
  anon_sym_STAR = 8,
  anon_sym_True = 9,
  anon_sym_False = 10,
  sym_logical_eq_sign = 11,
  sym_logical_and_sign = 12,
  sym_logical_or_sign = 13,
  anon_sym_BANG = 14,
  sym_sum_sign = 15,
  aux_sym_list_expression_token1 = 16,
  aux_sym_list_expression_token2 = 17,
  aux_sym_list_expression_token3 = 18,
  aux_sym_block_expression_token1 = 19,
  aux_sym_block_expression_token2 = 20,
  aux_sym_block_expression_token3 = 21,
  anon_sym_new = 22,
  anon_sym_dispose = 23,
  anon_sym_if = 24,
  anon_sym_while = 25,
  aux_sym_paren_expression_token1 = 26,
  aux_sym_paren_expression_token2 = 27,
  sym_source_file = 28,
  sym_metavar = 29,
  sym_field_lookup = 30,
  sym_field_update = 31,
  sym_singleton_heap = 32,
  sym_binary_assertion = 33,
  sym__assertion = 34,
  sym__statement = 35,
  sym__expression = 36,
  sym_bool_literal = 37,
  sym_bool_binary_expression = 38,
  sym_bool_unary_expression = 39,
  sym__bool_expr = 40,
  sym_binary_expression = 41,
  sym_list_expression = 42,
  sym_block_expression = 43,
  sym_allocate_expression = 44,
  sym_deallocate_expression = 45,
  sym_if_stmt = 46,
  sym_while_stmt = 47,
  sym_paren_expression = 48,
  sym_unary_expression = 49,
  aux_sym_list_expression_repeat1 = 50,
  aux_sym_block_expression_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_metavar_token1] = "metavar_token1",
  [sym_num_literal] = "num_literal",
  [aux_sym_field_lookup_token1] = "field_lookup_token1",
  [anon_sym_EQ] = "=",
  [sym_emp] = "emp",
  [aux_sym_singleton_heap_token1] = "singleton_heap_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_logical_eq_sign] = "logical_eq_sign",
  [sym_logical_and_sign] = "logical_and_sign",
  [sym_logical_or_sign] = "logical_or_sign",
  [anon_sym_BANG] = "!",
  [sym_sum_sign] = "sum_sign",
  [aux_sym_list_expression_token1] = "list_expression_token1",
  [aux_sym_list_expression_token2] = "list_expression_token2",
  [aux_sym_list_expression_token3] = "list_expression_token3",
  [aux_sym_block_expression_token1] = "block_expression_token1",
  [aux_sym_block_expression_token2] = "block_expression_token2",
  [aux_sym_block_expression_token3] = "block_expression_token3",
  [anon_sym_new] = "new",
  [anon_sym_dispose] = "dispose",
  [anon_sym_if] = "if",
  [anon_sym_while] = "while",
  [aux_sym_paren_expression_token1] = "paren_expression_token1",
  [aux_sym_paren_expression_token2] = "paren_expression_token2",
  [sym_source_file] = "source_file",
  [sym_metavar] = "metavar",
  [sym_field_lookup] = "field_lookup",
  [sym_field_update] = "field_update",
  [sym_singleton_heap] = "singleton_heap",
  [sym_binary_assertion] = "binary_assertion",
  [sym__assertion] = "_assertion",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_bool_literal] = "bool_literal",
  [sym_bool_binary_expression] = "bool_binary_expression",
  [sym_bool_unary_expression] = "bool_unary_expression",
  [sym__bool_expr] = "_bool_expr",
  [sym_binary_expression] = "binary_expression",
  [sym_list_expression] = "list_expression",
  [sym_block_expression] = "block_expression",
  [sym_allocate_expression] = "allocate_expression",
  [sym_deallocate_expression] = "deallocate_expression",
  [sym_if_stmt] = "if_stmt",
  [sym_while_stmt] = "while_stmt",
  [sym_paren_expression] = "paren_expression",
  [sym_unary_expression] = "unary_expression",
  [aux_sym_list_expression_repeat1] = "list_expression_repeat1",
  [aux_sym_block_expression_repeat1] = "block_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_metavar_token1] = aux_sym_metavar_token1,
  [sym_num_literal] = sym_num_literal,
  [aux_sym_field_lookup_token1] = aux_sym_field_lookup_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_emp] = sym_emp,
  [aux_sym_singleton_heap_token1] = aux_sym_singleton_heap_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_logical_eq_sign] = sym_logical_eq_sign,
  [sym_logical_and_sign] = sym_logical_and_sign,
  [sym_logical_or_sign] = sym_logical_or_sign,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_sum_sign] = sym_sum_sign,
  [aux_sym_list_expression_token1] = aux_sym_list_expression_token1,
  [aux_sym_list_expression_token2] = aux_sym_list_expression_token2,
  [aux_sym_list_expression_token3] = aux_sym_list_expression_token3,
  [aux_sym_block_expression_token1] = aux_sym_block_expression_token1,
  [aux_sym_block_expression_token2] = aux_sym_block_expression_token2,
  [aux_sym_block_expression_token3] = aux_sym_block_expression_token3,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_dispose] = anon_sym_dispose,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_while] = anon_sym_while,
  [aux_sym_paren_expression_token1] = aux_sym_paren_expression_token1,
  [aux_sym_paren_expression_token2] = aux_sym_paren_expression_token2,
  [sym_source_file] = sym_source_file,
  [sym_metavar] = sym_metavar,
  [sym_field_lookup] = sym_field_lookup,
  [sym_field_update] = sym_field_update,
  [sym_singleton_heap] = sym_singleton_heap,
  [sym_binary_assertion] = sym_binary_assertion,
  [sym__assertion] = sym__assertion,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_bool_literal] = sym_bool_literal,
  [sym_bool_binary_expression] = sym_bool_binary_expression,
  [sym_bool_unary_expression] = sym_bool_unary_expression,
  [sym__bool_expr] = sym__bool_expr,
  [sym_binary_expression] = sym_binary_expression,
  [sym_list_expression] = sym_list_expression,
  [sym_block_expression] = sym_block_expression,
  [sym_allocate_expression] = sym_allocate_expression,
  [sym_deallocate_expression] = sym_deallocate_expression,
  [sym_if_stmt] = sym_if_stmt,
  [sym_while_stmt] = sym_while_stmt,
  [sym_paren_expression] = sym_paren_expression,
  [sym_unary_expression] = sym_unary_expression,
  [aux_sym_list_expression_repeat1] = aux_sym_list_expression_repeat1,
  [aux_sym_block_expression_repeat1] = aux_sym_block_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_metavar_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_num_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_field_lookup_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_emp] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_singleton_heap_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_logical_eq_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_and_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_or_sign] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_sum_sign] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_list_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_expression_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_expression_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_expression_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_expression_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dispose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_paren_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paren_expression_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_metavar] = {
    .visible = true,
    .named = true,
  },
  [sym_field_lookup] = {
    .visible = true,
    .named = true,
  },
  [sym_field_update] = {
    .visible = true,
    .named = true,
  },
  [sym_singleton_heap] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym__assertion] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__bool_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_list_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_allocate_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_deallocate_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_while_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_list_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_expression_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '&') ADVANCE(39);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(17);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_metavar_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_num_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_field_lookup_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_emp);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_singleton_heap_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_logical_eq_sign);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_logical_and_sign);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_logical_or_sign);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_sum_sign);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_list_expression_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_list_expression_token2);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_list_expression_token3);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_block_expression_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_block_expression_token2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_block_expression_token3);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_new);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_dispose);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_if);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_while);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_paren_expression_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_paren_expression_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_metavar_token1] = ACTIONS(1),
    [sym_num_literal] = ACTIONS(1),
    [aux_sym_field_lookup_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_emp] = ACTIONS(1),
    [aux_sym_singleton_heap_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_logical_eq_sign] = ACTIONS(1),
    [sym_logical_and_sign] = ACTIONS(1),
    [sym_logical_or_sign] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_sum_sign] = ACTIONS(1),
    [aux_sym_list_expression_token1] = ACTIONS(1),
    [aux_sym_list_expression_token2] = ACTIONS(1),
    [aux_sym_list_expression_token3] = ACTIONS(1),
    [aux_sym_block_expression_token1] = ACTIONS(1),
    [aux_sym_block_expression_token2] = ACTIONS(1),
    [aux_sym_block_expression_token3] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_dispose] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [aux_sym_paren_expression_token1] = ACTIONS(1),
    [aux_sym_paren_expression_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym_metavar] = STATE(35),
    [sym_field_lookup] = STATE(18),
    [sym_field_update] = STATE(41),
    [sym_singleton_heap] = STATE(52),
    [sym_binary_assertion] = STATE(52),
    [sym__assertion] = STATE(52),
    [sym__statement] = STATE(61),
    [sym__expression] = STATE(41),
    [sym_bool_literal] = STATE(49),
    [sym_bool_binary_expression] = STATE(49),
    [sym_bool_unary_expression] = STATE(49),
    [sym__bool_expr] = STATE(49),
    [sym_binary_expression] = STATE(41),
    [sym_list_expression] = STATE(41),
    [sym_block_expression] = STATE(41),
    [sym_allocate_expression] = STATE(41),
    [sym_deallocate_expression] = STATE(41),
    [sym_if_stmt] = STATE(61),
    [sym_while_stmt] = STATE(61),
    [sym_paren_expression] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_identifier] = ACTIONS(3),
    [aux_sym_metavar_token1] = ACTIONS(5),
    [sym_num_literal] = ACTIONS(7),
    [sym_emp] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(11),
    [anon_sym_False] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [aux_sym_list_expression_token1] = ACTIONS(15),
    [aux_sym_block_expression_token1] = ACTIONS(17),
    [anon_sym_new] = ACTIONS(19),
    [anon_sym_dispose] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(25),
    [aux_sym_paren_expression_token1] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_num_literal,
    STATE(18), 1,
      sym_field_lookup,
    STATE(33), 1,
      sym_metavar,
    ACTIONS(11), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(44), 4,
      sym_bool_literal,
      sym_bool_binary_expression,
      sym_bool_unary_expression,
      sym__bool_expr,
    STATE(42), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [55] = 14,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_num_literal,
    STATE(18), 1,
      sym_field_lookup,
    STATE(34), 1,
      sym_metavar,
    ACTIONS(11), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(50), 4,
      sym_bool_literal,
      sym_bool_binary_expression,
      sym_bool_unary_expression,
      sym__bool_expr,
    STATE(51), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [110] = 13,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_num_literal,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      aux_sym_block_expression_token3,
    STATE(5), 1,
      aux_sym_block_expression_repeat1,
    STATE(18), 2,
      sym_metavar,
      sym_field_lookup,
    STATE(46), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [159] = 13,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_metavar_token1,
    ACTIONS(47), 1,
      sym_num_literal,
    ACTIONS(50), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      aux_sym_list_expression_token1,
    ACTIONS(56), 1,
      aux_sym_block_expression_token1,
    ACTIONS(59), 1,
      aux_sym_block_expression_token3,
    ACTIONS(61), 1,
      anon_sym_new,
    ACTIONS(64), 1,
      anon_sym_dispose,
    ACTIONS(67), 1,
      aux_sym_paren_expression_token1,
    STATE(5), 1,
      aux_sym_block_expression_repeat1,
    STATE(18), 2,
      sym_metavar,
      sym_field_lookup,
    STATE(46), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [208] = 13,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_num_literal,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(70), 1,
      aux_sym_block_expression_token3,
    STATE(4), 1,
      aux_sym_block_expression_repeat1,
    STATE(18), 2,
      sym_metavar,
      sym_field_lookup,
    STATE(46), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [257] = 11,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(72), 1,
      sym_num_literal,
    STATE(18), 2,
      sym_metavar,
      sym_field_lookup,
    STATE(40), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [300] = 11,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(74), 1,
      sym_num_literal,
    STATE(18), 2,
      sym_metavar,
      sym_field_lookup,
    STATE(37), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [343] = 11,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(76), 1,
      sym_num_literal,
    STATE(18), 2,
      sym_metavar,
      sym_field_lookup,
    STATE(32), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [386] = 11,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(78), 1,
      sym_num_literal,
    STATE(18), 2,
      sym_metavar,
      sym_field_lookup,
    STATE(31), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [429] = 11,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(80), 1,
      sym_num_literal,
    STATE(18), 2,
      sym_metavar,
      sym_field_lookup,
    STATE(30), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [472] = 11,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(82), 1,
      sym_num_literal,
    STATE(18), 2,
      sym_metavar,
      sym_field_lookup,
    STATE(24), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [515] = 11,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(84), 1,
      sym_num_literal,
    STATE(18), 2,
      sym_metavar,
      sym_field_lookup,
    STATE(47), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [558] = 11,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(86), 1,
      sym_num_literal,
    STATE(18), 2,
      sym_metavar,
      sym_field_lookup,
    STATE(38), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [601] = 11,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(88), 1,
      sym_num_literal,
    STATE(18), 2,
      sym_metavar,
      sym_field_lookup,
    STATE(25), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [644] = 11,
    ACTIONS(5), 1,
      aux_sym_metavar_token1,
    ACTIONS(15), 1,
      aux_sym_list_expression_token1,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    ACTIONS(19), 1,
      anon_sym_new,
    ACTIONS(21), 1,
      anon_sym_dispose,
    ACTIONS(27), 1,
      aux_sym_paren_expression_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(90), 1,
      sym_num_literal,
    STATE(18), 2,
      sym_metavar,
      sym_field_lookup,
    STATE(26), 9,
      sym_field_update,
      sym__expression,
      sym_binary_expression,
      sym_list_expression,
      sym_block_expression,
      sym_allocate_expression,
      sym_deallocate_expression,
      sym_paren_expression,
      sym_unary_expression,
  [687] = 2,
    ACTIONS(94), 1,
      anon_sym_EQ,
    ACTIONS(92), 10,
      ts_builtin_sym_end,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      sym_sum_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [703] = 2,
    ACTIONS(98), 1,
      anon_sym_EQ,
    ACTIONS(96), 10,
      ts_builtin_sym_end,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      sym_sum_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [719] = 2,
    ACTIONS(100), 1,
      aux_sym_field_lookup_token1,
    ACTIONS(96), 10,
      ts_builtin_sym_end,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      sym_sum_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [735] = 2,
    ACTIONS(104), 1,
      anon_sym_EQ,
    ACTIONS(102), 10,
      ts_builtin_sym_end,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      sym_sum_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [751] = 2,
    ACTIONS(106), 3,
      sym_identifier,
      anon_sym_new,
      anon_sym_dispose,
    ACTIONS(59), 7,
      aux_sym_metavar_token1,
      sym_num_literal,
      anon_sym_BANG,
      aux_sym_list_expression_token1,
      aux_sym_block_expression_token1,
      aux_sym_block_expression_token3,
      aux_sym_paren_expression_token1,
  [766] = 1,
    ACTIONS(108), 10,
      ts_builtin_sym_end,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      sym_sum_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [779] = 1,
    ACTIONS(110), 10,
      ts_builtin_sym_end,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      sym_sum_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [792] = 3,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      sym_sum_sign,
    ACTIONS(112), 8,
      ts_builtin_sym_end,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [809] = 1,
    ACTIONS(112), 10,
      ts_builtin_sym_end,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      sym_sum_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [822] = 3,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      sym_sum_sign,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [839] = 1,
    ACTIONS(120), 10,
      ts_builtin_sym_end,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      sym_sum_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [852] = 1,
    ACTIONS(122), 10,
      ts_builtin_sym_end,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      sym_sum_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [865] = 1,
    ACTIONS(124), 10,
      ts_builtin_sym_end,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      sym_sum_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [878] = 2,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(126), 9,
      ts_builtin_sym_end,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      sym_sum_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [893] = 3,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      sym_sum_sign,
    ACTIONS(128), 8,
      ts_builtin_sym_end,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [910] = 3,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      sym_sum_sign,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      sym_logical_eq_sign,
      sym_logical_and_sign,
      sym_logical_or_sign,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
      aux_sym_block_expression_token2,
      aux_sym_paren_expression_token2,
  [927] = 3,
    ACTIONS(98), 1,
      anon_sym_EQ,
    ACTIONS(96), 3,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_sum_sign,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym_logical_and_sign,
      sym_logical_or_sign,
  [941] = 3,
    ACTIONS(98), 1,
      anon_sym_EQ,
    ACTIONS(96), 3,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_sum_sign,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      sym_logical_and_sign,
      sym_logical_or_sign,
  [955] = 3,
    ACTIONS(98), 1,
      anon_sym_EQ,
    ACTIONS(136), 2,
      sym_logical_and_sign,
      sym_logical_or_sign,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_sum_sign,
  [969] = 3,
    ACTIONS(100), 1,
      aux_sym_field_lookup_token1,
    ACTIONS(138), 1,
      aux_sym_singleton_heap_token1,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_STAR,
      sym_logical_eq_sign,
      sym_sum_sign,
  [982] = 5,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      sym_sum_sign,
    ACTIONS(140), 1,
      aux_sym_list_expression_token2,
    ACTIONS(142), 1,
      aux_sym_list_expression_token3,
    STATE(48), 1,
      aux_sym_list_expression_repeat1,
  [998] = 3,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      sym_sum_sign,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      sym_logical_and_sign,
      sym_logical_or_sign,
  [1010] = 3,
    ACTIONS(144), 1,
      sym_identifier,
    ACTIONS(146), 1,
      sym_emp,
    STATE(54), 3,
      sym_singleton_heap,
      sym_binary_assertion,
      sym__assertion,
  [1022] = 3,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      sym_sum_sign,
    ACTIONS(148), 2,
      aux_sym_list_expression_token2,
      aux_sym_list_expression_token3,
  [1033] = 4,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      sym_sum_sign,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      sym_logical_eq_sign,
  [1046] = 2,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      sym_logical_eq_sign,
      sym_sum_sign,
  [1055] = 1,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      sym_logical_and_sign,
      sym_logical_or_sign,
  [1061] = 1,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym_logical_and_sign,
      sym_logical_or_sign,
  [1067] = 3,
    ACTIONS(148), 1,
      aux_sym_list_expression_token3,
    ACTIONS(156), 1,
      aux_sym_list_expression_token2,
    STATE(45), 1,
      aux_sym_list_expression_repeat1,
  [1077] = 3,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      sym_sum_sign,
    ACTIONS(159), 1,
      aux_sym_block_expression_token2,
  [1087] = 3,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      sym_sum_sign,
    ACTIONS(161), 1,
      aux_sym_paren_expression_token2,
  [1097] = 3,
    ACTIONS(140), 1,
      aux_sym_list_expression_token2,
    ACTIONS(163), 1,
      aux_sym_list_expression_token3,
    STATE(45), 1,
      aux_sym_list_expression_repeat1,
  [1107] = 2,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 2,
      sym_logical_and_sign,
      sym_logical_or_sign,
  [1115] = 1,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      sym_logical_and_sign,
      sym_logical_or_sign,
  [1121] = 3,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      sym_sum_sign,
    ACTIONS(152), 1,
      sym_logical_eq_sign,
  [1131] = 2,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      anon_sym_STAR,
  [1138] = 1,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_STAR,
  [1143] = 1,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_STAR,
  [1148] = 2,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    STATE(63), 1,
      sym_block_expression,
  [1155] = 2,
    ACTIONS(17), 1,
      aux_sym_block_expression_token1,
    STATE(62), 1,
      sym_block_expression,
  [1162] = 1,
    ACTIONS(171), 1,
      sym_identifier,
  [1166] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
  [1170] = 1,
    ACTIONS(175), 1,
      sym_identifier,
  [1174] = 1,
    ACTIONS(138), 1,
      aux_sym_singleton_heap_token1,
  [1178] = 1,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [1182] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [1186] = 1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
  [1190] = 1,
    ACTIONS(181), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 257,
  [SMALL_STATE(8)] = 300,
  [SMALL_STATE(9)] = 343,
  [SMALL_STATE(10)] = 386,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 472,
  [SMALL_STATE(13)] = 515,
  [SMALL_STATE(14)] = 558,
  [SMALL_STATE(15)] = 601,
  [SMALL_STATE(16)] = 644,
  [SMALL_STATE(17)] = 687,
  [SMALL_STATE(18)] = 703,
  [SMALL_STATE(19)] = 719,
  [SMALL_STATE(20)] = 735,
  [SMALL_STATE(21)] = 751,
  [SMALL_STATE(22)] = 766,
  [SMALL_STATE(23)] = 779,
  [SMALL_STATE(24)] = 792,
  [SMALL_STATE(25)] = 809,
  [SMALL_STATE(26)] = 822,
  [SMALL_STATE(27)] = 839,
  [SMALL_STATE(28)] = 852,
  [SMALL_STATE(29)] = 865,
  [SMALL_STATE(30)] = 878,
  [SMALL_STATE(31)] = 893,
  [SMALL_STATE(32)] = 910,
  [SMALL_STATE(33)] = 927,
  [SMALL_STATE(34)] = 941,
  [SMALL_STATE(35)] = 955,
  [SMALL_STATE(36)] = 969,
  [SMALL_STATE(37)] = 982,
  [SMALL_STATE(38)] = 998,
  [SMALL_STATE(39)] = 1010,
  [SMALL_STATE(40)] = 1022,
  [SMALL_STATE(41)] = 1033,
  [SMALL_STATE(42)] = 1046,
  [SMALL_STATE(43)] = 1055,
  [SMALL_STATE(44)] = 1061,
  [SMALL_STATE(45)] = 1067,
  [SMALL_STATE(46)] = 1077,
  [SMALL_STATE(47)] = 1087,
  [SMALL_STATE(48)] = 1097,
  [SMALL_STATE(49)] = 1107,
  [SMALL_STATE(50)] = 1115,
  [SMALL_STATE(51)] = 1121,
  [SMALL_STATE(52)] = 1131,
  [SMALL_STATE(53)] = 1138,
  [SMALL_STATE(54)] = 1143,
  [SMALL_STATE(55)] = 1148,
  [SMALL_STATE(56)] = 1155,
  [SMALL_STATE(57)] = 1162,
  [SMALL_STATE(58)] = 1166,
  [SMALL_STATE(59)] = 1170,
  [SMALL_STATE(60)] = 1174,
  [SMALL_STATE(61)] = 1178,
  [SMALL_STATE(62)] = 1182,
  [SMALL_STATE(63)] = 1186,
  [SMALL_STATE(64)] = 1190,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(19),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(59),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(46),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(11),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(8),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(9),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(10),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_lookup, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_lookup, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavar, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metavar, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_update, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deallocate_expression, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allocate_expression, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_unary_expression, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_binary_expression, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_expression_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_expression_repeat1, 2), SHIFT_REPEAT(7),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singleton_heap, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_assertion, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [173] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_stmt, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_TestLang(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
