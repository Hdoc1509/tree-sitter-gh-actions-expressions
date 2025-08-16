#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  sym_if_key = 2,
  anon_sym_DOLLAR_LBRACE_LBRACE = 3,
  anon_sym_RBRACE_RBRACE = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  sym_null = 7,
  anon_sym_DOT = 8,
  sym__int = 9,
  anon_sym_DASH = 10,
  anon_sym_0x = 11,
  aux_sym__hex_token1 = 12,
  anon_sym_e = 13,
  anon_sym_SQUOTE = 14,
  sym_string_content = 15,
  sym_scape_sequence = 16,
  sym_asterisk = 17,
  sym_identifier = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  sym_pair = 21,
  sym__if_pair = 22,
  sym_expression = 23,
  sym_delimited_expression = 24,
  sym_literal = 25,
  sym_boolean = 26,
  sym__dot = 27,
  sym_number = 28,
  sym__float = 29,
  sym__hex = 30,
  sym__exp = 31,
  sym_string = 32,
  sym_property_deref = 33,
  sym_context = 34,
  sym_property = 35,
  sym_function_call = 36,
  aux_sym_string_repeat1 = 37,
  aux_sym_context_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [sym_if_key] = "if_key",
  [anon_sym_DOLLAR_LBRACE_LBRACE] = "${{",
  [anon_sym_RBRACE_RBRACE] = "}}",
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
  [sym_asterisk] = "asterisk",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_pair] = "pair",
  [sym__if_pair] = "_if_pair",
  [sym_expression] = "expression",
  [sym_delimited_expression] = "delimited_expression",
  [sym_literal] = "literal",
  [sym_boolean] = "boolean",
  [sym__dot] = "_dot",
  [sym_number] = "number",
  [sym__float] = "_float",
  [sym__hex] = "_hex",
  [sym__exp] = "_exp",
  [sym_string] = "string",
  [sym_property_deref] = "property_deref",
  [sym_context] = "context",
  [sym_property] = "property",
  [sym_function_call] = "function_call",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_context_repeat1] = "context_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_if_key] = sym_if_key,
  [anon_sym_DOLLAR_LBRACE_LBRACE] = anon_sym_DOLLAR_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
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
  [sym_asterisk] = sym_asterisk,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_pair] = sym_pair,
  [sym__if_pair] = sym__if_pair,
  [sym_expression] = sym_expression,
  [sym_delimited_expression] = sym_delimited_expression,
  [sym_literal] = sym_literal,
  [sym_boolean] = sym_boolean,
  [sym__dot] = sym__dot,
  [sym_number] = sym_number,
  [sym__float] = sym__float,
  [sym__hex] = sym__hex,
  [sym__exp] = sym__exp,
  [sym_string] = sym_string,
  [sym_property_deref] = sym_property_deref,
  [sym_context] = sym_context,
  [sym_property] = sym_property,
  [sym_function_call] = sym_function_call,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_context_repeat1] = aux_sym_context_repeat1,
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
  [anon_sym_DOLLAR_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
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
  [sym_asterisk] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
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
  [sym_delimited_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
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
  [sym_property_deref] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_context_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_function = 2,
  field_key = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_function] = "function",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [2] =
    {field_key, 0},
    {field_value, 2},
  [4] =
    {field_function, 0},
  [5] =
    {field_arguments, 2},
    {field_function, 0},
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
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      ADVANCE_MAP(
        '$', 21,
        '\'', 45,
        '(', 59,
        ')', 60,
        '*', 50,
        '-', 40,
        '.', 37,
        '0', 38,
        ':', 27,
        'e', 43,
        'f', 6,
        'i', 10,
        'n', 18,
        't', 15,
        '}', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '$', 21,
        '\'', 44,
        ')', 60,
        '-', 40,
        '0', 38,
        'f', 7,
        'n', 19,
        't', 14,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == '{') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == '{') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(30);
      END_STATE();
    case 23:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      ADVANCE_MAP(
        '$', 21,
        '\'', 44,
        '(', 59,
        ')', 60,
        '*', 50,
        '-', 40,
        '.', 37,
        '0', 38,
        ':', 27,
        'e', 43,
        'f', 6,
        'i', 10,
        'n', 18,
        't', 15,
        '}', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_if_key);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == 'x') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_scape_sequence);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_if_key] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
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
    [sym_asterisk] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_pair] = STATE(33),
    [sym__if_pair] = STATE(38),
    [sym_if_key] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(41),
    [sym_delimited_expression] = STATE(41),
    [sym_literal] = STATE(31),
    [sym_boolean] = STATE(18),
    [sym_number] = STATE(18),
    [sym__float] = STATE(11),
    [sym__hex] = STATE(19),
    [sym__exp] = STATE(19),
    [sym_string] = STATE(18),
    [sym_context] = STATE(31),
    [sym_function_call] = STATE(31),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_null] = ACTIONS(9),
    [sym__int] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_0x] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(9), 1,
      sym_null,
    ACTIONS(11), 1,
      sym__int,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_0x,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(11), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym__hex,
      sym__exp,
    STATE(18), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(36), 3,
      sym_literal,
      sym_context,
      sym_function_call,
  [40] = 12,
    ACTIONS(9), 1,
      sym_null,
    ACTIONS(11), 1,
      sym__int,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_0x,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym__hex,
      sym__exp,
    STATE(42), 2,
      sym_literal,
      sym_context,
    STATE(18), 3,
      sym_boolean,
      sym_number,
      sym_string,
  [82] = 6,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_property_deref,
    STATE(30), 1,
      sym__dot,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
    STATE(6), 2,
      sym_property,
      aux_sym_context_repeat1,
  [103] = 5,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_property_deref,
    STATE(30), 1,
      sym__dot,
    STATE(7), 2,
      sym_property,
      aux_sym_context_repeat1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
  [122] = 5,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_property_deref,
    STATE(30), 1,
      sym__dot,
    STATE(7), 2,
      sym_property,
      aux_sym_context_repeat1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
  [141] = 5,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_property_deref,
    STATE(30), 1,
      sym__dot,
    STATE(6), 2,
      sym_property,
      aux_sym_context_repeat1,
  [158] = 3,
    ACTIONS(40), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym__dot,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
  [170] = 4,
    ACTIONS(42), 1,
      anon_sym_SQUOTE,
    ACTIONS(44), 1,
      sym_string_content,
    ACTIONS(46), 1,
      sym_scape_sequence,
    STATE(12), 1,
      aux_sym_string_repeat1,
  [183] = 2,
    ACTIONS(48), 1,
      anon_sym_e,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
  [192] = 4,
    ACTIONS(50), 1,
      anon_sym_SQUOTE,
    ACTIONS(52), 1,
      sym_string_content,
    ACTIONS(54), 1,
      sym_scape_sequence,
    STATE(14), 1,
      aux_sym_string_repeat1,
  [205] = 1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_e,
      anon_sym_RPAREN,
  [212] = 4,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      sym_string_content,
    ACTIONS(63), 1,
      sym_scape_sequence,
    STATE(14), 1,
      aux_sym_string_repeat1,
  [225] = 1,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [232] = 1,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_e,
      anon_sym_RPAREN,
  [239] = 1,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
  [245] = 1,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
  [251] = 1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
  [257] = 1,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
  [263] = 1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
  [269] = 1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
  [275] = 1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
  [281] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
  [287] = 1,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
  [292] = 1,
    ACTIONS(86), 2,
      sym_asterisk,
      sym_identifier,
  [297] = 2,
    ACTIONS(88), 1,
      sym__int,
    ACTIONS(90), 1,
      anon_sym_DASH,
  [304] = 2,
    ACTIONS(92), 1,
      anon_sym_DOT,
    STATE(34), 1,
      sym__dot,
  [311] = 1,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
  [316] = 1,
    ACTIONS(96), 2,
      sym_asterisk,
      sym_identifier,
  [321] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [325] = 1,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
  [329] = 1,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
  [333] = 1,
    ACTIONS(104), 1,
      sym__int,
  [337] = 1,
    ACTIONS(106), 1,
      sym__int,
  [341] = 1,
    ACTIONS(108), 1,
      anon_sym_RBRACE_RBRACE,
  [345] = 1,
    ACTIONS(110), 1,
      sym__int,
  [349] = 1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [353] = 1,
    ACTIONS(114), 1,
      aux_sym__hex_token1,
  [357] = 1,
    ACTIONS(116), 1,
      sym__int,
  [361] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [365] = 1,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
  [369] = 1,
    ACTIONS(122), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 205,
  [SMALL_STATE(14)] = 212,
  [SMALL_STATE(15)] = 225,
  [SMALL_STATE(16)] = 232,
  [SMALL_STATE(17)] = 239,
  [SMALL_STATE(18)] = 245,
  [SMALL_STATE(19)] = 251,
  [SMALL_STATE(20)] = 257,
  [SMALL_STATE(21)] = 263,
  [SMALL_STATE(22)] = 269,
  [SMALL_STATE(23)] = 275,
  [SMALL_STATE(24)] = 281,
  [SMALL_STATE(25)] = 287,
  [SMALL_STATE(26)] = 292,
  [SMALL_STATE(27)] = 297,
  [SMALL_STATE(28)] = 304,
  [SMALL_STATE(29)] = 311,
  [SMALL_STATE(30)] = 316,
  [SMALL_STATE(31)] = 321,
  [SMALL_STATE(32)] = 325,
  [SMALL_STATE(33)] = 329,
  [SMALL_STATE(34)] = 333,
  [SMALL_STATE(35)] = 337,
  [SMALL_STATE(36)] = 341,
  [SMALL_STATE(37)] = 345,
  [SMALL_STATE(38)] = 349,
  [SMALL_STATE(39)] = 353,
  [SMALL_STATE(40)] = 357,
  [SMALL_STATE(41)] = 361,
  [SMALL_STATE(42)] = 365,
  [SMALL_STATE(43)] = 369,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 4, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_deref, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 1, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_pair, 3, 0, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
