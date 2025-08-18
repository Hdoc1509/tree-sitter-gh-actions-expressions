#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym__pair_token1 = 1,
  anon_sym_COLON = 2,
  anon_sym_if = 3,
  anon_sym_DOLLAR_LBRACE_LBRACE = 4,
  anon_sym_RBRACE_RBRACE = 5,
  anon_sym_true = 6,
  anon_sym_false = 7,
  sym_null = 8,
  anon_sym_DOT = 9,
  sym__int = 10,
  anon_sym_DASH = 11,
  anon_sym_0x = 12,
  aux_sym__hex_token1 = 13,
  anon_sym_e = 14,
  anon_sym_SQUOTE = 15,
  sym_string_content = 16,
  sym_scape_sequence = 17,
  sym_asterisk = 18,
  sym_identifier = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_COMMA = 24,
  sym_not = 25,
  sym_lt = 26,
  sym_le = 27,
  sym_gt = 28,
  sym_ge = 29,
  sym_eq = 30,
  sym_ne = 31,
  sym_and = 32,
  sym_or = 33,
  sym_source = 34,
  sym__pair = 35,
  sym__if_pair = 36,
  sym__evaluation = 37,
  sym_expression = 38,
  sym_delimited_expression = 39,
  sym_literal = 40,
  sym_boolean = 41,
  sym__dot = 42,
  sym_number = 43,
  sym__float = 44,
  sym__hex = 45,
  sym__exp = 46,
  sym_string = 47,
  sym_property_deref = 48,
  sym_context = 49,
  sym_property = 50,
  sym_index = 51,
  sym_function_call = 52,
  sym_arguments = 53,
  sym_operator = 54,
  sym_logical_group = 55,
  aux_sym_expression_repeat1 = 56,
  aux_sym_string_repeat1 = 57,
  aux_sym_context_repeat1 = 58,
  aux_sym_arguments_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__pair_token1] = "_pair_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_if] = "if",
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
  [sym__pair] = "_pair",
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
  [aux_sym__pair_token1] = aux_sym__pair_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_if] = anon_sym_if,
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
  [sym__pair] = sym__pair,
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
  [aux_sym__pair_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
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
  [sym__pair] = {
    .visible = false,
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
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
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
  [37] = 19,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 35,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 28,
  [52] = 20,
  [53] = 53,
  [54] = 27,
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
  [68] = 62,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 71,
  [82] = 82,
  [83] = 72,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 79,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '!', 74,
        '$', 24,
        '&', 3,
        '\'', 54,
        '(', 70,
        ')', 71,
        '*', 59,
        ',', 72,
        '-', 49,
        '.', 46,
        '0', 47,
        ':', 35,
        '<', 75,
        '=', 8,
        '>', 77,
        '[', 68,
        ']', 69,
        'e', 52,
        'f', 9,
        'i', 13,
        'n', 21,
        't', 18,
        '|', 25,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 73,
        '$', 24,
        '\'', 53,
        '(', 70,
        ')', 71,
        '-', 49,
        '0', 47,
        'f', 10,
        'n', 22,
        't', 17,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
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
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == '{') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '|') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == '}') ADVANCE(39);
      END_STATE();
    case 27:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '!', 74,
        '$', 24,
        '&', 3,
        '\'', 53,
        '(', 70,
        ')', 71,
        '*', 59,
        ',', 72,
        '-', 49,
        '.', 46,
        '0', 47,
        ':', 35,
        '<', 75,
        '=', 8,
        '>', 77,
        '[', 68,
        ']', 69,
        'e', 52,
        'f', 9,
        'i', 13,
        'n', 21,
        't', 18,
        '|', 25,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '!', 7,
        '&', 3,
        '(', 70,
        ')', 71,
        ',', 72,
        '.', 46,
        '<', 75,
        '=', 8,
        '>', 77,
        '[', 68,
        ']', 69,
        'i', 33,
        '|', 25,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '!', 7,
        '&', 3,
        ')', 71,
        ',', 72,
        '<', 75,
        '=', 8,
        '>', 77,
        ']', 69,
        'e', 52,
        '|', 25,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__pair_token1);
      if (lookahead == 'f') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__pair_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_scape_sequence);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_not);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ne);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 31},
  [28] = {.lex_state = 31},
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
  [47] = {.lex_state = 30},
  [48] = {.lex_state = 30},
  [49] = {.lex_state = 30},
  [50] = {.lex_state = 30},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
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
    [sym_source] = STATE(73),
    [sym__pair] = STATE(82),
    [sym__if_pair] = STATE(82),
    [aux_sym__pair_token1] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(13), 1,
      sym__int,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym__float,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(84), 2,
      sym_expression,
      sym_delimited_expression,
    STATE(30), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(50), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [52] = 14,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__int,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym__float,
    STATE(80), 1,
      sym_arguments,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(30), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(60), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [103] = 13,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__int,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_not,
    STATE(20), 1,
      sym__float,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(30), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(49), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [151] = 13,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__int,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      sym_not,
    STATE(20), 1,
      sym__float,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(30), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(38), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [199] = 13,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(13), 1,
      sym__int,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_not,
    STATE(52), 1,
      sym__float,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(30), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(39), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [247] = 13,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__int,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      sym_not,
    STATE(20), 1,
      sym__float,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(30), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(39), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [295] = 9,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_index,
    STATE(64), 1,
      sym__dot,
    STATE(67), 1,
      sym_property_deref,
    ACTIONS(47), 2,
      sym_lt,
      sym_gt,
    STATE(14), 2,
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
  [334] = 12,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__int,
    ACTIONS(27), 1,
      anon_sym_DASH,
    STATE(20), 1,
      sym__float,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(30), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(44), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [379] = 12,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__int,
    ACTIONS(27), 1,
      anon_sym_DASH,
    STATE(20), 1,
      sym__float,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(30), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(48), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [424] = 12,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(13), 1,
      sym__int,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym__float,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(30), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(47), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [469] = 12,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__int,
    ACTIONS(27), 1,
      anon_sym_DASH,
    STATE(20), 1,
      sym__float,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(30), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(66), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [514] = 12,
    ACTIONS(11), 1,
      sym_null,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__int,
    ACTIONS(27), 1,
      anon_sym_DASH,
    STATE(20), 1,
      sym__float,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(30), 3,
      sym_boolean,
      sym_number,
      sym_string,
    STATE(47), 5,
      sym__evaluation,
      sym_literal,
      sym_context,
      sym_function_call,
      sym_logical_group,
  [559] = 8,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_index,
    STATE(64), 1,
      sym__dot,
    STATE(67), 1,
      sym_property_deref,
    ACTIONS(51), 2,
      sym_lt,
      sym_gt,
    STATE(15), 2,
      sym_property,
      aux_sym_context_repeat1,
    ACTIONS(49), 10,
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
  [595] = 8,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_index,
    STATE(64), 1,
      sym__dot,
    STATE(67), 1,
      sym_property_deref,
    ACTIONS(61), 2,
      sym_lt,
      sym_gt,
    STATE(15), 2,
      sym_property,
      aux_sym_context_repeat1,
    ACTIONS(53), 10,
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
  [631] = 2,
    ACTIONS(65), 2,
      sym_lt,
      sym_gt,
    ACTIONS(63), 12,
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
  [650] = 2,
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
  [669] = 2,
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
  [688] = 4,
    ACTIONS(77), 1,
      anon_sym_DOT,
    STATE(81), 1,
      sym__dot,
    ACTIONS(79), 2,
      sym_lt,
      sym_gt,
    ACTIONS(75), 10,
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
  [711] = 3,
    ACTIONS(81), 1,
      anon_sym_e,
    ACTIONS(79), 2,
      sym_lt,
      sym_gt,
    ACTIONS(75), 10,
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
  [731] = 2,
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
  [749] = 2,
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
  [767] = 2,
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
  [785] = 2,
    ACTIONS(79), 2,
      sym_lt,
      sym_gt,
    ACTIONS(75), 11,
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
  [803] = 2,
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
  [821] = 2,
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
  [839] = 2,
    ACTIONS(105), 2,
      sym_lt,
      sym_gt,
    ACTIONS(103), 11,
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
  [857] = 2,
    ACTIONS(109), 2,
      sym_lt,
      sym_gt,
    ACTIONS(107), 11,
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
  [875] = 2,
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
  [892] = 2,
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
  [909] = 2,
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
  [926] = 2,
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
  [943] = 2,
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
  [960] = 2,
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
  [977] = 5,
    STATE(7), 1,
      sym_operator,
    STATE(35), 1,
      aux_sym_expression_repeat1,
    ACTIONS(135), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(137), 2,
      sym_lt,
      sym_gt,
    ACTIONS(140), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1000] = 2,
    ACTIONS(145), 2,
      sym_lt,
      sym_gt,
    ACTIONS(143), 10,
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
  [1017] = 4,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(71), 1,
      sym__dot,
    ACTIONS(79), 2,
      sym_lt,
      sym_gt,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1037] = 5,
    ACTIONS(149), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(7), 1,
      sym_operator,
    STATE(45), 1,
      aux_sym_expression_repeat1,
    ACTIONS(151), 2,
      sym_lt,
      sym_gt,
    ACTIONS(153), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1059] = 2,
    ACTIONS(155), 2,
      sym_lt,
      sym_gt,
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1075] = 5,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_operator,
    STATE(35), 1,
      aux_sym_expression_repeat1,
    ACTIONS(151), 2,
      sym_lt,
      sym_gt,
    ACTIONS(153), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1097] = 5,
    ACTIONS(159), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(7), 1,
      sym_operator,
    STATE(35), 1,
      aux_sym_expression_repeat1,
    ACTIONS(151), 2,
      sym_lt,
      sym_gt,
    ACTIONS(153), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1119] = 5,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_operator,
    STATE(42), 1,
      aux_sym_expression_repeat1,
    ACTIONS(137), 2,
      sym_lt,
      sym_gt,
    ACTIONS(140), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1141] = 5,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_operator,
    STATE(42), 1,
      aux_sym_expression_repeat1,
    ACTIONS(151), 2,
      sym_lt,
      sym_gt,
    ACTIONS(153), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1163] = 5,
    ACTIONS(163), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(7), 1,
      sym_operator,
    STATE(41), 1,
      aux_sym_expression_repeat1,
    ACTIONS(151), 2,
      sym_lt,
      sym_gt,
    ACTIONS(153), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1185] = 5,
    ACTIONS(163), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(7), 1,
      sym_operator,
    STATE(35), 1,
      aux_sym_expression_repeat1,
    ACTIONS(151), 2,
      sym_lt,
      sym_gt,
    ACTIONS(153), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1207] = 5,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_operator,
    STATE(35), 1,
      aux_sym_expression_repeat1,
    ACTIONS(151), 2,
      sym_lt,
      sym_gt,
    ACTIONS(153), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1229] = 2,
    ACTIONS(169), 2,
      sym_lt,
      sym_gt,
    ACTIONS(167), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE_RBRACE,
      anon_sym_RPAREN,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1245] = 5,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_operator,
    STATE(46), 1,
      aux_sym_expression_repeat1,
    ACTIONS(151), 2,
      sym_lt,
      sym_gt,
    ACTIONS(153), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1267] = 5,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_operator,
    STATE(40), 1,
      aux_sym_expression_repeat1,
    ACTIONS(151), 2,
      sym_lt,
      sym_gt,
    ACTIONS(153), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1289] = 5,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_operator,
    STATE(43), 1,
      aux_sym_expression_repeat1,
    ACTIONS(151), 2,
      sym_lt,
      sym_gt,
    ACTIONS(153), 6,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1311] = 2,
    ACTIONS(109), 2,
      sym_lt,
      sym_gt,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      anon_sym_e,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1326] = 3,
    ACTIONS(81), 1,
      anon_sym_e,
    ACTIONS(79), 2,
      sym_lt,
      sym_gt,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1343] = 2,
    ACTIONS(175), 5,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      sym__int,
      sym_identifier,
    ACTIONS(177), 5,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      sym_not,
  [1358] = 2,
    ACTIONS(105), 2,
      sym_lt,
      sym_gt,
    ACTIONS(103), 8,
      ts_builtin_sym_end,
      anon_sym_e,
      sym_le,
      sym_ge,
      sym_eq,
      sym_ne,
      sym_and,
      sym_or,
  [1373] = 7,
    ACTIONS(17), 1,
      anon_sym_0x,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym__int,
    ACTIONS(27), 1,
      anon_sym_DASH,
    STATE(20), 1,
      sym__float,
    STATE(24), 2,
      sym__hex,
      sym__exp,
    STATE(76), 2,
      sym_number,
      sym_string,
  [1397] = 4,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      sym_string_content,
    ACTIONS(183), 1,
      sym_scape_sequence,
    STATE(57), 1,
      aux_sym_string_repeat1,
  [1410] = 4,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      sym_string_content,
    ACTIONS(190), 1,
      sym_scape_sequence,
    STATE(57), 1,
      aux_sym_string_repeat1,
  [1423] = 4,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_string_content,
    ACTIONS(197), 1,
      sym_scape_sequence,
    STATE(56), 1,
      aux_sym_string_repeat1,
  [1436] = 3,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_arguments_repeat1,
  [1446] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_arguments_repeat1,
  [1456] = 3,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_arguments_repeat1,
  [1466] = 2,
    ACTIONS(210), 1,
      anon_sym_DOT,
    STATE(72), 1,
      sym__dot,
  [1473] = 2,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    STATE(70), 1,
      sym_delimited_expression,
  [1480] = 1,
    ACTIONS(212), 2,
      sym_asterisk,
      sym_identifier,
  [1485] = 2,
    ACTIONS(214), 1,
      sym__int,
    ACTIONS(216), 1,
      anon_sym_DASH,
  [1492] = 1,
    ACTIONS(205), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1497] = 1,
    ACTIONS(218), 2,
      sym_asterisk,
      sym_identifier,
  [1502] = 2,
    ACTIONS(220), 1,
      anon_sym_DOT,
    STATE(83), 1,
      sym__dot,
  [1509] = 1,
    ACTIONS(222), 1,
      sym__int,
  [1513] = 1,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
  [1517] = 1,
    ACTIONS(226), 1,
      sym__int,
  [1521] = 1,
    ACTIONS(228), 1,
      sym__int,
  [1525] = 1,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
  [1529] = 1,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
  [1533] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [1537] = 1,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
  [1541] = 1,
    ACTIONS(238), 1,
      anon_sym_COLON,
  [1545] = 1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
  [1549] = 1,
    ACTIONS(242), 1,
      sym__int,
  [1553] = 1,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
  [1557] = 1,
    ACTIONS(246), 1,
      sym__int,
  [1561] = 1,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
  [1565] = 1,
    ACTIONS(250), 1,
      sym__int,
  [1569] = 1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [1573] = 1,
    ACTIONS(254), 1,
      anon_sym_COLON,
  [1577] = 1,
    ACTIONS(256), 1,
      aux_sym__hex_token1,
  [1581] = 1,
    ACTIONS(258), 1,
      sym__int,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 103,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 199,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 295,
  [SMALL_STATE(9)] = 334,
  [SMALL_STATE(10)] = 379,
  [SMALL_STATE(11)] = 424,
  [SMALL_STATE(12)] = 469,
  [SMALL_STATE(13)] = 514,
  [SMALL_STATE(14)] = 559,
  [SMALL_STATE(15)] = 595,
  [SMALL_STATE(16)] = 631,
  [SMALL_STATE(17)] = 650,
  [SMALL_STATE(18)] = 669,
  [SMALL_STATE(19)] = 688,
  [SMALL_STATE(20)] = 711,
  [SMALL_STATE(21)] = 731,
  [SMALL_STATE(22)] = 749,
  [SMALL_STATE(23)] = 767,
  [SMALL_STATE(24)] = 785,
  [SMALL_STATE(25)] = 803,
  [SMALL_STATE(26)] = 821,
  [SMALL_STATE(27)] = 839,
  [SMALL_STATE(28)] = 857,
  [SMALL_STATE(29)] = 875,
  [SMALL_STATE(30)] = 892,
  [SMALL_STATE(31)] = 909,
  [SMALL_STATE(32)] = 926,
  [SMALL_STATE(33)] = 943,
  [SMALL_STATE(34)] = 960,
  [SMALL_STATE(35)] = 977,
  [SMALL_STATE(36)] = 1000,
  [SMALL_STATE(37)] = 1017,
  [SMALL_STATE(38)] = 1037,
  [SMALL_STATE(39)] = 1059,
  [SMALL_STATE(40)] = 1075,
  [SMALL_STATE(41)] = 1097,
  [SMALL_STATE(42)] = 1119,
  [SMALL_STATE(43)] = 1141,
  [SMALL_STATE(44)] = 1163,
  [SMALL_STATE(45)] = 1185,
  [SMALL_STATE(46)] = 1207,
  [SMALL_STATE(47)] = 1229,
  [SMALL_STATE(48)] = 1245,
  [SMALL_STATE(49)] = 1267,
  [SMALL_STATE(50)] = 1289,
  [SMALL_STATE(51)] = 1311,
  [SMALL_STATE(52)] = 1326,
  [SMALL_STATE(53)] = 1343,
  [SMALL_STATE(54)] = 1358,
  [SMALL_STATE(55)] = 1373,
  [SMALL_STATE(56)] = 1397,
  [SMALL_STATE(57)] = 1410,
  [SMALL_STATE(58)] = 1423,
  [SMALL_STATE(59)] = 1436,
  [SMALL_STATE(60)] = 1446,
  [SMALL_STATE(61)] = 1456,
  [SMALL_STATE(62)] = 1466,
  [SMALL_STATE(63)] = 1473,
  [SMALL_STATE(64)] = 1480,
  [SMALL_STATE(65)] = 1485,
  [SMALL_STATE(66)] = 1492,
  [SMALL_STATE(67)] = 1497,
  [SMALL_STATE(68)] = 1502,
  [SMALL_STATE(69)] = 1509,
  [SMALL_STATE(70)] = 1513,
  [SMALL_STATE(71)] = 1517,
  [SMALL_STATE(72)] = 1521,
  [SMALL_STATE(73)] = 1525,
  [SMALL_STATE(74)] = 1529,
  [SMALL_STATE(75)] = 1533,
  [SMALL_STATE(76)] = 1537,
  [SMALL_STATE(77)] = 1541,
  [SMALL_STATE(78)] = 1545,
  [SMALL_STATE(79)] = 1549,
  [SMALL_STATE(80)] = 1553,
  [SMALL_STATE(81)] = 1557,
  [SMALL_STATE(82)] = 1561,
  [SMALL_STATE(83)] = 1565,
  [SMALL_STATE(84)] = 1569,
  [SMALL_STATE(85)] = 1573,
  [SMALL_STATE(86)] = 1577,
  [SMALL_STATE(87)] = 1581,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_context_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_group, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_group, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_group, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_group, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_group, 5, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_group, 5, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_deref, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pair, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimited_expression, 5, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_pair, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
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
