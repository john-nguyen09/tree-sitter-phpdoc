#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 1
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

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
      if (lookahead == '[') ADVANCE(213);
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
      if (lookahead == '[') ADVANCE(213);
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
      if (lookahead == '[') ADVANCE(213);
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
      if (lookahead == '[') ADVANCE(213);
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
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 21},
  [45] = {.lex_state = 21},
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
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 23},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 22},
  [109] = {.lex_state = 22},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 24},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 24},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 22},
  [134] = {.lex_state = 24},
  [135] = {.lex_state = 24},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 24},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
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
    [sym_document] = STATE(141),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(5),
    [sym__author_tag] = STATE(51),
    [sym__version_tag] = STATE(51),
    [sym__global_tag] = STATE(51),
    [sym__internal_tag] = STATE(51),
    [sym__link_tag] = STATE(51),
    [sym__method_tag] = STATE(51),
    [sym__variable_tag_with_type] = STATE(51),
    [sym__return_tag] = STATE(51),
    [sym__see_tag] = STATE(51),
    [sym__throws_tag] = STATE(51),
    [sym__var_tag] = STATE(51),
    [sym_tag_name] = STATE(19),
    [sym_description] = STATE(6),
    [sym_text_line] = STATE(24),
    [sym_inline_tag] = STATE(76),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_description_repeat1] = STATE(24),
    [aux_sym_text_line_repeat1] = STATE(76),
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
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(51),
    [sym__version_tag] = STATE(51),
    [sym__global_tag] = STATE(51),
    [sym__internal_tag] = STATE(51),
    [sym__link_tag] = STATE(51),
    [sym__method_tag] = STATE(51),
    [sym__variable_tag_with_type] = STATE(51),
    [sym__return_tag] = STATE(51),
    [sym__see_tag] = STATE(51),
    [sym__throws_tag] = STATE(51),
    [sym__var_tag] = STATE(51),
    [sym_tag_name] = STATE(19),
    [aux_sym_document_repeat1] = STATE(4),
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
    [sym__end] = ACTIONS(37),
  },
  [4] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(51),
    [sym__version_tag] = STATE(51),
    [sym__global_tag] = STATE(51),
    [sym__internal_tag] = STATE(51),
    [sym__link_tag] = STATE(51),
    [sym__method_tag] = STATE(51),
    [sym__variable_tag_with_type] = STATE(51),
    [sym__return_tag] = STATE(51),
    [sym__see_tag] = STATE(51),
    [sym__throws_tag] = STATE(51),
    [sym__var_tag] = STATE(51),
    [sym_tag_name] = STATE(19),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATauthor] = ACTIONS(39),
    [anon_sym_ATdeprecated] = ACTIONS(42),
    [anon_sym_ATsince] = ACTIONS(42),
    [anon_sym_ATglobal] = ACTIONS(45),
    [anon_sym_ATinternal] = ACTIONS(48),
    [anon_sym_ATlink] = ACTIONS(51),
    [anon_sym_ATmethod] = ACTIONS(54),
    [anon_sym_ATparam] = ACTIONS(57),
    [anon_sym_ATproperty] = ACTIONS(60),
    [anon_sym_ATproperty_DASHread] = ACTIONS(57),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(57),
    [anon_sym_ATreturn] = ACTIONS(63),
    [anon_sym_ATsee] = ACTIONS(66),
    [anon_sym_ATthrows] = ACTIONS(69),
    [anon_sym_ATvar] = ACTIONS(72),
    [anon_sym_ATapi] = ACTIONS(75),
    [anon_sym_ATcategory] = ACTIONS(75),
    [anon_sym_ATcopyright] = ACTIONS(75),
    [anon_sym_ATexample] = ACTIONS(75),
    [anon_sym_ATfilesource] = ACTIONS(75),
    [anon_sym_ATignore] = ACTIONS(75),
    [anon_sym_ATlicense] = ACTIONS(75),
    [anon_sym_ATpackage] = ACTIONS(75),
    [anon_sym_ATsource] = ACTIONS(75),
    [anon_sym_ATsubpackage] = ACTIONS(75),
    [anon_sym_ATtodo] = ACTIONS(75),
    [anon_sym_ATuses] = ACTIONS(75),
    [anon_sym_ATversion] = ACTIONS(75),
    [sym__end] = ACTIONS(78),
  },
  [5] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(51),
    [sym__version_tag] = STATE(51),
    [sym__global_tag] = STATE(51),
    [sym__internal_tag] = STATE(51),
    [sym__link_tag] = STATE(51),
    [sym__method_tag] = STATE(51),
    [sym__variable_tag_with_type] = STATE(51),
    [sym__return_tag] = STATE(51),
    [sym__see_tag] = STATE(51),
    [sym__throws_tag] = STATE(51),
    [sym__var_tag] = STATE(51),
    [sym_tag_name] = STATE(19),
    [aux_sym_document_repeat1] = STATE(4),
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
  [6] = {
    [sym_tag] = STATE(3),
    [sym__author_tag] = STATE(51),
    [sym__version_tag] = STATE(51),
    [sym__global_tag] = STATE(51),
    [sym__internal_tag] = STATE(51),
    [sym__link_tag] = STATE(51),
    [sym__method_tag] = STATE(51),
    [sym__variable_tag_with_type] = STATE(51),
    [sym__return_tag] = STATE(51),
    [sym__see_tag] = STATE(51),
    [sym__throws_tag] = STATE(51),
    [sym__var_tag] = STATE(51),
    [sym_tag_name] = STATE(19),
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
    STATE(18), 1,
      sym_variable_name,
    STATE(60), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
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
    STATE(59), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
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
    STATE(64), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
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
    STATE(111), 1,
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
    STATE(61), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
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
    STATE(55), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
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
    STATE(52), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
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
    STATE(57), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
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
    STATE(65), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
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
    STATE(48), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
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
    STATE(46), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
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
  [566] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_ATproperty,
    STATE(54), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
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
  [617] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_ATproperty,
    STATE(47), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(139), 28,
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
  [668] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_ATproperty,
    STATE(49), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(143), 28,
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
  [719] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      anon_sym_ATproperty,
    STATE(58), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
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
  [770] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_ATproperty,
    STATE(50), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(151), 28,
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
  [821] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_ATproperty,
    STATE(56), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(155), 28,
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
  [872] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      anon_sym_ATproperty,
    STATE(26), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(159), 28,
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
  [920] = 5,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(163), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(111), 1,
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
  [966] = 6,
    ACTIONS(167), 1,
      anon_sym_ATproperty,
    ACTIONS(169), 1,
      sym_text,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    STATE(26), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(165), 28,
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
  [1014] = 3,
    ACTIONS(179), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(177), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(175), 31,
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
  [1055] = 4,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    STATE(28), 1,
      aux_sym__type_name_repeat1,
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
      anon_sym_DOLLAR,
      sym__end,
  [1098] = 4,
    ACTIONS(192), 1,
      anon_sym_PIPE,
    STATE(30), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(190), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(188), 30,
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
  [1141] = 4,
    ACTIONS(192), 1,
      anon_sym_PIPE,
    STATE(28), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(196), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(194), 30,
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
  [1184] = 3,
    ACTIONS(198), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(177), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(175), 30,
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
  [1224] = 4,
    ACTIONS(200), 1,
      anon_sym_PIPE,
    STATE(34), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(190), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(188), 29,
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
  [1266] = 2,
    ACTIONS(177), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(175), 31,
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
  [1304] = 4,
    ACTIONS(200), 1,
      anon_sym_PIPE,
    STATE(36), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(196), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(194), 29,
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
  [1346] = 2,
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
  [1384] = 4,
    ACTIONS(202), 1,
      anon_sym_PIPE,
    STATE(36), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(183), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(181), 29,
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
  [1426] = 2,
    ACTIONS(207), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(205), 31,
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
  [1464] = 2,
    ACTIONS(177), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(175), 30,
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
  [1501] = 2,
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
  [1538] = 2,
    ACTIONS(207), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(205), 30,
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
  [1575] = 2,
    ACTIONS(211), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(209), 29,
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
  [1611] = 2,
    ACTIONS(215), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(213), 29,
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
  [1647] = 2,
    ACTIONS(219), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(217), 29,
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
  [1683] = 3,
    ACTIONS(223), 1,
      anon_sym_LT,
    ACTIONS(225), 1,
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
  [1720] = 3,
    ACTIONS(229), 1,
      anon_sym_ATproperty,
    ACTIONS(231), 1,
      sym_author_name,
    ACTIONS(227), 28,
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
  [1791] = 2,
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
  [1825] = 2,
    ACTIONS(145), 1,
      anon_sym_ATproperty,
    ACTIONS(143), 28,
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
  [1893] = 2,
    ACTIONS(117), 1,
      anon_sym_ATproperty,
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
  [1927] = 2,
    ACTIONS(141), 1,
      anon_sym_ATproperty,
    ACTIONS(139), 28,
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
  [1995] = 2,
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
  [2029] = 2,
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
  [2063] = 2,
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
  [2097] = 2,
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
  [2131] = 2,
    ACTIONS(133), 1,
      anon_sym_ATproperty,
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
  [2165] = 2,
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
  [2199] = 2,
    ACTIONS(113), 1,
      anon_sym_ATproperty,
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
  [2233] = 2,
    ACTIONS(137), 1,
      anon_sym_ATproperty,
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
  [2267] = 2,
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
  [2301] = 2,
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
  [2335] = 2,
    ACTIONS(279), 1,
      anon_sym_ATproperty,
    ACTIONS(277), 28,
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
  [2369] = 2,
    ACTIONS(283), 1,
      anon_sym_ATproperty,
    ACTIONS(281), 28,
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
  [2403] = 2,
    ACTIONS(287), 1,
      anon_sym_ATproperty,
    ACTIONS(285), 28,
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
  [2437] = 10,
    ACTIONS(289), 1,
      sym__name,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    STATE(95), 1,
      sym_variable_name,
    STATE(101), 1,
      sym_qualified_name,
    STATE(113), 1,
      sym__type_name,
    STATE(118), 1,
      sym__namespace_name_as_prefix,
    STATE(119), 1,
      sym__namespace_name,
    STATE(68), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2469] = 10,
    ACTIONS(289), 1,
      sym__name,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_variable_name,
    STATE(101), 1,
      sym_qualified_name,
    STATE(113), 1,
      sym__type_name,
    STATE(118), 1,
      sym__namespace_name_as_prefix,
    STATE(119), 1,
      sym__namespace_name,
    STATE(70), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2501] = 10,
    ACTIONS(299), 1,
      sym__name,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    ACTIONS(304), 1,
      anon_sym_BSLASH,
    ACTIONS(307), 1,
      anon_sym_DOLLAR,
    STATE(95), 1,
      sym_variable_name,
    STATE(101), 1,
      sym_qualified_name,
    STATE(113), 1,
      sym__type_name,
    STATE(118), 1,
      sym__namespace_name_as_prefix,
    STATE(119), 1,
      sym__namespace_name,
    STATE(68), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2533] = 10,
    ACTIONS(289), 1,
      sym__name,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_variable_name,
    STATE(101), 1,
      sym_qualified_name,
    STATE(113), 1,
      sym__type_name,
    STATE(118), 1,
      sym__namespace_name_as_prefix,
    STATE(119), 1,
      sym__namespace_name,
    STATE(72), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2565] = 10,
    ACTIONS(289), 1,
      sym__name,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_variable_name,
    STATE(101), 1,
      sym_qualified_name,
    STATE(113), 1,
      sym__type_name,
    STATE(118), 1,
      sym__namespace_name_as_prefix,
    STATE(119), 1,
      sym__namespace_name,
    STATE(68), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2597] = 10,
    ACTIONS(289), 1,
      sym__name,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_variable_name,
    STATE(101), 1,
      sym_qualified_name,
    STATE(113), 1,
      sym__type_name,
    STATE(118), 1,
      sym__namespace_name_as_prefix,
    STATE(119), 1,
      sym__namespace_name,
    STATE(66), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2629] = 10,
    ACTIONS(289), 1,
      sym__name,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_variable_name,
    STATE(101), 1,
      sym_qualified_name,
    STATE(113), 1,
      sym__type_name,
    STATE(118), 1,
      sym__namespace_name_as_prefix,
    STATE(119), 1,
      sym__namespace_name,
    STATE(68), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [2661] = 7,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(318), 1,
      sym__name,
    ACTIONS(320), 1,
      sym_static,
    STATE(99), 1,
      sym_qualified_name,
    STATE(118), 1,
      sym__namespace_name_as_prefix,
    STATE(119), 1,
      sym__namespace_name,
    STATE(124), 1,
      sym__type_name,
  [2683] = 5,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(322), 1,
      sym_text,
    STATE(63), 1,
      sym_description,
    STATE(24), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(76), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [2701] = 4,
    ACTIONS(326), 1,
      sym_text,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(324), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(75), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [2716] = 4,
    ACTIONS(334), 1,
      sym_text,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(75), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [2731] = 6,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(338), 1,
      sym__name,
    STATE(9), 1,
      sym__type_name,
    STATE(32), 1,
      sym_qualified_name,
    STATE(119), 1,
      sym__namespace_name,
    STATE(139), 1,
      sym__namespace_name_as_prefix,
  [2750] = 6,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(338), 1,
      sym__name,
    STATE(11), 1,
      sym__type_name,
    STATE(32), 1,
      sym_qualified_name,
    STATE(119), 1,
      sym__namespace_name,
    STATE(139), 1,
      sym__namespace_name_as_prefix,
  [2769] = 5,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(111), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(98), 2,
      sym__name,
      anon_sym_PIPE,
  [2786] = 4,
    ACTIONS(344), 1,
      anon_sym_ATinternal,
    ACTIONS(346), 1,
      anon_sym_ATlink,
    ACTIONS(348), 1,
      anon_sym_ATsee,
    STATE(128), 3,
      sym__internal_inline_tag,
      sym__link_inline_tag,
      sym__see_inline_tag,
  [2801] = 6,
    ACTIONS(289), 1,
      sym__name,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    STATE(101), 1,
      sym_qualified_name,
    STATE(112), 1,
      sym__type_name,
    STATE(118), 1,
      sym__namespace_name_as_prefix,
    STATE(119), 1,
      sym__namespace_name,
  [2820] = 6,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(350), 1,
      sym__name,
    STATE(7), 1,
      sym__type_name,
    STATE(29), 1,
      sym_qualified_name,
    STATE(119), 1,
      sym__namespace_name,
    STATE(144), 1,
      sym__namespace_name_as_prefix,
  [2839] = 5,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(98), 2,
      sym__name,
      anon_sym_PIPE,
  [2856] = 6,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(354), 1,
      sym__name,
    STATE(99), 1,
      sym_qualified_name,
    STATE(118), 1,
      sym__namespace_name_as_prefix,
    STATE(119), 1,
      sym__namespace_name,
    STATE(123), 1,
      sym__type_name,
  [2875] = 6,
    ACTIONS(289), 1,
      sym__name,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    STATE(101), 1,
      sym_qualified_name,
    STATE(107), 1,
      sym__type_name,
    STATE(118), 1,
      sym__namespace_name_as_prefix,
    STATE(119), 1,
      sym__namespace_name,
  [2894] = 5,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(350), 1,
      sym__name,
    STATE(35), 1,
      sym_qualified_name,
    STATE(119), 1,
      sym__namespace_name,
    STATE(144), 1,
      sym__namespace_name_as_prefix,
  [2910] = 5,
    ACTIONS(289), 1,
      sym__name,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    STATE(104), 1,
      sym_qualified_name,
    STATE(118), 1,
      sym__namespace_name_as_prefix,
    STATE(119), 1,
      sym__namespace_name,
  [2926] = 5,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(338), 1,
      sym__name,
    STATE(39), 1,
      sym_qualified_name,
    STATE(119), 1,
      sym__namespace_name,
    STATE(139), 1,
      sym__namespace_name_as_prefix,
  [2942] = 4,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(111), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(98), 2,
      sym__name,
      anon_sym_PIPE,
  [2956] = 4,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(111), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(98), 2,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2970] = 5,
    ACTIONS(293), 1,
      anon_sym_BSLASH,
    ACTIONS(356), 1,
      sym__name,
    STATE(104), 1,
      sym_qualified_name,
    STATE(118), 1,
      sym__namespace_name_as_prefix,
    STATE(119), 1,
      sym__namespace_name,
  [2986] = 1,
    ACTIONS(358), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_text,
      anon_sym_LBRACE,
  [2993] = 2,
    ACTIONS(360), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(175), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3002] = 1,
    ACTIONS(362), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [3009] = 1,
    ACTIONS(364), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [3016] = 1,
    ACTIONS(213), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [3023] = 1,
    ACTIONS(205), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3029] = 1,
    ACTIONS(175), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3035] = 3,
    ACTIONS(188), 1,
      sym__name,
    ACTIONS(366), 1,
      anon_sym_PIPE,
    STATE(100), 1,
      aux_sym__type_name_repeat1,
  [3045] = 3,
    ACTIONS(194), 1,
      sym__name,
    ACTIONS(366), 1,
      anon_sym_PIPE,
    STATE(105), 1,
      aux_sym__type_name_repeat1,
  [3055] = 3,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(368), 1,
      anon_sym_PIPE,
    STATE(102), 1,
      aux_sym__type_name_repeat1,
  [3065] = 3,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(368), 1,
      anon_sym_PIPE,
    STATE(103), 1,
      aux_sym__type_name_repeat1,
  [3075] = 3,
    ACTIONS(181), 1,
      anon_sym_DOLLAR,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    STATE(103), 1,
      aux_sym__type_name_repeat1,
  [3085] = 1,
    ACTIONS(181), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3091] = 3,
    ACTIONS(181), 1,
      sym__name,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    STATE(105), 1,
      aux_sym__type_name_repeat1,
  [3101] = 2,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    STATE(111), 1,
      aux_sym__namespace_name_repeat1,
  [3108] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_variable_name,
  [3115] = 2,
    ACTIONS(376), 1,
      sym_text,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
  [3122] = 2,
    ACTIONS(380), 1,
      sym_text,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
  [3129] = 2,
    ACTIONS(384), 1,
      anon_sym_BSLASH,
    STATE(110), 1,
      aux_sym__namespace_name_repeat1,
  [3136] = 2,
    ACTIONS(387), 1,
      anon_sym_BSLASH,
    STATE(110), 1,
      aux_sym__namespace_name_repeat1,
  [3143] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR,
    STATE(23), 1,
      sym_variable_name,
  [3150] = 2,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    STATE(94), 1,
      sym_variable_name,
  [3157] = 2,
    ACTIONS(390), 1,
      sym__name,
    STATE(137), 1,
      sym__namespace_name,
  [3164] = 1,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
  [3168] = 1,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
  [3172] = 1,
    ACTIONS(397), 1,
      sym_uri,
  [3176] = 1,
    ACTIONS(399), 1,
      sym__name,
  [3180] = 1,
    ACTIONS(401), 1,
      anon_sym_BSLASH,
  [3184] = 1,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
  [3188] = 1,
    ACTIONS(405), 1,
      sym__name,
  [3192] = 1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
  [3196] = 1,
    ACTIONS(409), 1,
      sym__name,
  [3200] = 1,
    ACTIONS(411), 1,
      sym__name,
  [3204] = 1,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
  [3208] = 1,
    ACTIONS(415), 1,
      sym__name,
  [3212] = 1,
    ACTIONS(417), 1,
      sym__name,
  [3216] = 1,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
  [3220] = 1,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
  [3224] = 1,
    ACTIONS(423), 1,
      sym_email_address,
  [3228] = 1,
    ACTIONS(425), 1,
      anon_sym_GT,
  [3232] = 1,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
  [3236] = 1,
    ACTIONS(429), 1,
      sym_text,
  [3240] = 1,
    ACTIONS(431), 1,
      sym_uri,
  [3244] = 1,
    ACTIONS(433), 1,
      sym_uri,
  [3248] = 1,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
  [3252] = 1,
    ACTIONS(437), 1,
      anon_sym_BSLASH,
  [3256] = 1,
    ACTIONS(439), 1,
      sym__name,
  [3260] = 1,
    ACTIONS(441), 1,
      sym__name,
  [3264] = 1,
    ACTIONS(443), 1,
      sym__name,
  [3268] = 1,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
  [3272] = 1,
    ACTIONS(447), 1,
      sym_uri,
  [3276] = 1,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
  [3280] = 1,
    ACTIONS(449), 1,
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
  [SMALL_STATE(19)] = 617,
  [SMALL_STATE(20)] = 668,
  [SMALL_STATE(21)] = 719,
  [SMALL_STATE(22)] = 770,
  [SMALL_STATE(23)] = 821,
  [SMALL_STATE(24)] = 872,
  [SMALL_STATE(25)] = 920,
  [SMALL_STATE(26)] = 966,
  [SMALL_STATE(27)] = 1014,
  [SMALL_STATE(28)] = 1055,
  [SMALL_STATE(29)] = 1098,
  [SMALL_STATE(30)] = 1141,
  [SMALL_STATE(31)] = 1184,
  [SMALL_STATE(32)] = 1224,
  [SMALL_STATE(33)] = 1266,
  [SMALL_STATE(34)] = 1304,
  [SMALL_STATE(35)] = 1346,
  [SMALL_STATE(36)] = 1384,
  [SMALL_STATE(37)] = 1426,
  [SMALL_STATE(38)] = 1464,
  [SMALL_STATE(39)] = 1501,
  [SMALL_STATE(40)] = 1538,
  [SMALL_STATE(41)] = 1575,
  [SMALL_STATE(42)] = 1611,
  [SMALL_STATE(43)] = 1647,
  [SMALL_STATE(44)] = 1683,
  [SMALL_STATE(45)] = 1720,
  [SMALL_STATE(46)] = 1757,
  [SMALL_STATE(47)] = 1791,
  [SMALL_STATE(48)] = 1825,
  [SMALL_STATE(49)] = 1859,
  [SMALL_STATE(50)] = 1893,
  [SMALL_STATE(51)] = 1927,
  [SMALL_STATE(52)] = 1961,
  [SMALL_STATE(53)] = 1995,
  [SMALL_STATE(54)] = 2029,
  [SMALL_STATE(55)] = 2063,
  [SMALL_STATE(56)] = 2097,
  [SMALL_STATE(57)] = 2131,
  [SMALL_STATE(58)] = 2165,
  [SMALL_STATE(59)] = 2199,
  [SMALL_STATE(60)] = 2233,
  [SMALL_STATE(61)] = 2267,
  [SMALL_STATE(62)] = 2301,
  [SMALL_STATE(63)] = 2335,
  [SMALL_STATE(64)] = 2369,
  [SMALL_STATE(65)] = 2403,
  [SMALL_STATE(66)] = 2437,
  [SMALL_STATE(67)] = 2469,
  [SMALL_STATE(68)] = 2501,
  [SMALL_STATE(69)] = 2533,
  [SMALL_STATE(70)] = 2565,
  [SMALL_STATE(71)] = 2597,
  [SMALL_STATE(72)] = 2629,
  [SMALL_STATE(73)] = 2661,
  [SMALL_STATE(74)] = 2683,
  [SMALL_STATE(75)] = 2701,
  [SMALL_STATE(76)] = 2716,
  [SMALL_STATE(77)] = 2731,
  [SMALL_STATE(78)] = 2750,
  [SMALL_STATE(79)] = 2769,
  [SMALL_STATE(80)] = 2786,
  [SMALL_STATE(81)] = 2801,
  [SMALL_STATE(82)] = 2820,
  [SMALL_STATE(83)] = 2839,
  [SMALL_STATE(84)] = 2856,
  [SMALL_STATE(85)] = 2875,
  [SMALL_STATE(86)] = 2894,
  [SMALL_STATE(87)] = 2910,
  [SMALL_STATE(88)] = 2926,
  [SMALL_STATE(89)] = 2942,
  [SMALL_STATE(90)] = 2956,
  [SMALL_STATE(91)] = 2970,
  [SMALL_STATE(92)] = 2986,
  [SMALL_STATE(93)] = 2993,
  [SMALL_STATE(94)] = 3002,
  [SMALL_STATE(95)] = 3009,
  [SMALL_STATE(96)] = 3016,
  [SMALL_STATE(97)] = 3023,
  [SMALL_STATE(98)] = 3029,
  [SMALL_STATE(99)] = 3035,
  [SMALL_STATE(100)] = 3045,
  [SMALL_STATE(101)] = 3055,
  [SMALL_STATE(102)] = 3065,
  [SMALL_STATE(103)] = 3075,
  [SMALL_STATE(104)] = 3085,
  [SMALL_STATE(105)] = 3091,
  [SMALL_STATE(106)] = 3101,
  [SMALL_STATE(107)] = 3108,
  [SMALL_STATE(108)] = 3115,
  [SMALL_STATE(109)] = 3122,
  [SMALL_STATE(110)] = 3129,
  [SMALL_STATE(111)] = 3136,
  [SMALL_STATE(112)] = 3143,
  [SMALL_STATE(113)] = 3150,
  [SMALL_STATE(114)] = 3157,
  [SMALL_STATE(115)] = 3164,
  [SMALL_STATE(116)] = 3168,
  [SMALL_STATE(117)] = 3172,
  [SMALL_STATE(118)] = 3176,
  [SMALL_STATE(119)] = 3180,
  [SMALL_STATE(120)] = 3184,
  [SMALL_STATE(121)] = 3188,
  [SMALL_STATE(122)] = 3192,
  [SMALL_STATE(123)] = 3196,
  [SMALL_STATE(124)] = 3200,
  [SMALL_STATE(125)] = 3204,
  [SMALL_STATE(126)] = 3208,
  [SMALL_STATE(127)] = 3212,
  [SMALL_STATE(128)] = 3216,
  [SMALL_STATE(129)] = 3220,
  [SMALL_STATE(130)] = 3224,
  [SMALL_STATE(131)] = 3228,
  [SMALL_STATE(132)] = 3232,
  [SMALL_STATE(133)] = 3236,
  [SMALL_STATE(134)] = 3240,
  [SMALL_STATE(135)] = 3244,
  [SMALL_STATE(136)] = 3248,
  [SMALL_STATE(137)] = 3252,
  [SMALL_STATE(138)] = 3256,
  [SMALL_STATE(139)] = 3260,
  [SMALL_STATE(140)] = 3264,
  [SMALL_STATE(141)] = 3268,
  [SMALL_STATE(142)] = 3272,
  [SMALL_STATE(143)] = 3276,
  [SMALL_STATE(144)] = 3280,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(45),
  [7] = {.count = 1, .reusable = true}, SHIFT(8),
  [9] = {.count = 1, .reusable = true}, SHIFT(85),
  [11] = {.count = 1, .reusable = true}, SHIFT(21),
  [13] = {.count = 1, .reusable = true}, SHIFT(142),
  [15] = {.count = 1, .reusable = true}, SHIFT(73),
  [17] = {.count = 1, .reusable = true}, SHIFT(81),
  [19] = {.count = 1, .reusable = false}, SHIFT(81),
  [21] = {.count = 1, .reusable = true}, SHIFT(77),
  [23] = {.count = 1, .reusable = true}, SHIFT(134),
  [25] = {.count = 1, .reusable = true}, SHIFT(78),
  [27] = {.count = 1, .reusable = true}, SHIFT(82),
  [29] = {.count = 1, .reusable = true}, SHIFT(43),
  [31] = {.count = 1, .reusable = false}, SHIFT(76),
  [33] = {.count = 1, .reusable = true}, SHIFT(80),
  [35] = {.count = 1, .reusable = true}, SHIFT(129),
  [37] = {.count = 1, .reusable = true}, SHIFT(132),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(142),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [60] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(134),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [78] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [80] = {.count = 1, .reusable = true}, SHIFT(125),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 2),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 2),
  [86] = {.count = 1, .reusable = true}, SHIFT(138),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 1),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 1),
  [92] = {.count = 1, .reusable = true}, SHIFT(12),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 2),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 2),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 1),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 1),
  [102] = {.count = 1, .reusable = true}, SHIFT(33),
  [104] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 1), SHIFT(121),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 2),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 2),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 2),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 3),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 3),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 1),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 1),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 3),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 3),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [163] = {.count = 1, .reusable = true}, SHIFT(38),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [169] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(76),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(80),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 2),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 2),
  [179] = {.count = 1, .reusable = true}, SHIFT(37),
  [181] = {.count = 1, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(aux_sym__type_name_repeat1, 2),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(86),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 1),
  [190] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 1),
  [192] = {.count = 1, .reusable = true}, SHIFT(86),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 2),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 2),
  [198] = {.count = 1, .reusable = true}, SHIFT(40),
  [200] = {.count = 1, .reusable = true}, SHIFT(88),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(88),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 3),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 3),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_text_line, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_text_line, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_variable_name, 2),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_variable_name, 2),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_tag_name, 1),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_tag_name, 1),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(130),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 2),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 1),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 1),
  [231] = {.count = 1, .reusable = true}, SHIFT(44),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 8, .production_id = 5),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 8, .production_id = 5),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 2),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 2),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 4),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 4),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 5),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 5),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 4),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 4),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 3),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 3),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 4),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 4),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 2),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 2),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 3),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 3),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym__global_tag, 3),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym__global_tag, 3),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym__see_tag, 3),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym__see_tag, 3),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 3),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 3),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 3),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 3),
  [289] = {.count = 1, .reusable = true}, SHIFT(90),
  [291] = {.count = 1, .reusable = true}, SHIFT(13),
  [293] = {.count = 1, .reusable = true}, SHIFT(114),
  [295] = {.count = 1, .reusable = true}, SHIFT(140),
  [297] = {.count = 1, .reusable = true}, SHIFT(14),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(90),
  [302] = {.count = 1, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(114),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(140),
  [310] = {.count = 1, .reusable = true}, SHIFT(16),
  [312] = {.count = 1, .reusable = true}, SHIFT(17),
  [314] = {.count = 1, .reusable = true}, SHIFT(22),
  [316] = {.count = 1, .reusable = true}, SHIFT(20),
  [318] = {.count = 1, .reusable = false}, SHIFT(83),
  [320] = {.count = 1, .reusable = false}, SHIFT(84),
  [322] = {.count = 1, .reusable = true}, SHIFT(76),
  [324] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2),
  [326] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(75),
  [329] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(80),
  [332] = {.count = 1, .reusable = false}, SHIFT(41),
  [334] = {.count = 1, .reusable = false}, SHIFT(75),
  [336] = {.count = 1, .reusable = false}, SHIFT(80),
  [338] = {.count = 1, .reusable = true}, SHIFT(25),
  [340] = {.count = 1, .reusable = true}, SHIFT(71),
  [342] = {.count = 1, .reusable = true}, SHIFT(98),
  [344] = {.count = 1, .reusable = true}, SHIFT(133),
  [346] = {.count = 1, .reusable = true}, SHIFT(135),
  [348] = {.count = 1, .reusable = true}, SHIFT(117),
  [350] = {.count = 1, .reusable = true}, SHIFT(10),
  [352] = {.count = 1, .reusable = true}, SHIFT(69),
  [354] = {.count = 1, .reusable = true}, SHIFT(79),
  [356] = {.count = 1, .reusable = true}, SHIFT(89),
  [358] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 3),
  [360] = {.count = 1, .reusable = true}, SHIFT(97),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_param, 2),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_param, 1),
  [366] = {.count = 1, .reusable = true}, SHIFT(91),
  [368] = {.count = 1, .reusable = true}, SHIFT(87),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(87),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(91),
  [376] = {.count = 1, .reusable = true}, SHIFT(120),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 2),
  [380] = {.count = 1, .reusable = true}, SHIFT(115),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 2),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2), SHIFT_REPEAT(121),
  [387] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 2), SHIFT(121),
  [390] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 1), SHIFT(106),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 3, .production_id = 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2),
  [397] = {.count = 1, .reusable = true}, SHIFT(109),
  [399] = {.count = 1, .reusable = true}, SHIFT(93),
  [401] = {.count = 1, .reusable = true}, SHIFT(126),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3, .production_id = 3),
  [405] = {.count = 1, .reusable = true}, SHIFT(116),
  [407] = {.count = 1, .reusable = true}, SHIFT(67),
  [409] = {.count = 1, .reusable = true}, SHIFT(122),
  [411] = {.count = 1, .reusable = true}, SHIFT(143),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 2),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 3),
  [419] = {.count = 1, .reusable = true}, SHIFT(92),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [423] = {.count = 1, .reusable = true}, SHIFT(131),
  [425] = {.count = 1, .reusable = true}, SHIFT(53),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [429] = {.count = 1, .reusable = true}, SHIFT(136),
  [431] = {.count = 1, .reusable = true}, SHIFT(74),
  [433] = {.count = 1, .reusable = true}, SHIFT(108),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym__internal_inline_tag, 2, .production_id = 1),
  [437] = {.count = 1, .reusable = true}, SHIFT(127),
  [439] = {.count = 1, .reusable = true}, SHIFT(42),
  [441] = {.count = 1, .reusable = true}, SHIFT(31),
  [443] = {.count = 1, .reusable = true}, SHIFT(96),
  [445] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [447] = {.count = 1, .reusable = true}, SHIFT(15),
  [449] = {.count = 1, .reusable = true}, SHIFT(27),
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
