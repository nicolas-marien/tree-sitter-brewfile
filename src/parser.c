#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_tap = 2,
  anon_sym_brew = 3,
  anon_sym_cask = 4,
  anon_sym_mas = 5,
  anon_sym_vscode = 6,
  anon_sym_COMMA = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_COLON = 12,
  anon_sym_true = 13,
  anon_sym_false = 14,
  anon_sym_nil = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_quoted_string_token1 = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_quoted_string_token2 = 19,
  aux_sym_app_id_token1 = 20,
  sym_identifier = 21,
  anon_sym_POUND = 22,
  aux_sym_comment_token1 = 23,
  sym_source_file = 24,
  sym__line = 25,
  sym_tap_directive = 26,
  sym_brew_directive = 27,
  sym_cask_directive = 28,
  sym_mas_directive = 29,
  sym_vscode_directive = 30,
  sym_options = 31,
  sym_hash_options = 32,
  sym_array_options = 33,
  sym_key_value_pair = 34,
  sym_quoted_string = 35,
  sym_app_id = 36,
  sym_number = 37,
  sym_comment = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_hash_options_repeat1 = 40,
  aux_sym_array_options_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_tap] = "tap",
  [anon_sym_brew] = "brew",
  [anon_sym_cask] = "cask",
  [anon_sym_mas] = "mas",
  [anon_sym_vscode] = "vscode",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_nil] = "nil",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_string_token2] = "quoted_string_token2",
  [aux_sym_app_id_token1] = "app_id_token1",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_tap_directive] = "tap_directive",
  [sym_brew_directive] = "brew_directive",
  [sym_cask_directive] = "cask_directive",
  [sym_mas_directive] = "mas_directive",
  [sym_vscode_directive] = "vscode_directive",
  [sym_options] = "options",
  [sym_hash_options] = "hash_options",
  [sym_array_options] = "array_options",
  [sym_key_value_pair] = "key_value_pair",
  [sym_quoted_string] = "quoted_string",
  [sym_app_id] = "app_id",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_hash_options_repeat1] = "hash_options_repeat1",
  [aux_sym_array_options_repeat1] = "array_options_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_tap] = anon_sym_tap,
  [anon_sym_brew] = anon_sym_brew,
  [anon_sym_cask] = anon_sym_cask,
  [anon_sym_mas] = anon_sym_mas,
  [anon_sym_vscode] = anon_sym_vscode,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_string_token2] = aux_sym_quoted_string_token2,
  [aux_sym_app_id_token1] = aux_sym_app_id_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_tap_directive] = sym_tap_directive,
  [sym_brew_directive] = sym_brew_directive,
  [sym_cask_directive] = sym_cask_directive,
  [sym_mas_directive] = sym_mas_directive,
  [sym_vscode_directive] = sym_vscode_directive,
  [sym_options] = sym_options,
  [sym_hash_options] = sym_hash_options,
  [sym_array_options] = sym_array_options,
  [sym_key_value_pair] = sym_key_value_pair,
  [sym_quoted_string] = sym_quoted_string,
  [sym_app_id] = sym_app_id,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_hash_options_repeat1] = aux_sym_hash_options_repeat1,
  [aux_sym_array_options_repeat1] = aux_sym_array_options_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brew] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mas] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vscode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_app_id_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_tap_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_brew_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_cask_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mas_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_vscode_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_options] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_options] = {
    .visible = true,
    .named = true,
  },
  [sym_array_options] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_app_id] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hash_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_options_repeat1] = {
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
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
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
  [29] = 29,
  [30] = 11,
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
  [59] = 56,
  [60] = 57,
  [61] = 38,
  [62] = 43,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '"', 43,
        '#', 51,
        '\'', 46,
        ',', 34,
        ':', 39,
        '[', 37,
        ']', 38,
        'b', 19,
        'c', 5,
        'f', 2,
        'm', 6,
        'n', 13,
        't', 4,
        'v', 20,
        '{', 35,
        '}', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == '}') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == 'w') ADVANCE(30);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 28,
        '"', 43,
        '#', 51,
        '\'', 46,
        ',', 34,
        'b', 19,
        'c', 5,
        'm', 6,
        't', 3,
        'v', 20,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_tap);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_brew);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_cask);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_mas);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_vscode);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_app_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 44},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 47},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 52},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 44},
  [62] = {.lex_state = 47},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_tap] = ACTIONS(1),
    [anon_sym_brew] = ACTIONS(1),
    [anon_sym_cask] = ACTIONS(1),
    [anon_sym_mas] = ACTIONS(1),
    [anon_sym_vscode] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_app_id_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym__line] = STATE(3),
    [sym_tap_directive] = STATE(47),
    [sym_brew_directive] = STATE(47),
    [sym_cask_directive] = STATE(47),
    [sym_mas_directive] = STATE(47),
    [sym_vscode_directive] = STATE(47),
    [sym_comment] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_tap] = ACTIONS(7),
    [anon_sym_brew] = ACTIONS(9),
    [anon_sym_cask] = ACTIONS(11),
    [anon_sym_mas] = ACTIONS(13),
    [anon_sym_vscode] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(24), 1,
      anon_sym_tap,
    ACTIONS(27), 1,
      anon_sym_brew,
    ACTIONS(30), 1,
      anon_sym_cask,
    ACTIONS(33), 1,
      anon_sym_mas,
    ACTIONS(36), 1,
      anon_sym_vscode,
    ACTIONS(39), 1,
      anon_sym_POUND,
    STATE(2), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(47), 6,
      sym_tap_directive,
      sym_brew_directive,
      sym_cask_directive,
      sym_mas_directive,
      sym_vscode_directive,
      sym_comment,
  [37] = 10,
    ACTIONS(7), 1,
      anon_sym_tap,
    ACTIONS(9), 1,
      anon_sym_brew,
    ACTIONS(11), 1,
      anon_sym_cask,
    ACTIONS(13), 1,
      anon_sym_mas,
    ACTIONS(15), 1,
      anon_sym_vscode,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_LF,
    STATE(2), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(47), 6,
      sym_tap_directive,
      sym_brew_directive,
      sym_cask_directive,
      sym_mas_directive,
      sym_vscode_directive,
      sym_comment,
  [74] = 2,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(48), 6,
      anon_sym_tap,
      anon_sym_brew,
      anon_sym_cask,
      anon_sym_mas,
      anon_sym_vscode,
      anon_sym_POUND,
  [87] = 8,
    ACTIONS(50), 1,
      anon_sym_LF,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      aux_sym_app_id_token1,
    STATE(16), 1,
      sym_quoted_string,
    STATE(27), 1,
      sym_app_id,
    STATE(42), 1,
      sym_options,
  [112] = 5,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      aux_sym_app_id_token1,
    STATE(31), 2,
      sym_quoted_string,
      sym_number,
    ACTIONS(60), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
  [131] = 6,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      aux_sym_app_id_token1,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_array_options_repeat1,
    STATE(17), 2,
      sym_quoted_string,
      sym_number,
  [151] = 1,
    ACTIONS(70), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_app_id_token1,
      sym_identifier,
  [161] = 6,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      aux_sym_app_id_token1,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_array_options_repeat1,
    STATE(17), 2,
      sym_quoted_string,
      sym_number,
  [181] = 6,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(82), 1,
      aux_sym_app_id_token1,
    STATE(10), 1,
      aux_sym_array_options_repeat1,
    STATE(17), 2,
      sym_quoted_string,
      sym_number,
  [201] = 1,
    ACTIONS(85), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_app_id_token1,
      sym_identifier,
  [211] = 6,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym_quoted_string,
    STATE(46), 1,
      sym_options,
  [230] = 6,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_quoted_string,
    STATE(52), 1,
      sym_options,
  [249] = 6,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym_quoted_string,
    STATE(45), 1,
      sym_options,
  [268] = 6,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_quoted_string,
    STATE(50), 1,
      sym_options,
  [287] = 5,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      aux_sym_app_id_token1,
    ACTIONS(95), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_app_id,
    STATE(37), 1,
      sym_options,
  [303] = 2,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(99), 4,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_app_id_token1,
  [313] = 3,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(54), 2,
      sym_hash_options,
      sym_array_options,
  [324] = 4,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_hash_options_repeat1,
    STATE(28), 1,
      sym_key_value_pair,
  [337] = 1,
    ACTIONS(74), 4,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_app_id_token1,
  [344] = 4,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_hash_options_repeat1,
    STATE(28), 1,
      sym_key_value_pair,
  [357] = 4,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym_hash_options_repeat1,
    STATE(28), 1,
      sym_key_value_pair,
  [370] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_LF,
    STATE(58), 1,
      sym_options,
  [380] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym_options,
  [390] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym_options,
  [400] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym_options,
  [410] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_options,
  [420] = 2,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(126), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [428] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_LF,
    STATE(49), 1,
      sym_options,
  [438] = 2,
    ACTIONS(85), 1,
      anon_sym_LF,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      aux_sym_app_id_token1,
  [446] = 1,
    ACTIONS(132), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
  [452] = 2,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(136), 1,
      anon_sym_COMMA,
  [459] = 1,
    ACTIONS(111), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [464] = 1,
    ACTIONS(138), 1,
      anon_sym_LF,
  [468] = 1,
    ACTIONS(140), 1,
      anon_sym_LF,
  [472] = 1,
    ACTIONS(142), 1,
      anon_sym_LF,
  [476] = 1,
    ACTIONS(128), 1,
      anon_sym_LF,
  [480] = 1,
    ACTIONS(144), 1,
      aux_sym_quoted_string_token1,
  [484] = 1,
    ACTIONS(146), 1,
      anon_sym_LF,
  [488] = 1,
    ACTIONS(148), 1,
      anon_sym_LF,
  [492] = 1,
    ACTIONS(150), 1,
      anon_sym_COLON,
  [496] = 1,
    ACTIONS(95), 1,
      anon_sym_LF,
  [500] = 1,
    ACTIONS(152), 1,
      aux_sym_quoted_string_token2,
  [504] = 1,
    ACTIONS(154), 1,
      anon_sym_LF,
  [508] = 1,
    ACTIONS(116), 1,
      anon_sym_LF,
  [512] = 1,
    ACTIONS(122), 1,
      anon_sym_LF,
  [516] = 1,
    ACTIONS(156), 1,
      anon_sym_LF,
  [520] = 1,
    ACTIONS(158), 1,
      anon_sym_LF,
  [524] = 1,
    ACTIONS(160), 1,
      anon_sym_LF,
  [528] = 1,
    ACTIONS(118), 1,
      anon_sym_LF,
  [532] = 1,
    ACTIONS(162), 1,
      aux_sym_comment_token1,
  [536] = 1,
    ACTIONS(120), 1,
      anon_sym_LF,
  [540] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [544] = 1,
    ACTIONS(166), 1,
      anon_sym_LF,
  [548] = 1,
    ACTIONS(168), 1,
      anon_sym_LF,
  [552] = 1,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
  [556] = 1,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
  [560] = 1,
    ACTIONS(172), 1,
      anon_sym_LF,
  [564] = 1,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
  [568] = 1,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
  [572] = 1,
    ACTIONS(176), 1,
      aux_sym_quoted_string_token1,
  [576] = 1,
    ACTIONS(178), 1,
      aux_sym_quoted_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 151,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 181,
  [SMALL_STATE(11)] = 201,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 230,
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 268,
  [SMALL_STATE(16)] = 287,
  [SMALL_STATE(17)] = 303,
  [SMALL_STATE(18)] = 313,
  [SMALL_STATE(19)] = 324,
  [SMALL_STATE(20)] = 337,
  [SMALL_STATE(21)] = 344,
  [SMALL_STATE(22)] = 357,
  [SMALL_STATE(23)] = 370,
  [SMALL_STATE(24)] = 380,
  [SMALL_STATE(25)] = 390,
  [SMALL_STATE(26)] = 400,
  [SMALL_STATE(27)] = 410,
  [SMALL_STATE(28)] = 420,
  [SMALL_STATE(29)] = 428,
  [SMALL_STATE(30)] = 438,
  [SMALL_STATE(31)] = 446,
  [SMALL_STATE(32)] = 452,
  [SMALL_STATE(33)] = 459,
  [SMALL_STATE(34)] = 464,
  [SMALL_STATE(35)] = 468,
  [SMALL_STATE(36)] = 472,
  [SMALL_STATE(37)] = 476,
  [SMALL_STATE(38)] = 480,
  [SMALL_STATE(39)] = 484,
  [SMALL_STATE(40)] = 488,
  [SMALL_STATE(41)] = 492,
  [SMALL_STATE(42)] = 496,
  [SMALL_STATE(43)] = 500,
  [SMALL_STATE(44)] = 504,
  [SMALL_STATE(45)] = 508,
  [SMALL_STATE(46)] = 512,
  [SMALL_STATE(47)] = 516,
  [SMALL_STATE(48)] = 520,
  [SMALL_STATE(49)] = 524,
  [SMALL_STATE(50)] = 528,
  [SMALL_STATE(51)] = 532,
  [SMALL_STATE(52)] = 536,
  [SMALL_STATE(53)] = 540,
  [SMALL_STATE(54)] = 544,
  [SMALL_STATE(55)] = 548,
  [SMALL_STATE(56)] = 552,
  [SMALL_STATE(57)] = 556,
  [SMALL_STATE(58)] = 560,
  [SMALL_STATE(59)] = 564,
  [SMALL_STATE(60)] = 568,
  [SMALL_STATE(61)] = 572,
  [SMALL_STATE(62)] = 576,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mas_directive, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_options_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_options_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_options_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_options_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vscode_directive, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cask_directive, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tap_directive, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brew_directive, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mas_directive, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_options_repeat1, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_options_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_options_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tap_directive, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brew_directive, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cask_directive, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vscode_directive, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_options_repeat1, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mas_directive, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 3, 0, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app_id, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app_id, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_options, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brew_directive, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cask_directive, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vscode_directive, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_options, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_options, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mas_directive, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_options, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tap_directive, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
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

TS_PUBLIC const TSLanguage *tree_sitter_brewfile(void) {
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
