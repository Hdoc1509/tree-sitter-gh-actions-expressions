#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
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
  sym_expression = 9,
  sym__dot = 10,
  sym_number = 11,
  sym__float = 12,
  sym__hex = 13,
  sym__exp = 14,
  aux_sym_expression_repeat1 = 15,
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
  [sym_expression] = "expression",
  [sym__dot] = "_dot",
  [sym_number] = "number",
  [sym__float] = "_float",
  [sym__hex] = "_hex",
  [sym__exp] = "_exp",
  [aux_sym_expression_repeat1] = "expression_repeat1",
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
  [sym_expression] = sym_expression,
  [sym__dot] = sym__dot,
  [sym_number] = sym_number,
  [sym__float] = sym__float,
  [sym__hex] = sym__hex,
  [sym__exp] = sym__exp,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
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
  [aux_sym_expression_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 't') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 10:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_expression] = STATE(16),
    [sym_number] = STATE(2),
    [sym__float] = STATE(5),
    [sym__hex] = STATE(8),
    [sym__exp] = STATE(8),
    [aux_sym_expression_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(3),
    [sym_null] = ACTIONS(3),
    [sym__int] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
  },
  [2] = {
    [sym_number] = STATE(3),
    [sym__float] = STATE(5),
    [sym__hex] = STATE(8),
    [sym__exp] = STATE(8),
    [aux_sym_expression_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_boolean] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
    [sym__int] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
  },
  [3] = {
    [sym_number] = STATE(3),
    [sym__float] = STATE(5),
    [sym__hex] = STATE(8),
    [sym__exp] = STATE(8),
    [aux_sym_expression_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_boolean] = ACTIONS(17),
    [sym_null] = ACTIONS(17),
    [sym__int] = ACTIONS(20),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_0x] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      sym__int,
    STATE(17), 1,
      sym__dot,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
  [17] = 3,
    ACTIONS(33), 1,
      sym__int,
    ACTIONS(35), 1,
      anon_sym_e,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
  [31] = 2,
    ACTIONS(39), 1,
      sym__int,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_e,
  [43] = 2,
    ACTIONS(43), 1,
      sym__int,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_e,
  [55] = 2,
    ACTIONS(33), 1,
      sym__int,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
  [66] = 2,
    ACTIONS(47), 1,
      sym__int,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
  [77] = 2,
    ACTIONS(51), 1,
      sym__int,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
  [88] = 2,
    ACTIONS(55), 1,
      sym__int,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      sym_boolean,
      sym_null,
      anon_sym_DASH,
      anon_sym_0x,
  [99] = 2,
    ACTIONS(57), 1,
      anon_sym_DOT,
    STATE(18), 1,
      sym__dot,
  [106] = 2,
    ACTIONS(59), 1,
      sym__int,
    ACTIONS(61), 1,
      anon_sym_DASH,
  [113] = 1,
    ACTIONS(63), 1,
      sym__int,
  [117] = 1,
    ACTIONS(65), 1,
      aux_sym__hex_token1,
  [121] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [125] = 1,
    ACTIONS(69), 1,
      sym__int,
  [129] = 1,
    ACTIONS(71), 1,
      sym__int,
  [133] = 1,
    ACTIONS(73), 1,
      sym__int,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 17,
  [SMALL_STATE(6)] = 31,
  [SMALL_STATE(7)] = 43,
  [SMALL_STATE(8)] = 55,
  [SMALL_STATE(9)] = 66,
  [SMALL_STATE(10)] = 77,
  [SMALL_STATE(11)] = 88,
  [SMALL_STATE(12)] = 99,
  [SMALL_STATE(13)] = 106,
  [SMALL_STATE(14)] = 113,
  [SMALL_STATE(15)] = 117,
  [SMALL_STATE(16)] = 121,
  [SMALL_STATE(17)] = 125,
  [SMALL_STATE(18)] = 129,
  [SMALL_STATE(19)] = 133,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 4, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 4, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [67] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
