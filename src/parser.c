#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  sym_endmarker = 2,
  anon_sym_Iam = 3,
  anon_sym_read = 4,
  anon_sym_print = 5,
  anon_sym_isa = 6,
  anon_sym_int = 7,
  anon_sym_float = 8,
  anon_sym_is = 9,
  anon_sym_for = 10,
  anon_sym_from = 11,
  anon_sym_to = 12,
  anon_sym_do = 13,
  anon_sym_end = 14,
  anon_sym_STAR = 15,
  sym_int = 16,
  sym_float = 17,
  sym_source_file = 18,
  sym_pname = 19,
  sym_declaration = 20,
  sym_type = 21,
  sym_definition = 22,
  sym_forloop = 23,
  sym__expression = 24,
  sym__statement = 25,
  sym__number = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_forloop_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_endmarker] = "endmarker",
  [anon_sym_Iam] = "pnamedef",
  [anon_sym_read] = "readmod",
  [anon_sym_print] = "printmod",
  [anon_sym_isa] = "decop",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_is] = "defop",
  [anon_sym_for] = "key_for",
  [anon_sym_from] = "key_from",
  [anon_sym_to] = "key_to",
  [anon_sym_do] = "key_do",
  [anon_sym_end] = "endfor",
  [anon_sym_STAR] = "multiply_op",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_source_file] = "source_file",
  [sym_pname] = "pname",
  [sym_declaration] = "declaration",
  [sym_type] = "type",
  [sym_definition] = "definition",
  [sym_forloop] = "forloop",
  [sym__expression] = "_expression",
  [sym__statement] = "_statement",
  [sym__number] = "_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_forloop_repeat1] = "forloop_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_endmarker] = sym_endmarker,
  [anon_sym_Iam] = anon_sym_Iam,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_isa] = anon_sym_isa,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_source_file] = sym_source_file,
  [sym_pname] = sym_pname,
  [sym_declaration] = sym_declaration,
  [sym_type] = sym_type,
  [sym_definition] = sym_definition,
  [sym_forloop] = sym_forloop,
  [sym__expression] = sym__expression,
  [sym__statement] = sym__statement,
  [sym__number] = sym__number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_forloop_repeat1] = aux_sym_forloop_repeat1,
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
  [sym_endmarker] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Iam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_isa] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_pname] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_forloop] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_forloop_repeat1] = {
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
      if (eof) ADVANCE(4);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_endmarker);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_endmarker);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'I') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_Iam);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_isa);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_endmarker] = ACTIONS(1),
    [anon_sym_Iam] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_isa] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym_pname] = STATE(2),
    [anon_sym_Iam] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_endmarker,
    ACTIONS(13), 1,
      anon_sym_for,
    ACTIONS(11), 2,
      anon_sym_read,
      anon_sym_print,
    STATE(3), 4,
      sym_declaration,
      sym_definition,
      sym_forloop,
      aux_sym_source_file_repeat1,
  [23] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_for,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_endmarker,
    ACTIONS(11), 2,
      anon_sym_read,
      anon_sym_print,
    STATE(4), 4,
      sym_declaration,
      sym_definition,
      sym_forloop,
      aux_sym_source_file_repeat1,
  [46] = 6,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(24), 1,
      sym_endmarker,
    ACTIONS(30), 1,
      anon_sym_for,
    ACTIONS(27), 2,
      anon_sym_read,
      anon_sym_print,
    STATE(4), 4,
      sym_declaration,
      sym_definition,
      sym_forloop,
      aux_sym_source_file_repeat1,
  [69] = 4,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_end,
    ACTIONS(36), 2,
      anon_sym_read,
      anon_sym_print,
    STATE(5), 4,
      sym_declaration,
      sym_definition,
      sym__statement,
      aux_sym_forloop_repeat1,
  [86] = 4,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_end,
    ACTIONS(11), 2,
      anon_sym_read,
      anon_sym_print,
    STATE(5), 4,
      sym_declaration,
      sym_definition,
      sym__statement,
      aux_sym_forloop_repeat1,
  [103] = 4,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_end,
    ACTIONS(11), 2,
      anon_sym_read,
      anon_sym_print,
    STATE(6), 4,
      sym_declaration,
      sym_definition,
      sym__statement,
      aux_sym_forloop_repeat1,
  [120] = 4,
    ACTIONS(51), 1,
      anon_sym_isa,
    ACTIONS(53), 1,
      anon_sym_is,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_endmarker,
    ACTIONS(49), 4,
      anon_sym_read,
      anon_sym_print,
      anon_sym_for,
      sym_identifier,
  [137] = 2,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_endmarker,
    ACTIONS(57), 5,
      anon_sym_read,
      anon_sym_print,
      anon_sym_for,
      anon_sym_end,
      sym_identifier,
  [149] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_endmarker,
    ACTIONS(61), 5,
      anon_sym_read,
      anon_sym_print,
      anon_sym_for,
      anon_sym_end,
      sym_identifier,
  [161] = 2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_endmarker,
    ACTIONS(65), 5,
      anon_sym_read,
      anon_sym_print,
      anon_sym_for,
      anon_sym_end,
      sym_identifier,
  [173] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_endmarker,
    ACTIONS(69), 4,
      anon_sym_read,
      anon_sym_print,
      anon_sym_for,
      sym_identifier,
  [184] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_endmarker,
    ACTIONS(73), 4,
      anon_sym_read,
      anon_sym_print,
      anon_sym_for,
      sym_identifier,
  [195] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_endmarker,
    ACTIONS(77), 4,
      anon_sym_read,
      anon_sym_print,
      anon_sym_for,
      sym_identifier,
  [206] = 3,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(11), 2,
      anon_sym_read,
      anon_sym_print,
    STATE(7), 3,
      sym_declaration,
      sym_definition,
      sym__statement,
  [219] = 3,
    ACTIONS(81), 1,
      sym_int,
    ACTIONS(79), 2,
      sym_identifier,
      sym_float,
    STATE(21), 2,
      sym__expression,
      sym__number,
  [231] = 3,
    ACTIONS(85), 1,
      sym_int,
    ACTIONS(83), 2,
      sym_identifier,
      sym_float,
    STATE(23), 2,
      sym__expression,
      sym__number,
  [243] = 2,
    STATE(27), 1,
      sym_type,
    ACTIONS(87), 2,
      anon_sym_int,
      anon_sym_float,
  [251] = 2,
    STATE(25), 1,
      sym_type,
    ACTIONS(87), 2,
      anon_sym_int,
      anon_sym_float,
  [259] = 1,
    ACTIONS(89), 2,
      sym_identifier,
      sym_int,
  [264] = 2,
    ACTIONS(91), 1,
      sym_endmarker,
    ACTIONS(93), 1,
      anon_sym_STAR,
  [271] = 1,
    ACTIONS(95), 2,
      sym_identifier,
      sym_int,
  [276] = 1,
    ACTIONS(97), 2,
      sym_endmarker,
      anon_sym_STAR,
  [281] = 2,
    ACTIONS(53), 1,
      anon_sym_is,
    ACTIONS(99), 1,
      anon_sym_isa,
  [288] = 1,
    ACTIONS(101), 1,
      sym_endmarker,
  [292] = 1,
    ACTIONS(103), 1,
      anon_sym_to,
  [296] = 1,
    ACTIONS(105), 1,
      sym_endmarker,
  [300] = 1,
    ACTIONS(107), 1,
      sym_identifier,
  [304] = 1,
    ACTIONS(109), 1,
      sym_endmarker,
  [308] = 1,
    ACTIONS(111), 1,
      anon_sym_do,
  [312] = 1,
    ACTIONS(113), 1,
      anon_sym_from,
  [316] = 1,
    ACTIONS(115), 1,
      anon_sym_isa,
  [320] = 1,
    ACTIONS(117), 1,
      sym_identifier,
  [324] = 1,
    ACTIONS(119), 1,
      sym_identifier,
  [328] = 1,
    ACTIONS(121), 1,
      sym_endmarker,
  [332] = 1,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 103,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 149,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 173,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 195,
  [SMALL_STATE(15)] = 206,
  [SMALL_STATE(16)] = 219,
  [SMALL_STATE(17)] = 231,
  [SMALL_STATE(18)] = 243,
  [SMALL_STATE(19)] = 251,
  [SMALL_STATE(20)] = 259,
  [SMALL_STATE(21)] = 264,
  [SMALL_STATE(22)] = 271,
  [SMALL_STATE(23)] = 276,
  [SMALL_STATE(24)] = 281,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 292,
  [SMALL_STATE(27)] = 296,
  [SMALL_STATE(28)] = 300,
  [SMALL_STATE(29)] = 304,
  [SMALL_STATE(30)] = 308,
  [SMALL_STATE(31)] = 312,
  [SMALL_STATE(32)] = 316,
  [SMALL_STATE(33)] = 320,
  [SMALL_STATE(34)] = 324,
  [SMALL_STATE(35)] = 328,
  [SMALL_STATE(36)] = 332,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_forloop_repeat1, 2), SHIFT_REPEAT(24),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_forloop_repeat1, 2), SHIFT_REPEAT(34),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_forloop_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forloop, 10),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forloop, 10),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forloop, 9),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forloop, 9),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pname, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pname, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_programLanguage(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
