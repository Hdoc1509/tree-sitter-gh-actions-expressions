#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_boolean = 1,
  sym_null = 2,
  anon_sym_DOT = 3,
  sym__int = 4,
  anon_sym_DASH = 5,
  anon_sym_0x = 6,
  aux_sym__hex_token1 = 7,
  anon_sym_e = 8,
  anon_sym_SQUOTE = 9,
  sym_string_content = 10,
  sym_scape_sequence = 11,
  sym_expression = 12,
  sym__dot = 13,
  sym_number = 14,
  sym__float = 15,
  sym__hex = 16,
  sym__exp = 17,
  sym_string = 18,
  aux_sym_expression_repeat1 = 19,
  aux_sym_string_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_boolean] = "boolean",
  [sym_null] = "null",
  [anon_sym_DOT] = ".",
  [sym__int] = "_int",
  [anon_sym_DASH] = "-",
  [anon_sym_0x] = "0x",
  [aux_sym__hex_token1] = "_hex_token1",
  [anon_sym_e] = "e",
  [anon_sym_SQUOTE] = "'",
  [sym_string_content] = "string_content",
  [sym_scape_sequence] = "scape_sequence",
  [sym_expression] = "expression",
  [sym__dot] = "_dot",
  [sym_number] = "number",
  [sym__float] = "_float",
  [sym__hex] = "_hex",
  [sym__exp] = "_exp",
  [sym_string] = "string",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_boolean] = sym_boolean,
  [sym_null] = sym_null,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__int] = sym__int,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_0x] = anon_sym_0x,
  [aux_sym__hex_token1] = aux_sym__hex_token1,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_scape_sequence] = sym_scape_sequence,
  [sym_expression] = sym_expression,
  [sym__dot] = sym__dot,
  [sym_number] = sym_number,
  [sym__float] = sym__float,
  [sym__hex] = sym__hex,
  [sym__exp] = sym__exp,
  [sym_string] = sym_string,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__int] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hex_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_scape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__dot] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym__exp] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '\'', 26,
        '-', 21,
        '.', 18,
        '0', 19,
        'e', 24,
        'f', 4,
        'n', 12,
        't', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 13:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '\'', 25,
        '-', 21,
        '.', 18,
        '0', 19,
        'e', 24,
        'f', 4,
        'n', 12,
        't', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == 'x') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_scape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__int] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_scape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(20),
    [sym_number] = STATE(2),
    [sym__float] = STATE(5),
    [sym__hex] = STATE(8),
    [sym__exp] = STATE(8),
    [sym_string] = STATE(2),
    [aux_sym_expression_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(3),
    [sym_null] = ACTIONS(3),
    [sym__int] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
  },
  [2] = {
    [sym_number] = STATE(3),
    [sym__float] = STATE(5),
    [sym__hex] = STATE(8),
    [sym__exp] = STATE(8),
    [sym_string] = STATE(3),
    [aux_sym_expression_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_boolean] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym__int] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
  },
  [3] = {
    [sym_number] = STATE(3),
    [sym__float] = STATE(5),
    [sym__hex] = STATE(8),
    [sym__exp] = STATE(8),
    [sym_string] = STATE(3),
    [aux_sym_expression_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_boolean] = ACTIONS(19),
    [sym_null] = ACTIONS(19),
    [sym__int] = ACTIONS(22),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_0x] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(36), 1,
      anon_sym_DOT,
    ACTIONS(38), 1,
      sym__int,
    STATE(22), 1,
      sym__dot,
    ACTIONS(34), 6,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
  [18] = 3,
    ACTIONS(38), 1,
      sym__int,
    ACTIONS(40), 1,
      anon_sym_e,
    ACTIONS(34), 6,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
  [33] = 2,
    ACTIONS(44), 1,
      sym__int,
    ACTIONS(42), 7,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_e,
      anon_sym_SQUOTE,
  [46] = 2,
    ACTIONS(48), 1,
      sym__int,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_e,
      anon_sym_SQUOTE,
  [59] = 2,
    ACTIONS(38), 1,
      sym__int,
    ACTIONS(34), 6,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
  [71] = 2,
    ACTIONS(52), 1,
      sym__int,
    ACTIONS(50), 6,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
  [83] = 2,
    ACTIONS(56), 1,
      sym__int,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
  [95] = 2,
    ACTIONS(60), 1,
      sym__int,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
  [107] = 2,
    ACTIONS(64), 1,
      sym__int,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
  [119] = 2,
    ACTIONS(68), 1,
      sym__int,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
  [131] = 4,
    ACTIONS(70), 1,
      anon_sym_SQUOTE,
    ACTIONS(72), 1,
      sym_string_content,
    ACTIONS(74), 1,
      sym_scape_sequence,
    STATE(15), 1,
      aux_sym_string_repeat1,
  [144] = 4,
    ACTIONS(76), 1,
      anon_sym_SQUOTE,
    ACTIONS(78), 1,
      sym_string_content,
    ACTIONS(80), 1,
      sym_scape_sequence,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [157] = 4,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_string_content,
    ACTIONS(87), 1,
      sym_scape_sequence,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [170] = 2,
    ACTIONS(90), 1,
      anon_sym_DOT,
    STATE(23), 1,
      sym__dot,
  [177] = 2,
    ACTIONS(92), 1,
      sym__int,
    ACTIONS(94), 1,
      anon_sym_DASH,
  [184] = 1,
    ACTIONS(96), 1,
      sym__int,
  [188] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [192] = 1,
    ACTIONS(100), 1,
      aux_sym__hex_token1,
  [196] = 1,
    ACTIONS(102), 1,
      sym__int,
  [200] = 1,
    ACTIONS(104), 1,
      sym__int,
  [204] = 1,
    ACTIONS(106), 1,
      sym__int,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 33,
  [SMALL_STATE(7)] = 46,
  [SMALL_STATE(8)] = 59,
  [SMALL_STATE(9)] = 71,
  [SMALL_STATE(10)] = 83,
  [SMALL_STATE(11)] = 95,
  [SMALL_STATE(12)] = 107,
  [SMALL_STATE(13)] = 119,
  [SMALL_STATE(14)] = 131,
  [SMALL_STATE(15)] = 144,
  [SMALL_STATE(16)] = 157,
  [SMALL_STATE(17)] = 170,
  [SMALL_STATE(18)] = 177,
  [SMALL_STATE(19)] = 184,
  [SMALL_STATE(20)] = 188,
  [SMALL_STATE(21)] = 192,
  [SMALL_STATE(22)] = 196,
  [SMALL_STATE(23)] = 200,
  [SMALL_STATE(24)] = 204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 4, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 4, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gh_actions_expressions(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
