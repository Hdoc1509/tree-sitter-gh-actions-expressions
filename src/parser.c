#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  sym_if_key = 2,
  anon_sym_true = 3,
  anon_sym_false = 4,
  sym_null = 5,
  anon_sym_DOT = 6,
  sym__int = 7,
  anon_sym_DASH = 8,
  anon_sym_0x = 9,
  aux_sym__hex_token1 = 10,
  anon_sym_e = 11,
  anon_sym_SQUOTE = 12,
  sym_string_content = 13,
  sym_scape_sequence = 14,
  sym_pair = 15,
  sym__if_pair = 16,
  sym_expression = 17,
  sym_boolean = 18,
  sym__dot = 19,
  sym_number = 20,
  sym__float = 21,
  sym__hex = 22,
  sym__exp = 23,
  sym_string = 24,
  aux_sym_string_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [sym_if_key] = "if_key",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
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
  [sym_pair] = "pair",
  [sym__if_pair] = "_if_pair",
  [sym_expression] = "expression",
  [sym_boolean] = "boolean",
  [sym__dot] = "_dot",
  [sym_number] = "number",
  [sym__float] = "_float",
  [sym__hex] = "_hex",
  [sym__exp] = "_exp",
  [sym_string] = "string",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_if_key] = sym_if_key,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
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
  [sym_pair] = sym_pair,
  [sym__if_pair] = sym__if_pair,
  [sym_expression] = sym_expression,
  [sym_boolean] = sym_boolean,
  [sym__dot] = sym__dot,
  [sym_number] = sym_number,
  [sym__float] = sym__float,
  [sym__hex] = sym__hex,
  [sym__exp] = sym__exp,
  [sym_string] = sym_string,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_if_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
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
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__if_pair] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [2] =
    {field_key, 0},
    {field_value, 2},
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
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\'', 32,
        '-', 27,
        '.', 24,
        '0', 25,
        ':', 19,
        'e', 30,
        'f', 5,
        'i', 8,
        'n', 15,
        't', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 't') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 16:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\'', 31,
        '-', 27,
        '.', 24,
        '0', 25,
        ':', 19,
        'e', 30,
        'f', 5,
        'i', 8,
        'n', 15,
        't', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_if_key);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_scape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_if_key] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
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
    [sym_pair] = STATE(13),
    [sym__if_pair] = STATE(18),
    [sym_if_key] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(19),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym__float] = STATE(7),
    [sym__hex] = STATE(20),
    [sym__exp] = STATE(20),
    [sym_string] = STATE(14),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_null] = ACTIONS(7),
    [sym__int] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_0x] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_string_content,
    ACTIONS(21), 1,
      sym_scape_sequence,
    STATE(4), 1,
      aux_sym_string_repeat1,
  [13] = 4,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_string_content,
    ACTIONS(27), 1,
      sym_scape_sequence,
    STATE(5), 1,
      aux_sym_string_repeat1,
  [26] = 4,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym_string_content,
    ACTIONS(34), 1,
      sym_scape_sequence,
    STATE(5), 1,
      aux_sym_string_repeat1,
  [39] = 3,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_DOT,
    STATE(25), 1,
      sym__dot,
  [49] = 2,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_e,
  [56] = 2,
    ACTIONS(43), 1,
      anon_sym_DOT,
    STATE(23), 1,
      sym__dot,
  [63] = 1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_e,
  [68] = 2,
    ACTIONS(47), 1,
      sym__int,
    ACTIONS(49), 1,
      anon_sym_DASH,
  [75] = 1,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_e,
  [80] = 1,
    ACTIONS(53), 1,
      anon_sym_COLON,
  [84] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [88] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [92] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [96] = 1,
    ACTIONS(61), 1,
      sym__int,
  [100] = 1,
    ACTIONS(63), 1,
      aux_sym__hex_token1,
  [104] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
  [108] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [112] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [116] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [120] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [124] = 1,
    ACTIONS(73), 1,
      sym__int,
  [128] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [132] = 1,
    ACTIONS(77), 1,
      sym__int,
  [136] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [140] = 1,
    ACTIONS(81), 1,
      sym__int,
  [144] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 13,
  [SMALL_STATE(5)] = 26,
  [SMALL_STATE(6)] = 39,
  [SMALL_STATE(7)] = 49,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 63,
  [SMALL_STATE(10)] = 68,
  [SMALL_STATE(11)] = 75,
  [SMALL_STATE(12)] = 80,
  [SMALL_STATE(13)] = 84,
  [SMALL_STATE(14)] = 88,
  [SMALL_STATE(15)] = 92,
  [SMALL_STATE(16)] = 96,
  [SMALL_STATE(17)] = 100,
  [SMALL_STATE(18)] = 104,
  [SMALL_STATE(19)] = 108,
  [SMALL_STATE(20)] = 112,
  [SMALL_STATE(21)] = 116,
  [SMALL_STATE(22)] = 120,
  [SMALL_STATE(23)] = 124,
  [SMALL_STATE(24)] = 128,
  [SMALL_STATE(25)] = 132,
  [SMALL_STATE(26)] = 136,
  [SMALL_STATE(27)] = 140,
  [SMALL_STATE(28)] = 144,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 4, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 1, 0, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_pair, 3, 0, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 4, 0, 0),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
