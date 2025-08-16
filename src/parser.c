#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_COMMA = 21,
  sym_not = 22,
  sym_eq = 23,
  sym_pair = 24,
  sym__if_pair = 25,
  sym__evaluation = 26,
  sym_expression = 27,
  sym_delimited_expression = 28,
  sym_literal = 29,
  sym_boolean = 30,
  sym__dot = 31,
  sym_number = 32,
  sym__float = 33,
  sym__hex = 34,
  sym__exp = 35,
  sym_string = 36,
  sym_property_deref = 37,
  sym_context = 38,
  sym_property = 39,
  sym_function_call = 40,
  sym_arguments = 41,
  sym_operator = 42,
  aux_sym_string_repeat1 = 43,
  aux_sym_context_repeat1 = 44,
  aux_sym_arguments_repeat1 = 45,
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
  [anon_sym_COMMA] = ",",
  [sym_not] = "not",
  [sym_eq] = "eq",
  [sym_pair] = "pair",
  [sym__if_pair] = "_if_pair",
  [sym__evaluation] = "_evaluation",
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
  [sym_arguments] = "arguments",
  [sym_operator] = "operator",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_context_repeat1] = "context_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_not] = sym_not,
  [sym_eq] = sym_eq,
  [sym_pair] = sym_pair,
  [sym__if_pair] = sym__if_pair,
  [sym__evaluation] = sym__evaluation,
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
  [sym_arguments] = sym_arguments,
  [sym_operator] = sym_operator,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_context_repeat1] = aux_sym_context_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_eq] = {
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
  [sym__evaluation] = {
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
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
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
  [aux_sym_arguments_repeat1] = {
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
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '!', 63,
        '$', 22,
        '\'', 46,
        '(', 60,
        ')', 61,
        '*', 51,
        ',', 62,
        '-', 41,
        '.', 38,
        '0', 39,
        ':', 28,
        '=', 6,
        'e', 44,
        'f', 7,
        'i', 11,
        'n', 19,
        't', 16,
        '}', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 63,
        '$', 22,
        '\'', 45,
        ')', 61,
        '-', 41,
        '0', 39,
        'f', 8,
        'n', 20,
        't', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == '{') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == '{') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '}') ADVANCE(31);
      END_STATE();
    case 24:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '!', 63,
        '$', 22,
        '\'', 45,
        '(', 60,
        ')', 61,
        '*', 51,
        ',', 62,
        '-', 41,
        '.', 38,
        '0', 39,
        ':', 28,
        '=', 6,
        'e', 44,
        'f', 7,
        'i', 11,
        'n', 19,
        't', 16,
        '}', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_if_key);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == 'x') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_scape_sequence);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_eq);
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
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
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
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
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
  [57] = {.lex_state = 24},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_not] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
  },
  [1] = {
    [sym_pair] = STATE(48),
    [sym__if_pair] = STATE(44),
    [sym_if_key] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
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
    STATE(16), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym__hex,
      sym__exp,
    STATE(45), 2,
      sym_expression,
      sym_delimited_expression,
    STATE(22), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(32), 4,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
  [48] = 13,
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
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym__float,
    STATE(47), 1,
      sym_arguments,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym__hex,
      sym__exp,
    STATE(22), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(33), 4,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
  [95] = 12,
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
    ACTIONS(23), 1,
      sym_not,
    STATE(16), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym__hex,
      sym__exp,
    STATE(22), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(35), 4,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
  [139] = 11,
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
    STATE(16), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym__hex,
      sym__exp,
    STATE(22), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(34), 4,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
  [180] = 11,
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
    STATE(16), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym__hex,
      sym__exp,
    STATE(22), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(50), 4,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
  [221] = 11,
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
    STATE(16), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym__hex,
      sym__exp,
    STATE(22), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(49), 4,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
  [262] = 11,
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
    STATE(16), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym__hex,
      sym__exp,
    STATE(22), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(56), 4,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
  [303] = 11,
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
    STATE(16), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym__hex,
      sym__exp,
    STATE(22), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(42), 4,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
  [344] = 6,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym__dot,
    STATE(41), 1,
      sym_property_deref,
    STATE(11), 2,
      sym_property,
      aux_sym_context_repeat1,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [368] = 5,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(40), 1,
      sym__dot,
    STATE(41), 1,
      sym_property_deref,
    STATE(12), 2,
      sym_property,
      aux_sym_context_repeat1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [389] = 5,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(40), 1,
      sym__dot,
    STATE(41), 1,
      sym_property_deref,
    STATE(12), 2,
      sym_property,
      aux_sym_context_repeat1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [410] = 2,
    ACTIONS(40), 3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
    ACTIONS(38), 5,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      sym__int,
      sym_identifier,
  [423] = 3,
    ACTIONS(44), 1,
      anon_sym_DOT,
    STATE(55), 1,
      sym__dot,
    ACTIONS(42), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [437] = 1,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [446] = 2,
    ACTIONS(48), 1,
      anon_sym_e,
    ACTIONS(42), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [457] = 1,
    ACTIONS(50), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_e,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [466] = 1,
    ACTIONS(52), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_e,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [475] = 1,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [483] = 1,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [491] = 1,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [499] = 1,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [507] = 1,
    ACTIONS(42), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [515] = 1,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [523] = 1,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [531] = 1,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [539] = 1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [547] = 1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_eq,
  [555] = 4,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      sym_string_content,
    ACTIONS(76), 1,
      sym_scape_sequence,
    STATE(31), 1,
      aux_sym_string_repeat1,
  [568] = 4,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      sym_string_content,
    ACTIONS(83), 1,
      sym_scape_sequence,
    STATE(30), 1,
      aux_sym_string_repeat1,
  [581] = 4,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      sym_string_content,
    ACTIONS(90), 1,
      sym_scape_sequence,
    STATE(30), 1,
      aux_sym_string_repeat1,
  [594] = 3,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym_eq,
    STATE(7), 1,
      sym_operator,
  [604] = 3,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_arguments_repeat1,
  [614] = 3,
    ACTIONS(94), 1,
      sym_eq,
    ACTIONS(100), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      sym_operator,
  [624] = 3,
    ACTIONS(94), 1,
      sym_eq,
    ACTIONS(102), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(6), 1,
      sym_operator,
  [634] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_arguments_repeat1,
  [644] = 3,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_arguments_repeat1,
  [654] = 2,
    ACTIONS(111), 1,
      anon_sym_DOT,
    STATE(46), 1,
      sym__dot,
  [661] = 2,
    ACTIONS(113), 1,
      sym__int,
    ACTIONS(115), 1,
      anon_sym_DASH,
  [668] = 1,
    ACTIONS(117), 2,
      sym_asterisk,
      sym_identifier,
  [673] = 1,
    ACTIONS(119), 2,
      sym_asterisk,
      sym_identifier,
  [678] = 1,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [683] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [687] = 1,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
  [691] = 1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [695] = 1,
    ACTIONS(127), 1,
      sym__int,
  [699] = 1,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
  [703] = 1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [707] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [711] = 1,
    ACTIONS(135), 1,
      anon_sym_RBRACE_RBRACE,
  [715] = 1,
    ACTIONS(137), 1,
      anon_sym_COLON,
  [719] = 1,
    ACTIONS(139), 1,
      sym__int,
  [723] = 1,
    ACTIONS(141), 1,
      sym__int,
  [727] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [731] = 1,
    ACTIONS(145), 1,
      sym__int,
  [735] = 1,
    ACTIONS(147), 1,
      anon_sym_RBRACE_RBRACE,
  [739] = 1,
    ACTIONS(149), 1,
      aux_sym__hex_token1,
  [743] = 1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [747] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 95,
  [SMALL_STATE(5)] = 139,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 221,
  [SMALL_STATE(8)] = 262,
  [SMALL_STATE(9)] = 303,
  [SMALL_STATE(10)] = 344,
  [SMALL_STATE(11)] = 368,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 410,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 437,
  [SMALL_STATE(16)] = 446,
  [SMALL_STATE(17)] = 457,
  [SMALL_STATE(18)] = 466,
  [SMALL_STATE(19)] = 475,
  [SMALL_STATE(20)] = 483,
  [SMALL_STATE(21)] = 491,
  [SMALL_STATE(22)] = 499,
  [SMALL_STATE(23)] = 507,
  [SMALL_STATE(24)] = 515,
  [SMALL_STATE(25)] = 523,
  [SMALL_STATE(26)] = 531,
  [SMALL_STATE(27)] = 539,
  [SMALL_STATE(28)] = 547,
  [SMALL_STATE(29)] = 555,
  [SMALL_STATE(30)] = 568,
  [SMALL_STATE(31)] = 581,
  [SMALL_STATE(32)] = 594,
  [SMALL_STATE(33)] = 604,
  [SMALL_STATE(34)] = 614,
  [SMALL_STATE(35)] = 624,
  [SMALL_STATE(36)] = 634,
  [SMALL_STATE(37)] = 644,
  [SMALL_STATE(38)] = 654,
  [SMALL_STATE(39)] = 661,
  [SMALL_STATE(40)] = 668,
  [SMALL_STATE(41)] = 673,
  [SMALL_STATE(42)] = 678,
  [SMALL_STATE(43)] = 683,
  [SMALL_STATE(44)] = 687,
  [SMALL_STATE(45)] = 691,
  [SMALL_STATE(46)] = 695,
  [SMALL_STATE(47)] = 699,
  [SMALL_STATE(48)] = 703,
  [SMALL_STATE(49)] = 707,
  [SMALL_STATE(50)] = 711,
  [SMALL_STATE(51)] = 715,
  [SMALL_STATE(52)] = 719,
  [SMALL_STATE(53)] = 723,
  [SMALL_STATE(54)] = 727,
  [SMALL_STATE(55)] = 731,
  [SMALL_STATE(56)] = 735,
  [SMALL_STATE(57)] = 739,
  [SMALL_STATE(58)] = 743,
  [SMALL_STATE(59)] = 747,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 4, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 4, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_deref, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 1, 0, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_pair, 3, 0, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [131] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 4, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 6, 0, 0),
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
