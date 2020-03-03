#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 1
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym__name = 1,
  sym__begin = 2,
  anon_sym_ATauthor = 3,
  anon_sym_LT = 4,
  anon_sym_GT = 5,
  anon_sym_ATdeprecated = 6,
  anon_sym_ATsince = 7,
  anon_sym_ATglobal = 8,
  anon_sym_ATinternal = 9,
  anon_sym_ATlink = 10,
  anon_sym_ATmethod = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_ATparam = 14,
  anon_sym_ATproperty = 15,
  anon_sym_ATproperty_DASHread = 16,
  anon_sym_ATproperty_DASHwrite = 17,
  anon_sym_ATreturn = 18,
  anon_sym_ATsee = 19,
  anon_sym_ATthrows = 20,
  anon_sym_ATvar = 21,
  sym_author_name = 22,
  sym_email_address = 23,
  anon_sym_ATapi = 24,
  anon_sym_ATcategory = 25,
  anon_sym_ATcopyright = 26,
  anon_sym_ATexample = 27,
  anon_sym_ATfilesource = 28,
  anon_sym_ATignore = 29,
  anon_sym_ATlicense = 30,
  anon_sym_ATpackage = 31,
  anon_sym_ATsource = 32,
  anon_sym_ATsubpackage = 33,
  anon_sym_ATtodo = 34,
  anon_sym_ATuses = 35,
  anon_sym_ATversion = 36,
  anon_sym_LF = 37,
  anon_sym_CR_LF = 38,
  sym_text = 39,
  anon_sym_LBRACE = 40,
  anon_sym_RBRACE = 41,
  sym_version = 42,
  sym_uri = 43,
  anon_sym_PIPE = 44,
  anon_sym_LBRACK_RBRACK = 45,
  anon_sym_BSLASH = 46,
  sym_static = 47,
  anon_sym_DOLLAR = 48,
  sym__end = 49,
  sym_document = 50,
  sym_tag = 51,
  sym__author_tag = 52,
  sym__version_tag = 53,
  sym__global_tag = 54,
  sym__internal_tag = 55,
  sym__internal_inline_tag = 56,
  sym__link_tag = 57,
  sym__link_inline_tag = 58,
  sym__method_tag = 59,
  sym__variable_tag_with_type = 60,
  sym__return_tag = 61,
  sym__see_tag = 62,
  sym__see_inline_tag = 63,
  sym__throws_tag = 64,
  sym__var_tag = 65,
  sym_tag_name = 66,
  sym_description = 67,
  sym_text_line = 68,
  sym_inline_tag = 69,
  sym__type_name = 70,
  sym_param = 71,
  sym_qualified_name = 72,
  sym__namespace_name = 73,
  sym__namespace_name_as_prefix = 74,
  sym_variable_name = 75,
  aux_sym_document_repeat1 = 76,
  aux_sym__method_tag_repeat1 = 77,
  aux_sym_description_repeat1 = 78,
  aux_sym_text_line_repeat1 = 79,
  aux_sym__type_name_repeat1 = 80,
  aux_sym__namespace_name_repeat1 = 81,
  alias_sym_name = 82,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__name] = "_name",
  [sym__begin] = "_begin",
  [anon_sym_ATauthor] = "tag_name",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_ATdeprecated] = "tag_name",
  [anon_sym_ATsince] = "tag_name",
  [anon_sym_ATglobal] = "tag_name",
  [anon_sym_ATinternal] = "tag_name",
  [anon_sym_ATlink] = "tag_name",
  [anon_sym_ATmethod] = "tag_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_ATparam] = "tag_name",
  [anon_sym_ATproperty] = "tag_name",
  [anon_sym_ATproperty_DASHread] = "tag_name",
  [anon_sym_ATproperty_DASHwrite] = "tag_name",
  [anon_sym_ATreturn] = "tag_name",
  [anon_sym_ATsee] = "tag_name",
  [anon_sym_ATthrows] = "tag_name",
  [anon_sym_ATvar] = "tag_name",
  [sym_author_name] = "author_name",
  [sym_email_address] = "email_address",
  [anon_sym_ATapi] = "@api",
  [anon_sym_ATcategory] = "@category",
  [anon_sym_ATcopyright] = "@copyright",
  [anon_sym_ATexample] = "@example",
  [anon_sym_ATfilesource] = "@filesource",
  [anon_sym_ATignore] = "@ignore",
  [anon_sym_ATlicense] = "@license",
  [anon_sym_ATpackage] = "@package",
  [anon_sym_ATsource] = "@source",
  [anon_sym_ATsubpackage] = "@subpackage",
  [anon_sym_ATtodo] = "@todo",
  [anon_sym_ATuses] = "@uses",
  [anon_sym_ATversion] = "@version",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_text] = "text",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_version] = "version",
  [sym_uri] = "uri",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_BSLASH] = "\\",
  [sym_static] = "static",
  [anon_sym_DOLLAR] = "$",
  [sym__end] = "_end",
  [sym_document] = "document",
  [sym_tag] = "tag",
  [sym__author_tag] = "_author_tag",
  [sym__version_tag] = "_version_tag",
  [sym__global_tag] = "_global_tag",
  [sym__internal_tag] = "_internal_tag",
  [sym__internal_inline_tag] = "_internal_inline_tag",
  [sym__link_tag] = "_link_tag",
  [sym__link_inline_tag] = "_link_inline_tag",
  [sym__method_tag] = "_method_tag",
  [sym__variable_tag_with_type] = "_variable_tag_with_type",
  [sym__return_tag] = "_return_tag",
  [sym__see_tag] = "_see_tag",
  [sym__see_inline_tag] = "_see_inline_tag",
  [sym__throws_tag] = "_throws_tag",
  [sym__var_tag] = "_var_tag",
  [sym_tag_name] = "tag_name",
  [sym_description] = "description",
  [sym_text_line] = "text_line",
  [sym_inline_tag] = "inline_tag",
  [sym__type_name] = "_type_name",
  [sym_param] = "param",
  [sym_qualified_name] = "type",
  [sym__namespace_name] = "_namespace_name",
  [sym__namespace_name_as_prefix] = "_namespace_name_as_prefix",
  [sym_variable_name] = "variable_name",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__method_tag_repeat1] = "_method_tag_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_text_line_repeat1] = "text_line_repeat1",
  [aux_sym__type_name_repeat1] = "_type_name_repeat1",
  [aux_sym__namespace_name_repeat1] = "_namespace_name_repeat1",
  [alias_sym_name] = "name",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__name] = sym__name,
  [sym__begin] = sym__begin,
  [anon_sym_ATauthor] = sym_tag_name,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_ATdeprecated] = sym_tag_name,
  [anon_sym_ATsince] = sym_tag_name,
  [anon_sym_ATglobal] = sym_tag_name,
  [anon_sym_ATinternal] = sym_tag_name,
  [anon_sym_ATlink] = sym_tag_name,
  [anon_sym_ATmethod] = sym_tag_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_ATparam] = sym_tag_name,
  [anon_sym_ATproperty] = sym_tag_name,
  [anon_sym_ATproperty_DASHread] = sym_tag_name,
  [anon_sym_ATproperty_DASHwrite] = sym_tag_name,
  [anon_sym_ATreturn] = sym_tag_name,
  [anon_sym_ATsee] = sym_tag_name,
  [anon_sym_ATthrows] = sym_tag_name,
  [anon_sym_ATvar] = sym_tag_name,
  [sym_author_name] = sym_author_name,
  [sym_email_address] = sym_email_address,
  [anon_sym_ATapi] = anon_sym_ATapi,
  [anon_sym_ATcategory] = anon_sym_ATcategory,
  [anon_sym_ATcopyright] = anon_sym_ATcopyright,
  [anon_sym_ATexample] = anon_sym_ATexample,
  [anon_sym_ATfilesource] = anon_sym_ATfilesource,
  [anon_sym_ATignore] = anon_sym_ATignore,
  [anon_sym_ATlicense] = anon_sym_ATlicense,
  [anon_sym_ATpackage] = anon_sym_ATpackage,
  [anon_sym_ATsource] = anon_sym_ATsource,
  [anon_sym_ATsubpackage] = anon_sym_ATsubpackage,
  [anon_sym_ATtodo] = anon_sym_ATtodo,
  [anon_sym_ATuses] = anon_sym_ATuses,
  [anon_sym_ATversion] = anon_sym_ATversion,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_text] = sym_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_version] = sym_version,
  [sym_uri] = sym_uri,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_static] = sym_static,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym__end] = sym__end,
  [sym_document] = sym_document,
  [sym_tag] = sym_tag,
  [sym__author_tag] = sym__author_tag,
  [sym__version_tag] = sym__version_tag,
  [sym__global_tag] = sym__global_tag,
  [sym__internal_tag] = sym__internal_tag,
  [sym__internal_inline_tag] = sym__internal_inline_tag,
  [sym__link_tag] = sym__link_tag,
  [sym__link_inline_tag] = sym__link_inline_tag,
  [sym__method_tag] = sym__method_tag,
  [sym__variable_tag_with_type] = sym__variable_tag_with_type,
  [sym__return_tag] = sym__return_tag,
  [sym__see_tag] = sym__see_tag,
  [sym__see_inline_tag] = sym__see_inline_tag,
  [sym__throws_tag] = sym__throws_tag,
  [sym__var_tag] = sym__var_tag,
  [sym_tag_name] = sym_tag_name,
  [sym_description] = sym_description,
  [sym_text_line] = sym_text_line,
  [sym_inline_tag] = sym_inline_tag,
  [sym__type_name] = sym__type_name,
  [sym_param] = sym_param,
  [sym_qualified_name] = sym_qualified_name,
  [sym__namespace_name] = sym__namespace_name,
  [sym__namespace_name_as_prefix] = sym__namespace_name_as_prefix,
  [sym_variable_name] = sym_variable_name,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__method_tag_repeat1] = aux_sym__method_tag_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_text_line_repeat1] = aux_sym_text_line_repeat1,
  [aux_sym__type_name_repeat1] = aux_sym__type_name_repeat1,
  [aux_sym__namespace_name_repeat1] = aux_sym__namespace_name_repeat1,
  [alias_sym_name] = alias_sym_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym__begin] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATauthor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdeprecated] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsince] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATglobal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATinternal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATlink] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATmethod] = {
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
  [anon_sym_ATparam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATproperty] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATproperty_DASHread] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATproperty_DASHwrite] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATreturn] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsee] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATthrows] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATvar] = {
    .visible = true,
    .named = true,
  },
  [sym_author_name] = {
    .visible = true,
    .named = true,
  },
  [sym_email_address] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATapi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcategory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcopyright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATexample] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfilesource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATignore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATlicense] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsubpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATtodo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATuses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_static] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__author_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__version_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__global_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__internal_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__internal_inline_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__link_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__link_inline_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__method_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_tag_with_type] = {
    .visible = false,
    .named = true,
  },
  [sym__return_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__see_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__see_inline_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__throws_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__var_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_text_line] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__type_name] = {
    .visible = false,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym__namespace_name] = {
    .visible = false,
    .named = true,
  },
  [sym__namespace_name_as_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__method_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__type_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__namespace_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_description,
  },
  [2] = {
    [1] = alias_sym_name,
  },
  [3] = {
    [2] = sym_description,
  },
  [4] = {
    [2] = alias_sym_name,
  },
  [5] = {
    [3] = alias_sym_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(173);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(172)
      if (lookahead == '\r') SKIP(172)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead == '}') ADVANCE(216);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(220);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '*') SKIP(1)
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '|') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(220);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '{') ADVANCE(215);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 15:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 16:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 17:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 18:
      if (lookahead == '\t') SKIP(19)
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == ' ') SKIP(19)
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 19:
      if (lookahead == '\t') SKIP(19)
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == ' ') SKIP(19)
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 20:
      if (lookahead == '\t') SKIP(21)
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == ' ') SKIP(21)
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '@') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(194);
      END_STATE();
    case 21:
      if (lookahead == '\t') SKIP(21)
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == ' ') SKIP(21)
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '@') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(194);
      END_STATE();
    case 22:
      if (lookahead == '\t') SKIP(22)
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == ' ') SKIP(22)
      if (lookahead == '*') SKIP(22)
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(214);
      END_STATE();
    case 23:
      if (lookahead == '\t') SKIP(23)
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == ' ') SKIP(23)
      if (lookahead == '*') SKIP(23)
      if (lookahead == '{') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 24:
      if (lookahead == '\t') SKIP(24)
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == ' ') SKIP(24)
      if (lookahead == '*') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == '\t') SKIP(25)
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == ' ') SKIP(25)
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead == '}') ADVANCE(216);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(220);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 26:
      if (lookahead == '\t') SKIP(25)
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == ' ') SKIP(25)
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead == '}') ADVANCE(216);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(220);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(174);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '@') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '@') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(222);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'g') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(153);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(182);
      END_STATE();
    case 100:
      if (lookahead == 'k') ADVANCE(41);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 164:
      if (lookahead == 'w') ADVANCE(147);
      END_STATE();
    case 165:
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(198);
      END_STATE();
    case 167:
      if (lookahead == 'y') ADVANCE(187);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 172:
      if (eof) ADVANCE(173);
      if (lookahead == '\t') SKIP(172)
      if (lookahead == '\n') SKIP(172)
      if (lookahead == '\r') SKIP(172)
      if (lookahead == ' ') SKIP(172)
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead == '}') ADVANCE(216);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(220);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(143);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(23);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ']') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(211);
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
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '*') SKIP(0)
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '*') SKIP(4)
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '*') SKIP(4)
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(6)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '*') SKIP(4)
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(6)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '*') SKIP(0)
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_static);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 22},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 23},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 22},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 24},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 24},
  [131] = {.lex_state = 24},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 22},
  [136] = {.lex_state = 24},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 1},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__name] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [anon_sym_ATauthor] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_ATdeprecated] = ACTIONS(1),
    [anon_sym_ATsince] = ACTIONS(1),
    [anon_sym_ATglobal] = ACTIONS(1),
    [anon_sym_ATinternal] = ACTIONS(1),
    [anon_sym_ATlink] = ACTIONS(1),
    [anon_sym_ATmethod] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ATparam] = ACTIONS(1),
    [anon_sym_ATproperty] = ACTIONS(1),
    [anon_sym_ATproperty_DASHread] = ACTIONS(1),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(1),
    [anon_sym_ATreturn] = ACTIONS(1),
    [anon_sym_ATsee] = ACTIONS(1),
    [anon_sym_ATthrows] = ACTIONS(1),
    [anon_sym_ATvar] = ACTIONS(1),
    [anon_sym_ATapi] = ACTIONS(1),
    [anon_sym_ATcategory] = ACTIONS(1),
    [anon_sym_ATcopyright] = ACTIONS(1),
    [anon_sym_ATexample] = ACTIONS(1),
    [anon_sym_ATfilesource] = ACTIONS(1),
    [anon_sym_ATignore] = ACTIONS(1),
    [anon_sym_ATlicense] = ACTIONS(1),
    [anon_sym_ATpackage] = ACTIONS(1),
    [anon_sym_ATsource] = ACTIONS(1),
    [anon_sym_ATsubpackage] = ACTIONS(1),
    [anon_sym_ATtodo] = ACTIONS(1),
    [anon_sym_ATuses] = ACTIONS(1),
    [anon_sym_ATversion] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_static] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(112),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(58),
    [sym__version_tag] = STATE(58),
    [sym__global_tag] = STATE(58),
    [sym__internal_tag] = STATE(58),
    [sym__link_tag] = STATE(58),
    [sym__method_tag] = STATE(58),
    [sym__variable_tag_with_type] = STATE(58),
    [sym__return_tag] = STATE(58),
    [sym__see_tag] = STATE(58),
    [sym__throws_tag] = STATE(58),
    [sym__var_tag] = STATE(58),
    [sym_tag_name] = STATE(16),
    [sym_description] = STATE(5),
    [sym_text_line] = STATE(20),
    [sym_inline_tag] = STATE(77),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_description_repeat1] = STATE(20),
    [aux_sym_text_line_repeat1] = STATE(77),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATsince] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(21),
    [anon_sym_ATsee] = ACTIONS(23),
    [anon_sym_ATthrows] = ACTIONS(25),
    [anon_sym_ATvar] = ACTIONS(27),
    [anon_sym_ATapi] = ACTIONS(29),
    [anon_sym_ATcategory] = ACTIONS(29),
    [anon_sym_ATcopyright] = ACTIONS(29),
    [anon_sym_ATexample] = ACTIONS(29),
    [anon_sym_ATfilesource] = ACTIONS(29),
    [anon_sym_ATignore] = ACTIONS(29),
    [anon_sym_ATlicense] = ACTIONS(29),
    [anon_sym_ATpackage] = ACTIONS(29),
    [anon_sym_ATsource] = ACTIONS(29),
    [anon_sym_ATsubpackage] = ACTIONS(29),
    [anon_sym_ATtodo] = ACTIONS(29),
    [anon_sym_ATuses] = ACTIONS(29),
    [anon_sym_ATversion] = ACTIONS(29),
    [sym_text] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym__end] = ACTIONS(35),
  },
  [3] = {
    [sym_tag] = STATE(3),
    [sym__author_tag] = STATE(58),
    [sym__version_tag] = STATE(58),
    [sym__global_tag] = STATE(58),
    [sym__internal_tag] = STATE(58),
    [sym__link_tag] = STATE(58),
    [sym__method_tag] = STATE(58),
    [sym__variable_tag_with_type] = STATE(58),
    [sym__return_tag] = STATE(58),
    [sym__see_tag] = STATE(58),
    [sym__throws_tag] = STATE(58),
    [sym__var_tag] = STATE(58),
    [sym_tag_name] = STATE(16),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_ATauthor] = ACTIONS(37),
    [anon_sym_ATdeprecated] = ACTIONS(40),
    [anon_sym_ATsince] = ACTIONS(40),
    [anon_sym_ATglobal] = ACTIONS(43),
    [anon_sym_ATinternal] = ACTIONS(46),
    [anon_sym_ATlink] = ACTIONS(49),
    [anon_sym_ATmethod] = ACTIONS(52),
    [anon_sym_ATparam] = ACTIONS(55),
    [anon_sym_ATproperty] = ACTIONS(58),
    [anon_sym_ATproperty_DASHread] = ACTIONS(55),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(55),
    [anon_sym_ATreturn] = ACTIONS(61),
    [anon_sym_ATsee] = ACTIONS(64),
    [anon_sym_ATthrows] = ACTIONS(67),
    [anon_sym_ATvar] = ACTIONS(70),
    [anon_sym_ATapi] = ACTIONS(73),
    [anon_sym_ATcategory] = ACTIONS(73),
    [anon_sym_ATcopyright] = ACTIONS(73),
    [anon_sym_ATexample] = ACTIONS(73),
    [anon_sym_ATfilesource] = ACTIONS(73),
    [anon_sym_ATignore] = ACTIONS(73),
    [anon_sym_ATlicense] = ACTIONS(73),
    [anon_sym_ATpackage] = ACTIONS(73),
    [anon_sym_ATsource] = ACTIONS(73),
    [anon_sym_ATsubpackage] = ACTIONS(73),
    [anon_sym_ATtodo] = ACTIONS(73),
    [anon_sym_ATuses] = ACTIONS(73),
    [anon_sym_ATversion] = ACTIONS(73),
    [sym__end] = ACTIONS(76),
  },
  [4] = {
    [sym_tag] = STATE(3),
    [sym__author_tag] = STATE(58),
    [sym__version_tag] = STATE(58),
    [sym__global_tag] = STATE(58),
    [sym__internal_tag] = STATE(58),
    [sym__link_tag] = STATE(58),
    [sym__method_tag] = STATE(58),
    [sym__variable_tag_with_type] = STATE(58),
    [sym__return_tag] = STATE(58),
    [sym__see_tag] = STATE(58),
    [sym__throws_tag] = STATE(58),
    [sym__var_tag] = STATE(58),
    [sym_tag_name] = STATE(16),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATsince] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(21),
    [anon_sym_ATsee] = ACTIONS(23),
    [anon_sym_ATthrows] = ACTIONS(25),
    [anon_sym_ATvar] = ACTIONS(27),
    [anon_sym_ATapi] = ACTIONS(29),
    [anon_sym_ATcategory] = ACTIONS(29),
    [anon_sym_ATcopyright] = ACTIONS(29),
    [anon_sym_ATexample] = ACTIONS(29),
    [anon_sym_ATfilesource] = ACTIONS(29),
    [anon_sym_ATignore] = ACTIONS(29),
    [anon_sym_ATlicense] = ACTIONS(29),
    [anon_sym_ATpackage] = ACTIONS(29),
    [anon_sym_ATsource] = ACTIONS(29),
    [anon_sym_ATsubpackage] = ACTIONS(29),
    [anon_sym_ATtodo] = ACTIONS(29),
    [anon_sym_ATuses] = ACTIONS(29),
    [anon_sym_ATversion] = ACTIONS(29),
    [sym__end] = ACTIONS(78),
  },
  [5] = {
    [sym_tag] = STATE(6),
    [sym__author_tag] = STATE(58),
    [sym__version_tag] = STATE(58),
    [sym__global_tag] = STATE(58),
    [sym__internal_tag] = STATE(58),
    [sym__link_tag] = STATE(58),
    [sym__method_tag] = STATE(58),
    [sym__variable_tag_with_type] = STATE(58),
    [sym__return_tag] = STATE(58),
    [sym__see_tag] = STATE(58),
    [sym__throws_tag] = STATE(58),
    [sym__var_tag] = STATE(58),
    [sym_tag_name] = STATE(16),
    [aux_sym_document_repeat1] = STATE(6),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATsince] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(21),
    [anon_sym_ATsee] = ACTIONS(23),
    [anon_sym_ATthrows] = ACTIONS(25),
    [anon_sym_ATvar] = ACTIONS(27),
    [anon_sym_ATapi] = ACTIONS(29),
    [anon_sym_ATcategory] = ACTIONS(29),
    [anon_sym_ATcopyright] = ACTIONS(29),
    [anon_sym_ATexample] = ACTIONS(29),
    [anon_sym_ATfilesource] = ACTIONS(29),
    [anon_sym_ATignore] = ACTIONS(29),
    [anon_sym_ATlicense] = ACTIONS(29),
    [anon_sym_ATpackage] = ACTIONS(29),
    [anon_sym_ATsource] = ACTIONS(29),
    [anon_sym_ATsubpackage] = ACTIONS(29),
    [anon_sym_ATtodo] = ACTIONS(29),
    [anon_sym_ATuses] = ACTIONS(29),
    [anon_sym_ATversion] = ACTIONS(29),
    [sym__end] = ACTIONS(78),
  },
  [6] = {
    [sym_tag] = STATE(3),
    [sym__author_tag] = STATE(58),
    [sym__version_tag] = STATE(58),
    [sym__global_tag] = STATE(58),
    [sym__internal_tag] = STATE(58),
    [sym__link_tag] = STATE(58),
    [sym__method_tag] = STATE(58),
    [sym__variable_tag_with_type] = STATE(58),
    [sym__return_tag] = STATE(58),
    [sym__see_tag] = STATE(58),
    [sym__throws_tag] = STATE(58),
    [sym__var_tag] = STATE(58),
    [sym_tag_name] = STATE(16),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATsince] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(21),
    [anon_sym_ATsee] = ACTIONS(23),
    [anon_sym_ATthrows] = ACTIONS(25),
    [anon_sym_ATvar] = ACTIONS(27),
    [anon_sym_ATapi] = ACTIONS(29),
    [anon_sym_ATcategory] = ACTIONS(29),
    [anon_sym_ATcopyright] = ACTIONS(29),
    [anon_sym_ATexample] = ACTIONS(29),
    [anon_sym_ATfilesource] = ACTIONS(29),
    [anon_sym_ATignore] = ACTIONS(29),
    [anon_sym_ATlicense] = ACTIONS(29),
    [anon_sym_ATpackage] = ACTIONS(29),
    [anon_sym_ATsource] = ACTIONS(29),
    [anon_sym_ATsubpackage] = ACTIONS(29),
    [anon_sym_ATtodo] = ACTIONS(29),
    [anon_sym_ATuses] = ACTIONS(29),
    [anon_sym_ATversion] = ACTIONS(29),
    [sym__end] = ACTIONS(80),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_ATproperty,
    ACTIONS(86), 1,
      anon_sym_DOLLAR,
    STATE(15), 1,
      sym_variable_name,
    STATE(59), 1,
      sym_description,
    STATE(20), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(77), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(82), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [57] = 8,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_ATproperty,
    ACTIONS(92), 1,
      sym_version,
    STATE(55), 1,
      sym_description,
    STATE(20), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(77), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(88), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [111] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_ATproperty,
    STATE(42), 1,
      sym_description,
    STATE(20), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(77), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(94), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [162] = 5,
    ACTIONS(102), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    STATE(104), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(100), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(98), 31,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
      sym__end,
  [209] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_ATproperty,
    STATE(41), 1,
      sym_description,
    STATE(20), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(77), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(107), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [260] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_ATproperty,
    STATE(44), 1,
      sym_description,
    STATE(20), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(77), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(111), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [311] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_ATproperty,
    STATE(56), 1,
      sym_description,
    STATE(20), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(77), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(115), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [362] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_ATproperty,
    STATE(45), 1,
      sym_description,
    STATE(20), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(77), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(119), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [413] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      anon_sym_ATproperty,
    STATE(48), 1,
      sym_description,
    STATE(20), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(77), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(123), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [464] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_ATproperty,
    STATE(51), 1,
      sym_description,
    STATE(20), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(77), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(127), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [515] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_ATproperty,
    STATE(47), 1,
      sym_description,
    STATE(20), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(77), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(131), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [566] = 6,
    ACTIONS(137), 1,
      anon_sym_ATproperty,
    ACTIONS(139), 1,
      sym_text,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(18), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(77), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(135), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [614] = 5,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(145), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(104), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(100), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(98), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [660] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      anon_sym_ATproperty,
    STATE(18), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(77), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(147), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [708] = 4,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    STATE(23), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(153), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(151), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      sym__end,
  [751] = 4,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    STATE(21), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(159), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(157), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      sym__end,
  [794] = 4,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    STATE(23), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(163), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(161), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      sym__end,
  [837] = 3,
    ACTIONS(172), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(170), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(168), 31,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
      sym__end,
  [878] = 4,
    ACTIONS(174), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(163), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(161), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [920] = 4,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(159), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(157), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [962] = 3,
    ACTIONS(179), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(170), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(168), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [1002] = 2,
    ACTIONS(170), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(168), 31,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
      sym__end,
  [1040] = 4,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(153), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(151), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [1082] = 2,
    ACTIONS(163), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(161), 31,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
      sym__end,
  [1120] = 2,
    ACTIONS(183), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(181), 31,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
      sym__end,
  [1158] = 2,
    ACTIONS(170), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(168), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [1195] = 2,
    ACTIONS(163), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(161), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [1232] = 2,
    ACTIONS(183), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(181), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [1269] = 2,
    ACTIONS(187), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(185), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [1305] = 2,
    ACTIONS(191), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(189), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [1341] = 2,
    ACTIONS(195), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(193), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [1377] = 3,
    ACTIONS(199), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_ATproperty,
    ACTIONS(197), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1414] = 3,
    ACTIONS(205), 1,
      anon_sym_ATproperty,
    ACTIONS(207), 1,
      sym_author_name,
    ACTIONS(203), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1451] = 2,
    ACTIONS(211), 1,
      anon_sym_ATproperty,
    ACTIONS(209), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1485] = 2,
    ACTIONS(215), 1,
      anon_sym_ATproperty,
    ACTIONS(213), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1519] = 2,
    ACTIONS(219), 1,
      anon_sym_ATproperty,
    ACTIONS(217), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1553] = 2,
    ACTIONS(223), 1,
      anon_sym_ATproperty,
    ACTIONS(221), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1587] = 2,
    ACTIONS(227), 1,
      anon_sym_ATproperty,
    ACTIONS(225), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1621] = 2,
    ACTIONS(231), 1,
      anon_sym_ATproperty,
    ACTIONS(229), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1655] = 2,
    ACTIONS(235), 1,
      anon_sym_ATproperty,
    ACTIONS(233), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1689] = 2,
    ACTIONS(239), 1,
      anon_sym_ATproperty,
    ACTIONS(237), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1723] = 2,
    ACTIONS(243), 1,
      anon_sym_ATproperty,
    ACTIONS(241), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1757] = 2,
    ACTIONS(247), 1,
      anon_sym_ATproperty,
    ACTIONS(245), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1791] = 2,
    ACTIONS(251), 1,
      anon_sym_ATproperty,
    ACTIONS(249), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1825] = 2,
    ACTIONS(255), 1,
      anon_sym_ATproperty,
    ACTIONS(253), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1859] = 2,
    ACTIONS(259), 1,
      anon_sym_ATproperty,
    ACTIONS(257), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1893] = 2,
    ACTIONS(263), 1,
      anon_sym_ATproperty,
    ACTIONS(261), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1927] = 2,
    ACTIONS(267), 1,
      anon_sym_ATproperty,
    ACTIONS(265), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1961] = 2,
    ACTIONS(109), 1,
      anon_sym_ATproperty,
    ACTIONS(107), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [1995] = 2,
    ACTIONS(271), 1,
      anon_sym_ATproperty,
    ACTIONS(269), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [2029] = 2,
    ACTIONS(275), 1,
      anon_sym_ATproperty,
    ACTIONS(273), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [2063] = 2,
    ACTIONS(129), 1,
      anon_sym_ATproperty,
    ACTIONS(127), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [2097] = 2,
    ACTIONS(125), 1,
      anon_sym_ATproperty,
    ACTIONS(123), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym__end,
  [2131] = 10,
    ACTIONS(277), 1,
      sym__name,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      sym_variable_name,
    STATE(99), 1,
      sym_qualified_name,
    STATE(103), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(117), 1,
      sym__namespace_name,
    STATE(61), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2163] = 10,
    ACTIONS(277), 1,
      sym__name,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_variable_name,
    STATE(99), 1,
      sym_qualified_name,
    STATE(103), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(117), 1,
      sym__namespace_name,
    STATE(63), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2195] = 10,
    ACTIONS(277), 1,
      sym__name,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_variable_name,
    STATE(99), 1,
      sym_qualified_name,
    STATE(103), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(117), 1,
      sym__namespace_name,
    STATE(63), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2227] = 10,
    ACTIONS(289), 1,
      sym__name,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    ACTIONS(294), 1,
      anon_sym_BSLASH,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      sym_variable_name,
    STATE(99), 1,
      sym_qualified_name,
    STATE(103), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(117), 1,
      sym__namespace_name,
    STATE(63), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2259] = 10,
    ACTIONS(277), 1,
      sym__name,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_variable_name,
    STATE(99), 1,
      sym_qualified_name,
    STATE(103), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(117), 1,
      sym__namespace_name,
    STATE(62), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2291] = 10,
    ACTIONS(277), 1,
      sym__name,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_variable_name,
    STATE(99), 1,
      sym_qualified_name,
    STATE(103), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(117), 1,
      sym__namespace_name,
    STATE(66), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2323] = 10,
    ACTIONS(277), 1,
      sym__name,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_variable_name,
    STATE(99), 1,
      sym_qualified_name,
    STATE(103), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(117), 1,
      sym__namespace_name,
    STATE(63), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2355] = 7,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(306), 1,
      sym__name,
    ACTIONS(308), 1,
      sym_static,
    STATE(93), 1,
      sym_qualified_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(117), 1,
      sym__namespace_name,
    STATE(132), 1,
      sym__type_name,
  [2377] = 5,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(310), 1,
      sym_text,
    STATE(50), 1,
      sym_description,
    STATE(20), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(77), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [2395] = 4,
    ACTIONS(314), 1,
      sym_text,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(69), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [2410] = 6,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(320), 1,
      sym__name,
    STATE(7), 1,
      sym__type_name,
    STATE(22), 1,
      sym_qualified_name,
    STATE(117), 1,
      sym__namespace_name,
    STATE(138), 1,
      sym__namespace_name_as_prefix,
  [2429] = 5,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(104), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(98), 2,
      sym__name,
      anon_sym_PIPE,
  [2446] = 5,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(98), 2,
      sym__name,
      anon_sym_PIPE,
  [2463] = 6,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(328), 1,
      sym__name,
    STATE(93), 1,
      sym_qualified_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(114), 1,
      sym__type_name,
    STATE(117), 1,
      sym__namespace_name,
  [2482] = 6,
    ACTIONS(277), 1,
      sym__name,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    STATE(99), 1,
      sym_qualified_name,
    STATE(108), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(117), 1,
      sym__namespace_name,
  [2501] = 6,
    ACTIONS(277), 1,
      sym__name,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    STATE(99), 1,
      sym_qualified_name,
    STATE(102), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(117), 1,
      sym__namespace_name,
  [2520] = 6,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(330), 1,
      sym__name,
    STATE(17), 1,
      sym__type_name,
    STATE(26), 1,
      sym_qualified_name,
    STATE(117), 1,
      sym__namespace_name,
    STATE(133), 1,
      sym__namespace_name_as_prefix,
  [2539] = 4,
    ACTIONS(334), 1,
      sym_text,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(69), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [2554] = 6,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(330), 1,
      sym__name,
    STATE(13), 1,
      sym__type_name,
    STATE(26), 1,
      sym_qualified_name,
    STATE(117), 1,
      sym__namespace_name,
    STATE(133), 1,
      sym__namespace_name_as_prefix,
  [2573] = 4,
    ACTIONS(338), 1,
      anon_sym_ATinternal,
    ACTIONS(340), 1,
      anon_sym_ATlink,
    ACTIONS(342), 1,
      anon_sym_ATsee,
    STATE(129), 3,
      sym__internal_inline_tag,
      sym__link_inline_tag,
      sym__see_inline_tag,
  [2588] = 5,
    ACTIONS(277), 1,
      sym__name,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    STATE(95), 1,
      sym_qualified_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(117), 1,
      sym__namespace_name,
  [2604] = 4,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(104), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(98), 2,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2618] = 5,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(330), 1,
      sym__name,
    STATE(33), 1,
      sym_qualified_name,
    STATE(117), 1,
      sym__namespace_name,
    STATE(133), 1,
      sym__namespace_name_as_prefix,
  [2634] = 4,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(104), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(98), 2,
      sym__name,
      anon_sym_PIPE,
  [2648] = 5,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(320), 1,
      sym__name,
    STATE(30), 1,
      sym_qualified_name,
    STATE(117), 1,
      sym__namespace_name,
    STATE(138), 1,
      sym__namespace_name_as_prefix,
  [2664] = 5,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(344), 1,
      sym__name,
    STATE(95), 1,
      sym_qualified_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(117), 1,
      sym__namespace_name,
  [2680] = 1,
    ACTIONS(346), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_text,
      anon_sym_LBRACE,
  [2687] = 1,
    ACTIONS(348), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [2694] = 1,
    ACTIONS(185), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [2701] = 2,
    ACTIONS(350), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(168), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2710] = 1,
    ACTIONS(352), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [2717] = 3,
    ACTIONS(161), 1,
      anon_sym_DOLLAR,
    ACTIONS(354), 1,
      anon_sym_PIPE,
    STATE(91), 1,
      aux_sym__type_name_repeat1,
  [2727] = 1,
    ACTIONS(168), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2733] = 3,
    ACTIONS(157), 1,
      sym__name,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym__type_name_repeat1,
  [2743] = 1,
    ACTIONS(181), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2749] = 1,
    ACTIONS(161), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2755] = 3,
    ACTIONS(161), 1,
      sym__name,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    STATE(96), 1,
      aux_sym__type_name_repeat1,
  [2765] = 3,
    ACTIONS(151), 1,
      anon_sym_DOLLAR,
    ACTIONS(362), 1,
      anon_sym_PIPE,
    STATE(91), 1,
      aux_sym__type_name_repeat1,
  [2775] = 3,
    ACTIONS(151), 1,
      sym__name,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    STATE(96), 1,
      aux_sym__type_name_repeat1,
  [2785] = 3,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    ACTIONS(362), 1,
      anon_sym_PIPE,
    STATE(97), 1,
      aux_sym__type_name_repeat1,
  [2795] = 2,
    ACTIONS(364), 1,
      sym__name,
    STATE(119), 1,
      sym__namespace_name,
  [2802] = 2,
    ACTIONS(367), 1,
      anon_sym_BSLASH,
    STATE(101), 1,
      aux_sym__namespace_name_repeat1,
  [2809] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR,
    STATE(14), 1,
      sym_variable_name,
  [2816] = 2,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    STATE(87), 1,
      sym_variable_name,
  [2823] = 2,
    ACTIONS(370), 1,
      anon_sym_BSLASH,
    STATE(101), 1,
      aux_sym__namespace_name_repeat1,
  [2830] = 2,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    STATE(104), 1,
      aux_sym__namespace_name_repeat1,
  [2837] = 2,
    ACTIONS(373), 1,
      sym_text,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
  [2844] = 2,
    ACTIONS(377), 1,
      sym_text,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
  [2851] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym_variable_name,
  [2858] = 1,
    ACTIONS(381), 1,
      sym__name,
  [2862] = 1,
    ACTIONS(383), 1,
      sym__name,
  [2866] = 1,
    ACTIONS(385), 1,
      sym__name,
  [2870] = 1,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
  [2874] = 1,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
  [2878] = 1,
    ACTIONS(389), 1,
      sym__name,
  [2882] = 1,
    ACTIONS(391), 1,
      sym__name,
  [2886] = 1,
    ACTIONS(393), 1,
      sym__name,
  [2890] = 1,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
  [2894] = 1,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
  [2898] = 1,
    ACTIONS(399), 1,
      anon_sym_BSLASH,
  [2902] = 1,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
  [2906] = 1,
    ACTIONS(403), 1,
      anon_sym_BSLASH,
  [2910] = 1,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
  [2914] = 1,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
  [2918] = 1,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
  [2922] = 1,
    ACTIONS(411), 1,
      anon_sym_GT,
  [2926] = 1,
    ACTIONS(413), 1,
      sym_email_address,
  [2930] = 1,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
  [2934] = 1,
    ACTIONS(417), 1,
      sym_uri,
  [2938] = 1,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
  [2942] = 1,
    ACTIONS(421), 1,
      sym_uri,
  [2946] = 1,
    ACTIONS(423), 1,
      sym_uri,
  [2950] = 1,
    ACTIONS(425), 1,
      sym__name,
  [2954] = 1,
    ACTIONS(427), 1,
      sym__name,
  [2958] = 1,
    ACTIONS(429), 1,
      sym__name,
  [2962] = 1,
    ACTIONS(431), 1,
      sym_text,
  [2966] = 1,
    ACTIONS(433), 1,
      sym_uri,
  [2970] = 1,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
  [2974] = 1,
    ACTIONS(437), 1,
      sym__name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 57,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 209,
  [SMALL_STATE(12)] = 260,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 362,
  [SMALL_STATE(15)] = 413,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 515,
  [SMALL_STATE(18)] = 566,
  [SMALL_STATE(19)] = 614,
  [SMALL_STATE(20)] = 660,
  [SMALL_STATE(21)] = 708,
  [SMALL_STATE(22)] = 751,
  [SMALL_STATE(23)] = 794,
  [SMALL_STATE(24)] = 837,
  [SMALL_STATE(25)] = 878,
  [SMALL_STATE(26)] = 920,
  [SMALL_STATE(27)] = 962,
  [SMALL_STATE(28)] = 1002,
  [SMALL_STATE(29)] = 1040,
  [SMALL_STATE(30)] = 1082,
  [SMALL_STATE(31)] = 1120,
  [SMALL_STATE(32)] = 1158,
  [SMALL_STATE(33)] = 1195,
  [SMALL_STATE(34)] = 1232,
  [SMALL_STATE(35)] = 1269,
  [SMALL_STATE(36)] = 1305,
  [SMALL_STATE(37)] = 1341,
  [SMALL_STATE(38)] = 1377,
  [SMALL_STATE(39)] = 1414,
  [SMALL_STATE(40)] = 1451,
  [SMALL_STATE(41)] = 1485,
  [SMALL_STATE(42)] = 1519,
  [SMALL_STATE(43)] = 1553,
  [SMALL_STATE(44)] = 1587,
  [SMALL_STATE(45)] = 1621,
  [SMALL_STATE(46)] = 1655,
  [SMALL_STATE(47)] = 1689,
  [SMALL_STATE(48)] = 1723,
  [SMALL_STATE(49)] = 1757,
  [SMALL_STATE(50)] = 1791,
  [SMALL_STATE(51)] = 1825,
  [SMALL_STATE(52)] = 1859,
  [SMALL_STATE(53)] = 1893,
  [SMALL_STATE(54)] = 1927,
  [SMALL_STATE(55)] = 1961,
  [SMALL_STATE(56)] = 1995,
  [SMALL_STATE(57)] = 2029,
  [SMALL_STATE(58)] = 2063,
  [SMALL_STATE(59)] = 2097,
  [SMALL_STATE(60)] = 2131,
  [SMALL_STATE(61)] = 2163,
  [SMALL_STATE(62)] = 2195,
  [SMALL_STATE(63)] = 2227,
  [SMALL_STATE(64)] = 2259,
  [SMALL_STATE(65)] = 2291,
  [SMALL_STATE(66)] = 2323,
  [SMALL_STATE(67)] = 2355,
  [SMALL_STATE(68)] = 2377,
  [SMALL_STATE(69)] = 2395,
  [SMALL_STATE(70)] = 2410,
  [SMALL_STATE(71)] = 2429,
  [SMALL_STATE(72)] = 2446,
  [SMALL_STATE(73)] = 2463,
  [SMALL_STATE(74)] = 2482,
  [SMALL_STATE(75)] = 2501,
  [SMALL_STATE(76)] = 2520,
  [SMALL_STATE(77)] = 2539,
  [SMALL_STATE(78)] = 2554,
  [SMALL_STATE(79)] = 2573,
  [SMALL_STATE(80)] = 2588,
  [SMALL_STATE(81)] = 2604,
  [SMALL_STATE(82)] = 2618,
  [SMALL_STATE(83)] = 2634,
  [SMALL_STATE(84)] = 2648,
  [SMALL_STATE(85)] = 2664,
  [SMALL_STATE(86)] = 2680,
  [SMALL_STATE(87)] = 2687,
  [SMALL_STATE(88)] = 2694,
  [SMALL_STATE(89)] = 2701,
  [SMALL_STATE(90)] = 2710,
  [SMALL_STATE(91)] = 2717,
  [SMALL_STATE(92)] = 2727,
  [SMALL_STATE(93)] = 2733,
  [SMALL_STATE(94)] = 2743,
  [SMALL_STATE(95)] = 2749,
  [SMALL_STATE(96)] = 2755,
  [SMALL_STATE(97)] = 2765,
  [SMALL_STATE(98)] = 2775,
  [SMALL_STATE(99)] = 2785,
  [SMALL_STATE(100)] = 2795,
  [SMALL_STATE(101)] = 2802,
  [SMALL_STATE(102)] = 2809,
  [SMALL_STATE(103)] = 2816,
  [SMALL_STATE(104)] = 2823,
  [SMALL_STATE(105)] = 2830,
  [SMALL_STATE(106)] = 2837,
  [SMALL_STATE(107)] = 2844,
  [SMALL_STATE(108)] = 2851,
  [SMALL_STATE(109)] = 2858,
  [SMALL_STATE(110)] = 2862,
  [SMALL_STATE(111)] = 2866,
  [SMALL_STATE(112)] = 2870,
  [SMALL_STATE(113)] = 2874,
  [SMALL_STATE(114)] = 2878,
  [SMALL_STATE(115)] = 2882,
  [SMALL_STATE(116)] = 2886,
  [SMALL_STATE(117)] = 2890,
  [SMALL_STATE(118)] = 2894,
  [SMALL_STATE(119)] = 2898,
  [SMALL_STATE(120)] = 2902,
  [SMALL_STATE(121)] = 2906,
  [SMALL_STATE(122)] = 2910,
  [SMALL_STATE(123)] = 2914,
  [SMALL_STATE(124)] = 2918,
  [SMALL_STATE(125)] = 2922,
  [SMALL_STATE(126)] = 2926,
  [SMALL_STATE(127)] = 2930,
  [SMALL_STATE(128)] = 2934,
  [SMALL_STATE(129)] = 2938,
  [SMALL_STATE(130)] = 2942,
  [SMALL_STATE(131)] = 2946,
  [SMALL_STATE(132)] = 2950,
  [SMALL_STATE(133)] = 2954,
  [SMALL_STATE(134)] = 2958,
  [SMALL_STATE(135)] = 2962,
  [SMALL_STATE(136)] = 2966,
  [SMALL_STATE(137)] = 2970,
  [SMALL_STATE(138)] = 2974,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(39),
  [7] = {.count = 1, .reusable = true}, SHIFT(8),
  [9] = {.count = 1, .reusable = true}, SHIFT(74),
  [11] = {.count = 1, .reusable = true}, SHIFT(9),
  [13] = {.count = 1, .reusable = true}, SHIFT(136),
  [15] = {.count = 1, .reusable = true}, SHIFT(67),
  [17] = {.count = 1, .reusable = true}, SHIFT(75),
  [19] = {.count = 1, .reusable = false}, SHIFT(75),
  [21] = {.count = 1, .reusable = true}, SHIFT(76),
  [23] = {.count = 1, .reusable = true}, SHIFT(128),
  [25] = {.count = 1, .reusable = true}, SHIFT(78),
  [27] = {.count = 1, .reusable = true}, SHIFT(70),
  [29] = {.count = 1, .reusable = true}, SHIFT(36),
  [31] = {.count = 1, .reusable = false}, SHIFT(77),
  [33] = {.count = 1, .reusable = true}, SHIFT(79),
  [35] = {.count = 1, .reusable = true}, SHIFT(123),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(136),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [58] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(128),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [76] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [78] = {.count = 1, .reusable = true}, SHIFT(127),
  [80] = {.count = 1, .reusable = true}, SHIFT(122),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 2),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 2),
  [86] = {.count = 1, .reusable = true}, SHIFT(109),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 1),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 1),
  [92] = {.count = 1, .reusable = true}, SHIFT(11),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 1),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 1),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 1),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 1),
  [102] = {.count = 1, .reusable = true}, SHIFT(28),
  [104] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 1), SHIFT(110),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 2),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 2),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 2),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 2),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 2),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 3),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 3),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 3),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 3),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 2),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [139] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(77),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(79),
  [145] = {.count = 1, .reusable = true}, SHIFT(32),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 2),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 2),
  [155] = {.count = 1, .reusable = true}, SHIFT(84),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 1),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 1),
  [161] = {.count = 1, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(aux_sym__type_name_repeat1, 2),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(84),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 2),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 2),
  [172] = {.count = 1, .reusable = true}, SHIFT(31),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(82),
  [177] = {.count = 1, .reusable = true}, SHIFT(82),
  [179] = {.count = 1, .reusable = true}, SHIFT(34),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 3),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 3),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_variable_name, 2),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_variable_name, 2),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_tag_name, 1),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_tag_name, 1),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_text_line, 2),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_text_line, 2),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 2),
  [199] = {.count = 1, .reusable = true}, SHIFT(126),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 2),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 1),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 1),
  [207] = {.count = 1, .reusable = true}, SHIFT(38),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 3),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 2),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 3),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 3),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 4),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 4),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 3),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 3),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 4),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 4),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 5),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 5),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym__see_tag, 3),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym__see_tag, 3),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym__global_tag, 3),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym__global_tag, 3),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 3),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 3),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [277] = {.count = 1, .reusable = true}, SHIFT(81),
  [279] = {.count = 1, .reusable = true}, SHIFT(46),
  [281] = {.count = 1, .reusable = true}, SHIFT(100),
  [283] = {.count = 1, .reusable = true}, SHIFT(134),
  [285] = {.count = 1, .reusable = true}, SHIFT(43),
  [287] = {.count = 1, .reusable = true}, SHIFT(57),
  [289] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(81),
  [292] = {.count = 1, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(100),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(134),
  [300] = {.count = 1, .reusable = true}, SHIFT(52),
  [302] = {.count = 1, .reusable = true}, SHIFT(53),
  [304] = {.count = 1, .reusable = true}, SHIFT(40),
  [306] = {.count = 1, .reusable = false}, SHIFT(72),
  [308] = {.count = 1, .reusable = false}, SHIFT(73),
  [310] = {.count = 1, .reusable = true}, SHIFT(77),
  [312] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2),
  [314] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(69),
  [317] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(79),
  [320] = {.count = 1, .reusable = true}, SHIFT(10),
  [322] = {.count = 1, .reusable = true}, SHIFT(64),
  [324] = {.count = 1, .reusable = true}, SHIFT(92),
  [326] = {.count = 1, .reusable = true}, SHIFT(65),
  [328] = {.count = 1, .reusable = true}, SHIFT(71),
  [330] = {.count = 1, .reusable = true}, SHIFT(19),
  [332] = {.count = 1, .reusable = false}, SHIFT(37),
  [334] = {.count = 1, .reusable = false}, SHIFT(69),
  [336] = {.count = 1, .reusable = false}, SHIFT(79),
  [338] = {.count = 1, .reusable = true}, SHIFT(135),
  [340] = {.count = 1, .reusable = true}, SHIFT(131),
  [342] = {.count = 1, .reusable = true}, SHIFT(130),
  [344] = {.count = 1, .reusable = true}, SHIFT(83),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 3),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_param, 2),
  [350] = {.count = 1, .reusable = true}, SHIFT(94),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_param, 1),
  [354] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(80),
  [357] = {.count = 1, .reusable = true}, SHIFT(85),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(85),
  [362] = {.count = 1, .reusable = true}, SHIFT(80),
  [364] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 1), SHIFT(105),
  [367] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2), SHIFT_REPEAT(110),
  [370] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 2), SHIFT(110),
  [373] = {.count = 1, .reusable = true}, SHIFT(118),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 2),
  [377] = {.count = 1, .reusable = true}, SHIFT(137),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 2),
  [381] = {.count = 1, .reusable = true}, SHIFT(35),
  [383] = {.count = 1, .reusable = true}, SHIFT(121),
  [385] = {.count = 1, .reusable = true}, SHIFT(89),
  [387] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [389] = {.count = 1, .reusable = true}, SHIFT(120),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 2),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 3),
  [395] = {.count = 1, .reusable = true}, SHIFT(115),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 3, .production_id = 3),
  [399] = {.count = 1, .reusable = true}, SHIFT(116),
  [401] = {.count = 1, .reusable = true}, SHIFT(60),
  [403] = {.count = 1, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym__internal_inline_tag, 2, .production_id = 1),
  [411] = {.count = 1, .reusable = true}, SHIFT(49),
  [413] = {.count = 1, .reusable = true}, SHIFT(125),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [417] = {.count = 1, .reusable = true}, SHIFT(68),
  [419] = {.count = 1, .reusable = true}, SHIFT(86),
  [421] = {.count = 1, .reusable = true}, SHIFT(106),
  [423] = {.count = 1, .reusable = true}, SHIFT(107),
  [425] = {.count = 1, .reusable = true}, SHIFT(113),
  [427] = {.count = 1, .reusable = true}, SHIFT(27),
  [429] = {.count = 1, .reusable = true}, SHIFT(88),
  [431] = {.count = 1, .reusable = true}, SHIFT(124),
  [433] = {.count = 1, .reusable = true}, SHIFT(12),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3, .production_id = 3),
  [437] = {.count = 1, .reusable = true}, SHIFT(24),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_phpdoc(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__name,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
