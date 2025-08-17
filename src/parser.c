#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_if = 1,
  anon_sym_COLON = 2,
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
  sym_lt = 23,
  sym_le = 24,
  sym_gt = 25,
  sym_ge = 26,
  sym_eq = 27,
  sym_ne = 28,
  sym_and = 29,
  sym_or = 30,
  sym_source = 31,
  sym__if_pair = 32,
  sym__evaluation = 33,
  sym_expression = 34,
  sym_delimited_expression = 35,
  sym_literal = 36,
  sym_boolean = 37,
  sym__dot = 38,
  sym_number = 39,
  sym__float = 40,
  sym__hex = 41,
  sym__exp = 42,
  sym_string = 43,
  sym_property_deref = 44,
  sym_context = 45,
  sym_property = 46,
  sym_function_call = 47,
  sym_arguments = 48,
  sym_operator = 49,
  aux_sym_expression_repeat1 = 50,
  aux_sym_string_repeat1 = 51,
  aux_sym_context_repeat1 = 52,
  aux_sym_arguments_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_if] = "if",
  [anon_sym_COLON] = ":",
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
  [sym_lt] = "lt",
  [sym_le] = "le",
  [sym_gt] = "gt",
  [sym_ge] = "ge",
  [sym_eq] = "eq",
  [sym_ne] = "ne",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_source] = "source",
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
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_context_repeat1] = "context_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_lt] = sym_lt,
  [sym_le] = sym_le,
  [sym_gt] = sym_gt,
  [sym_ge] = sym_ge,
  [sym_eq] = sym_eq,
  [sym_ne] = sym_ne,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [sym_source] = sym_source,
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
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_context_repeat1] = aux_sym_context_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_le] = {
    .visible = true,
    .named = true,
  },
  [sym_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_ge] = {
    .visible = true,
    .named = true,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_ne] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
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
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
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
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_function] = "function",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
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
  [60] = 60,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '!', 68,
        '$', 24,
        '&', 3,
        '\'', 50,
        '(', 64,
        ')', 65,
        '*', 55,
        ',', 66,
        '-', 45,
        '.', 42,
        '0', 43,
        ':', 33,
        '<', 69,
        '=', 8,
        '>', 71,
        'e', 48,
        'f', 9,
        'i', 13,
        'n', 21,
        't', 18,
        '|', 25,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 67,
        '$', 24,
        '\'', 49,
        ')', 65,
        '-', 45,
        '0', 43,
        'f', 10,
        'n', 22,
        't', 17,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == '{') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '|') ADVANCE(76);
      END_STATE();
    case 26:
      if (lookahead == '}') ADVANCE(35);
      END_STATE();
    case 27:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '!', 68,
        '$', 24,
        '&', 3,
        '\'', 49,
        '(', 64,
        ')', 65,
        '*', 55,
        ',', 66,
        '-', 45,
        '.', 42,
        '0', 43,
        ':', 33,
        '<', 69,
        '=', 8,
        '>', 71,
        'e', 48,
        'f', 9,
        'i', 13,
        'n', 21,
        't', 18,
        '|', 25,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '!', 7,
        '&', 3,
        '(', 64,
        ')', 65,
        ',', 66,
        '.', 42,
        '<', 69,
        '=', 8,
        '>', 71,
        'e', 48,
        '|', 25,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_scape_sequence);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_not);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_ne);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_or);
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
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 30},
  [31] = {.lex_state = 30},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 30},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 30},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_lt] = ACTIONS(1),
    [sym_le] = ACTIONS(1),
    [sym_gt] = ACTIONS(1),
    [sym_ge] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_ne] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(55),
    [sym__if_pair] = STATE(60),
    [anon_sym_if] = ACTIONS(3),
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
    STATE(13), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__hex,
      sym__exp,
    STATE(57), 2,
      sym_expression,
      sym_delimited_expression,
    STATE(18), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(29), 4,
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
    STATE(13), 1,
      sym__float,
    STATE(52), 1,
      sym_arguments,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__hex,
      sym__exp,
    STATE(18), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(40), 4,
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
    STATE(13), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__hex,
      sym__exp,
    STATE(18), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(30), 4,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
  [139] = 12,
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
    ACTIONS(25), 1,
      sym_not,
    STATE(13), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__hex,
      sym__exp,
    STATE(18), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(34), 4,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
  [183] = 7,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym__dot,
    STATE(45), 1,
      sym_property_deref,
    ACTIONS(33), 2,
      sym_lt,
      sym_gt,
    STATE(10), 2,
      sym_property,
      aux_sym_context_repeat1,
    ACTIONS(27), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [216] = 11,
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
    STATE(13), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__hex,
      sym__exp,
    STATE(18), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(28), 4,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
  [257] = 11,
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
    STATE(13), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__hex,
      sym__exp,
    STATE(18), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(35), 4,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
  [298] = 11,
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
    STATE(13), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym__hex,
      sym__exp,
    STATE(18), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(47), 4,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
  [339] = 6,
    ACTIONS(29), 1,
      anon_sym_DOT,
    STATE(43), 1,
      sym__dot,
    STATE(45), 1,
      sym_property_deref,
    ACTIONS(37), 2,
      sym_lt,
      sym_gt,
    STATE(11), 2,
      sym_property,
      aux_sym_context_repeat1,
    ACTIONS(35), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [369] = 6,
    ACTIONS(41), 1,
      anon_sym_DOT,
    STATE(43), 1,
      sym__dot,
    STATE(45), 1,
      sym_property_deref,
    ACTIONS(44), 2,
      sym_lt,
      sym_gt,
    STATE(11), 2,
      sym_property,
      aux_sym_context_repeat1,
    ACTIONS(39), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [399] = 4,
    ACTIONS(48), 1,
      anon_sym_DOT,
    STATE(54), 1,
      sym__dot,
    ACTIONS(50), 2,
      sym_lt,
      sym_gt,
    ACTIONS(46), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [422] = 3,
    ACTIONS(52), 1,
      anon_sym_e,
    ACTIONS(50), 2,
      sym_lt,
      sym_gt,
    ACTIONS(46), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [442] = 2,
    ACTIONS(56), 2,
      sym_lt,
      sym_gt,
    ACTIONS(54), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [460] = 2,
    ACTIONS(60), 2,
      sym_lt,
      sym_gt,
    ACTIONS(58), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_e,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [478] = 2,
    ACTIONS(64), 2,
      sym_lt,
      sym_gt,
    ACTIONS(62), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_e,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [496] = 2,
    ACTIONS(50), 2,
      sym_lt,
      sym_gt,
    ACTIONS(46), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [513] = 2,
    ACTIONS(68), 2,
      sym_lt,
      sym_gt,
    ACTIONS(66), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [530] = 2,
    ACTIONS(72), 2,
      sym_lt,
      sym_gt,
    ACTIONS(70), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [547] = 2,
    ACTIONS(76), 2,
      sym_lt,
      sym_gt,
    ACTIONS(74), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [564] = 2,
    ACTIONS(80), 2,
      sym_lt,
      sym_gt,
    ACTIONS(78), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [581] = 2,
    ACTIONS(84), 2,
      sym_lt,
      sym_gt,
    ACTIONS(82), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [598] = 2,
    ACTIONS(88), 2,
      sym_lt,
      sym_gt,
    ACTIONS(86), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [615] = 2,
    ACTIONS(92), 2,
      sym_lt,
      sym_gt,
    ACTIONS(90), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [632] = 5,
    STATE(5), 1,
      sym_operator,
    STATE(25), 1,
      aux_sym_expression_repeat1,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(96), 2,
      sym_lt,
      sym_gt,
    ACTIONS(99), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [655] = 2,
    ACTIONS(104), 2,
      sym_lt,
      sym_gt,
    ACTIONS(102), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [672] = 2,
    ACTIONS(108), 2,
      sym_lt,
      sym_gt,
    ACTIONS(106), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [689] = 5,
    ACTIONS(110), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      sym_operator,
    STATE(33), 1,
      aux_sym_expression_repeat1,
    ACTIONS(112), 2,
      sym_lt,
      sym_gt,
    ACTIONS(114), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [711] = 5,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_operator,
    STATE(31), 1,
      aux_sym_expression_repeat1,
    ACTIONS(112), 2,
      sym_lt,
      sym_gt,
    ACTIONS(114), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [733] = 5,
    ACTIONS(118), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      sym_operator,
    STATE(32), 1,
      aux_sym_expression_repeat1,
    ACTIONS(112), 2,
      sym_lt,
      sym_gt,
    ACTIONS(114), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [755] = 5,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_operator,
    STATE(25), 1,
      aux_sym_expression_repeat1,
    ACTIONS(112), 2,
      sym_lt,
      sym_gt,
    ACTIONS(114), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [777] = 5,
    ACTIONS(110), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      sym_operator,
    STATE(25), 1,
      aux_sym_expression_repeat1,
    ACTIONS(112), 2,
      sym_lt,
      sym_gt,
    ACTIONS(114), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [799] = 5,
    ACTIONS(122), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      sym_operator,
    STATE(25), 1,
      aux_sym_expression_repeat1,
    ACTIONS(112), 2,
      sym_lt,
      sym_gt,
    ACTIONS(114), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [821] = 2,
    ACTIONS(124), 2,
      sym_lt,
      sym_gt,
    ACTIONS(94), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [836] = 2,
    ACTIONS(128), 2,
      sym_lt,
      sym_gt,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [851] = 2,
    ACTIONS(132), 4,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
      sym_not,
    ACTIONS(130), 5,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      sym__int,
      sym_identifier,
  [865] = 4,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      sym_string_content,
    ACTIONS(139), 1,
      sym_scape_sequence,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [878] = 4,
    ACTIONS(142), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      sym_string_content,
    ACTIONS(146), 1,
      sym_scape_sequence,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [891] = 4,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      sym_string_content,
    ACTIONS(152), 1,
      sym_scape_sequence,
    STATE(38), 1,
      aux_sym_string_repeat1,
  [904] = 3,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_arguments_repeat1,
  [914] = 3,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_arguments_repeat1,
  [924] = 3,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_arguments_repeat1,
  [934] = 1,
    ACTIONS(165), 2,
      sym_asterisk,
      sym_identifier,
  [939] = 2,
    ACTIONS(167), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym__dot,
  [946] = 1,
    ACTIONS(169), 2,
      sym_asterisk,
      sym_identifier,
  [951] = 2,
    ACTIONS(171), 1,
      sym__int,
    ACTIONS(173), 1,
      anon_sym_DASH,
  [958] = 1,
    ACTIONS(160), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [963] = 1,
    ACTIONS(175), 1,
      sym__int,
  [967] = 1,
    ACTIONS(177), 1,
      sym__int,
  [971] = 1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
  [975] = 1,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
  [979] = 1,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
  [983] = 1,
    ACTIONS(185), 1,
      aux_sym__hex_token1,
  [987] = 1,
    ACTIONS(187), 1,
      sym__int,
  [991] = 1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
  [995] = 1,
    ACTIONS(191), 1,
      sym__int,
  [999] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [1003] = 1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [1007] = 1,
    ACTIONS(197), 1,
      anon_sym_COLON,
  [1011] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 95,
  [SMALL_STATE(5)] = 139,
  [SMALL_STATE(6)] = 183,
  [SMALL_STATE(7)] = 216,
  [SMALL_STATE(8)] = 257,
  [SMALL_STATE(9)] = 298,
  [SMALL_STATE(10)] = 339,
  [SMALL_STATE(11)] = 369,
  [SMALL_STATE(12)] = 399,
  [SMALL_STATE(13)] = 422,
  [SMALL_STATE(14)] = 442,
  [SMALL_STATE(15)] = 460,
  [SMALL_STATE(16)] = 478,
  [SMALL_STATE(17)] = 496,
  [SMALL_STATE(18)] = 513,
  [SMALL_STATE(19)] = 530,
  [SMALL_STATE(20)] = 547,
  [SMALL_STATE(21)] = 564,
  [SMALL_STATE(22)] = 581,
  [SMALL_STATE(23)] = 598,
  [SMALL_STATE(24)] = 615,
  [SMALL_STATE(25)] = 632,
  [SMALL_STATE(26)] = 655,
  [SMALL_STATE(27)] = 672,
  [SMALL_STATE(28)] = 689,
  [SMALL_STATE(29)] = 711,
  [SMALL_STATE(30)] = 733,
  [SMALL_STATE(31)] = 755,
  [SMALL_STATE(32)] = 777,
  [SMALL_STATE(33)] = 799,
  [SMALL_STATE(34)] = 821,
  [SMALL_STATE(35)] = 836,
  [SMALL_STATE(36)] = 851,
  [SMALL_STATE(37)] = 865,
  [SMALL_STATE(38)] = 878,
  [SMALL_STATE(39)] = 891,
  [SMALL_STATE(40)] = 904,
  [SMALL_STATE(41)] = 914,
  [SMALL_STATE(42)] = 924,
  [SMALL_STATE(43)] = 934,
  [SMALL_STATE(44)] = 939,
  [SMALL_STATE(45)] = 946,
  [SMALL_STATE(46)] = 951,
  [SMALL_STATE(47)] = 958,
  [SMALL_STATE(48)] = 963,
  [SMALL_STATE(49)] = 967,
  [SMALL_STATE(50)] = 971,
  [SMALL_STATE(51)] = 975,
  [SMALL_STATE(52)] = 979,
  [SMALL_STATE(53)] = 983,
  [SMALL_STATE(54)] = 987,
  [SMALL_STATE(55)] = 991,
  [SMALL_STATE(56)] = 995,
  [SMALL_STATE(57)] = 999,
  [SMALL_STATE(58)] = 1003,
  [SMALL_STATE(59)] = 1007,
  [SMALL_STATE(60)] = 1011,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_deref, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [189] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_pair, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 5, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
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
