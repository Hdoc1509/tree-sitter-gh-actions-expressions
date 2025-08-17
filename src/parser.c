#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_COMMA = 23,
  sym_not = 24,
  sym_lt = 25,
  sym_le = 26,
  sym_gt = 27,
  sym_ge = 28,
  sym_eq = 29,
  sym_ne = 30,
  sym_and = 31,
  sym_or = 32,
  sym_source = 33,
  sym__if_pair = 34,
  sym__evaluation = 35,
  sym_expression = 36,
  sym_delimited_expression = 37,
  sym_literal = 38,
  sym_boolean = 39,
  sym__dot = 40,
  sym_number = 41,
  sym__float = 42,
  sym__hex = 43,
  sym__exp = 44,
  sym_string = 45,
  sym_property_deref = 46,
  sym_context = 47,
  sym_property = 48,
  sym_index = 49,
  sym_function_call = 50,
  sym_arguments = 51,
  sym_operator = 52,
  sym_logical_group = 53,
  aux_sym_expression_repeat1 = 54,
  aux_sym_string_repeat1 = 55,
  aux_sym_context_repeat1 = 56,
  aux_sym_arguments_repeat1 = 57,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_index] = "index",
  [sym_function_call] = "function_call",
  [sym_arguments] = "arguments",
  [sym_operator] = "operator",
  [sym_logical_group] = "logical_group",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_index] = sym_index,
  [sym_function_call] = sym_function_call,
  [sym_arguments] = sym_arguments,
  [sym_operator] = sym_operator,
  [sym_logical_group] = sym_logical_group,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  [sym_index] = {
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
  [sym_logical_group] = {
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '!', 70,
        '$', 24,
        '&', 3,
        '\'', 50,
        '(', 66,
        ')', 67,
        '*', 55,
        ',', 68,
        '-', 45,
        '.', 42,
        '0', 43,
        ':', 33,
        '<', 71,
        '=', 8,
        '>', 73,
        '[', 64,
        ']', 65,
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
        '!', 69,
        '$', 24,
        '\'', 49,
        '(', 66,
        ')', 67,
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
      if (lookahead == '&') ADVANCE(77);
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
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(75);
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
      if (lookahead == '|') ADVANCE(78);
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
        '!', 70,
        '$', 24,
        '&', 3,
        '\'', 49,
        '(', 66,
        ')', 67,
        '*', 55,
        ',', 68,
        '-', 45,
        '.', 42,
        '0', 43,
        ':', 33,
        '<', 71,
        '=', 8,
        '>', 73,
        '[', 64,
        ']', 65,
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
        '(', 66,
        ')', 67,
        ',', 68,
        '.', 42,
        '<', 71,
        '=', 8,
        '>', 73,
        '[', 64,
        ']', 65,
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_not);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_ne);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 78:
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
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
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
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_source] = STATE(67),
    [sym__if_pair] = STATE(69),
    [anon_sym_if] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
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
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(68), 2,
      sym_expression,
      sym_delimited_expression,
    STATE(28), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(36), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [52] = 14,
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
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym__float,
    STATE(64), 1,
      sym_arguments,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(28), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(53), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [103] = 13,
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
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_not,
    STATE(15), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(28), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(39), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [151] = 13,
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
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_not,
    STATE(15), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(28), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(45), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [199] = 13,
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
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_not,
    STATE(15), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(28), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(42), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [247] = 12,
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
      anon_sym_LPAREN,
    STATE(15), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(28), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(40), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [292] = 12,
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
      anon_sym_LPAREN,
    STATE(15), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(28), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(37), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [337] = 9,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_index,
    STATE(56), 1,
      sym__dot,
    STATE(57), 1,
      sym_property_deref,
    ACTIONS(39), 2,
      sym_lt,
      sym_gt,
    STATE(12), 2,
      sym_property,
      aux_sym_context_repeat1,
    ACTIONS(31), 10,
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
  [376] = 12,
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
      anon_sym_LPAREN,
    STATE(15), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(28), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(59), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [421] = 12,
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
      anon_sym_LPAREN,
    STATE(15), 1,
      sym__float,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(28), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(46), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [466] = 8,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_index,
    STATE(56), 1,
      sym__dot,
    STATE(57), 1,
      sym_property_deref,
    ACTIONS(43), 2,
      sym_lt,
      sym_gt,
    STATE(13), 2,
      sym_property,
      aux_sym_context_repeat1,
    ACTIONS(41), 10,
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
  [502] = 8,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_index,
    STATE(56), 1,
      sym__dot,
    STATE(57), 1,
      sym_property_deref,
    ACTIONS(53), 2,
      sym_lt,
      sym_gt,
    STATE(13), 2,
      sym_property,
      aux_sym_context_repeat1,
    ACTIONS(45), 10,
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
  [538] = 4,
    ACTIONS(57), 1,
      anon_sym_DOT,
    STATE(61), 1,
      sym__dot,
    ACTIONS(59), 2,
      sym_lt,
      sym_gt,
    ACTIONS(55), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [562] = 3,
    ACTIONS(61), 1,
      anon_sym_e,
    ACTIONS(59), 2,
      sym_lt,
      sym_gt,
    ACTIONS(55), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [583] = 2,
    ACTIONS(65), 2,
      sym_lt,
      sym_gt,
    ACTIONS(63), 12,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_e,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [602] = 2,
    ACTIONS(69), 2,
      sym_lt,
      sym_gt,
    ACTIONS(67), 12,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [621] = 2,
    ACTIONS(73), 2,
      sym_lt,
      sym_gt,
    ACTIONS(71), 12,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [640] = 2,
    ACTIONS(77), 2,
      sym_lt,
      sym_gt,
    ACTIONS(75), 12,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [659] = 2,
    ACTIONS(81), 2,
      sym_lt,
      sym_gt,
    ACTIONS(79), 12,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_e,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [678] = 2,
    ACTIONS(85), 2,
      sym_lt,
      sym_gt,
    ACTIONS(83), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [696] = 2,
    ACTIONS(89), 2,
      sym_lt,
      sym_gt,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [714] = 2,
    ACTIONS(93), 2,
      sym_lt,
      sym_gt,
    ACTIONS(91), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [732] = 2,
    ACTIONS(59), 2,
      sym_lt,
      sym_gt,
    ACTIONS(55), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [750] = 2,
    ACTIONS(97), 2,
      sym_lt,
      sym_gt,
    ACTIONS(95), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [768] = 2,
    ACTIONS(101), 2,
      sym_lt,
      sym_gt,
    ACTIONS(99), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [786] = 5,
    STATE(6), 1,
      sym_operator,
    STATE(27), 1,
      aux_sym_expression_repeat1,
    ACTIONS(105), 2,
      sym_lt,
      sym_gt,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(108), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [810] = 2,
    ACTIONS(113), 2,
      sym_lt,
      sym_gt,
    ACTIONS(111), 10,
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
  [827] = 2,
    ACTIONS(117), 2,
      sym_lt,
      sym_gt,
    ACTIONS(115), 10,
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
  [844] = 2,
    ACTIONS(121), 2,
      sym_lt,
      sym_gt,
    ACTIONS(119), 10,
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
  [861] = 2,
    ACTIONS(125), 2,
      sym_lt,
      sym_gt,
    ACTIONS(123), 10,
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
  [878] = 2,
    ACTIONS(129), 2,
      sym_lt,
      sym_gt,
    ACTIONS(127), 10,
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
  [895] = 2,
    ACTIONS(133), 2,
      sym_lt,
      sym_gt,
    ACTIONS(131), 10,
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
  [912] = 2,
    ACTIONS(137), 2,
      sym_lt,
      sym_gt,
    ACTIONS(135), 10,
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
  [929] = 5,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_operator,
    STATE(27), 1,
      aux_sym_expression_repeat1,
    ACTIONS(141), 2,
      sym_lt,
      sym_gt,
    ACTIONS(143), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [951] = 5,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_operator,
    STATE(44), 1,
      aux_sym_expression_repeat1,
    ACTIONS(141), 2,
      sym_lt,
      sym_gt,
    ACTIONS(143), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [973] = 5,
    ACTIONS(147), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(6), 1,
      sym_operator,
    STATE(41), 1,
      aux_sym_expression_repeat1,
    ACTIONS(141), 2,
      sym_lt,
      sym_gt,
    ACTIONS(143), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [995] = 5,
    ACTIONS(147), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(6), 1,
      sym_operator,
    STATE(27), 1,
      aux_sym_expression_repeat1,
    ACTIONS(141), 2,
      sym_lt,
      sym_gt,
    ACTIONS(143), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1017] = 5,
    ACTIONS(149), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(6), 1,
      sym_operator,
    STATE(38), 1,
      aux_sym_expression_repeat1,
    ACTIONS(141), 2,
      sym_lt,
      sym_gt,
    ACTIONS(143), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1039] = 5,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_operator,
    STATE(35), 1,
      aux_sym_expression_repeat1,
    ACTIONS(141), 2,
      sym_lt,
      sym_gt,
    ACTIONS(143), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1061] = 5,
    ACTIONS(153), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(6), 1,
      sym_operator,
    STATE(27), 1,
      aux_sym_expression_repeat1,
    ACTIONS(141), 2,
      sym_lt,
      sym_gt,
    ACTIONS(143), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1083] = 2,
    ACTIONS(155), 2,
      sym_lt,
      sym_gt,
    ACTIONS(103), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1099] = 5,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_operator,
    STATE(27), 1,
      aux_sym_expression_repeat1,
    ACTIONS(141), 2,
      sym_lt,
      sym_gt,
    ACTIONS(143), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1121] = 5,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_operator,
    STATE(27), 1,
      aux_sym_expression_repeat1,
    ACTIONS(141), 2,
      sym_lt,
      sym_gt,
    ACTIONS(143), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1143] = 5,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_operator,
    STATE(43), 1,
      aux_sym_expression_repeat1,
    ACTIONS(141), 2,
      sym_lt,
      sym_gt,
    ACTIONS(143), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1165] = 2,
    ACTIONS(163), 2,
      sym_lt,
      sym_gt,
    ACTIONS(161), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1181] = 2,
    ACTIONS(165), 5,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      sym__int,
      sym_identifier,
    ACTIONS(167), 5,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      sym_not,
  [1196] = 7,
    ACTIONS(11), 1,
      sym__int,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_0x,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      sym__float,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(60), 2,
      sym_number,
      sym_string,
  [1220] = 4,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      sym_string_content,
    ACTIONS(173), 1,
      sym_scape_sequence,
    STATE(50), 1,
      aux_sym_string_repeat1,
  [1233] = 4,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym_string_content,
    ACTIONS(180), 1,
      sym_scape_sequence,
    STATE(50), 1,
      aux_sym_string_repeat1,
  [1246] = 4,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_string_content,
    ACTIONS(187), 1,
      sym_scape_sequence,
    STATE(49), 1,
      aux_sym_string_repeat1,
  [1259] = 3,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_arguments_repeat1,
  [1269] = 3,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_arguments_repeat1,
  [1279] = 3,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_arguments_repeat1,
  [1289] = 2,
    ACTIONS(200), 1,
      sym__int,
    ACTIONS(202), 1,
      anon_sym_DASH,
  [1296] = 1,
    ACTIONS(204), 2,
      sym_asterisk,
      sym_identifier,
  [1301] = 1,
    ACTIONS(206), 2,
      sym_asterisk,
      sym_identifier,
  [1306] = 2,
    ACTIONS(208), 1,
      anon_sym_DOT,
    STATE(66), 1,
      sym__dot,
  [1313] = 1,
    ACTIONS(195), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1318] = 1,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
  [1322] = 1,
    ACTIONS(212), 1,
      sym__int,
  [1326] = 1,
    ACTIONS(214), 1,
      sym__int,
  [1330] = 1,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
  [1334] = 1,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
  [1338] = 1,
    ACTIONS(220), 1,
      anon_sym_COLON,
  [1342] = 1,
    ACTIONS(222), 1,
      sym__int,
  [1346] = 1,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
  [1350] = 1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
  [1354] = 1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [1358] = 1,
    ACTIONS(230), 1,
      aux_sym__hex_token1,
  [1362] = 1,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
  [1366] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [1370] = 1,
    ACTIONS(236), 1,
      sym__int,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 103,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 199,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 292,
  [SMALL_STATE(9)] = 337,
  [SMALL_STATE(10)] = 376,
  [SMALL_STATE(11)] = 421,
  [SMALL_STATE(12)] = 466,
  [SMALL_STATE(13)] = 502,
  [SMALL_STATE(14)] = 538,
  [SMALL_STATE(15)] = 562,
  [SMALL_STATE(16)] = 583,
  [SMALL_STATE(17)] = 602,
  [SMALL_STATE(18)] = 621,
  [SMALL_STATE(19)] = 640,
  [SMALL_STATE(20)] = 659,
  [SMALL_STATE(21)] = 678,
  [SMALL_STATE(22)] = 696,
  [SMALL_STATE(23)] = 714,
  [SMALL_STATE(24)] = 732,
  [SMALL_STATE(25)] = 750,
  [SMALL_STATE(26)] = 768,
  [SMALL_STATE(27)] = 786,
  [SMALL_STATE(28)] = 810,
  [SMALL_STATE(29)] = 827,
  [SMALL_STATE(30)] = 844,
  [SMALL_STATE(31)] = 861,
  [SMALL_STATE(32)] = 878,
  [SMALL_STATE(33)] = 895,
  [SMALL_STATE(34)] = 912,
  [SMALL_STATE(35)] = 929,
  [SMALL_STATE(36)] = 951,
  [SMALL_STATE(37)] = 973,
  [SMALL_STATE(38)] = 995,
  [SMALL_STATE(39)] = 1017,
  [SMALL_STATE(40)] = 1039,
  [SMALL_STATE(41)] = 1061,
  [SMALL_STATE(42)] = 1083,
  [SMALL_STATE(43)] = 1099,
  [SMALL_STATE(44)] = 1121,
  [SMALL_STATE(45)] = 1143,
  [SMALL_STATE(46)] = 1165,
  [SMALL_STATE(47)] = 1181,
  [SMALL_STATE(48)] = 1196,
  [SMALL_STATE(49)] = 1220,
  [SMALL_STATE(50)] = 1233,
  [SMALL_STATE(51)] = 1246,
  [SMALL_STATE(52)] = 1259,
  [SMALL_STATE(53)] = 1269,
  [SMALL_STATE(54)] = 1279,
  [SMALL_STATE(55)] = 1289,
  [SMALL_STATE(56)] = 1296,
  [SMALL_STATE(57)] = 1301,
  [SMALL_STATE(58)] = 1306,
  [SMALL_STATE(59)] = 1313,
  [SMALL_STATE(60)] = 1318,
  [SMALL_STATE(61)] = 1322,
  [SMALL_STATE(62)] = 1326,
  [SMALL_STATE(63)] = 1330,
  [SMALL_STATE(64)] = 1334,
  [SMALL_STATE(65)] = 1338,
  [SMALL_STATE(66)] = 1342,
  [SMALL_STATE(67)] = 1346,
  [SMALL_STATE(68)] = 1350,
  [SMALL_STATE(69)] = 1354,
  [SMALL_STATE(70)] = 1358,
  [SMALL_STATE(71)] = 1362,
  [SMALL_STATE(72)] = 1366,
  [SMALL_STATE(73)] = 1370,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_group, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_group, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_group, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_group, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_group, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_group, 5, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_deref, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 4, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [224] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_pair, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 5, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
