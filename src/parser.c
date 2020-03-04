#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 160
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 1
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9

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
  anon_sym_COMMA = 13,
  anon_sym_RPAREN = 14,
  anon_sym_ATparam = 15,
  anon_sym_ATproperty = 16,
  anon_sym_ATproperty_DASHread = 17,
  anon_sym_ATproperty_DASHwrite = 18,
  anon_sym_ATreturn = 19,
  anon_sym_ATsee = 20,
  anon_sym_ATthrows = 21,
  anon_sym_ATvar = 22,
  sym_author_name = 23,
  sym_email_address = 24,
  anon_sym_ATapi = 25,
  anon_sym_ATcategory = 26,
  anon_sym_ATcopyright = 27,
  anon_sym_ATexample = 28,
  anon_sym_ATfilesource = 29,
  anon_sym_ATignore = 30,
  anon_sym_ATlicense = 31,
  anon_sym_ATpackage = 32,
  anon_sym_ATsource = 33,
  anon_sym_ATsubpackage = 34,
  anon_sym_ATtodo = 35,
  anon_sym_ATuses = 36,
  anon_sym_ATversion = 37,
  anon_sym_LF = 38,
  anon_sym_CR_LF = 39,
  sym_text = 40,
  anon_sym_LBRACE = 41,
  anon_sym_RBRACE = 42,
  sym_version = 43,
  sym_uri = 44,
  anon_sym_PIPE = 45,
  anon_sym_EQ = 46,
  sym_param_value = 47,
  anon_sym_LBRACK_RBRACK = 48,
  anon_sym_BSLASH = 49,
  sym_static = 50,
  anon_sym_DOLLAR = 51,
  sym__end = 52,
  sym_document = 53,
  sym_tag = 54,
  sym__author_tag = 55,
  sym__version_tag = 56,
  sym__global_tag = 57,
  sym__internal_tag = 58,
  sym__internal_inline_tag = 59,
  sym__link_tag = 60,
  sym__link_inline_tag = 61,
  sym__method_tag = 62,
  sym__variable_tag_with_type = 63,
  sym__return_tag = 64,
  sym__see_tag = 65,
  sym__see_inline_tag = 66,
  sym__throws_tag = 67,
  sym__var_tag = 68,
  sym_tag_name = 69,
  sym_description = 70,
  sym_text_line = 71,
  sym_inline_tag = 72,
  sym__type_name = 73,
  sym_param = 74,
  sym_qualified_name = 75,
  sym__namespace_name = 76,
  sym__namespace_name_as_prefix = 77,
  sym_variable_name = 78,
  aux_sym_document_repeat1 = 79,
  aux_sym__method_tag_repeat1 = 80,
  aux_sym_description_repeat1 = 81,
  aux_sym_text_line_repeat1 = 82,
  aux_sym__type_name_repeat1 = 83,
  aux_sym__namespace_name_repeat1 = 84,
  alias_sym_name = 85,
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
  [anon_sym_COMMA] = ",",
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
  [anon_sym_EQ] = "=",
  [sym_param_value] = "param_value",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_param_value] = sym_param_value,
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
  [anon_sym_COMMA] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_param_value] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(174);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(173)
      if (lookahead == '\r') SKIP(173)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == ',') ADVANCE(186);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(178);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead == '}') ADVANCE(218);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(222);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == '*') SKIP(1)
      if (lookahead == ',') ADVANCE(186);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(178);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '|') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(222);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(217);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 15:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 16:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 17:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 18:
      if (lookahead == '\t') SKIP(19)
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == ' ') SKIP(19)
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 19:
      if (lookahead == '\t') SKIP(19)
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == ' ') SKIP(19)
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 20:
      if (lookahead == '\t') SKIP(21)
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == ' ') SKIP(21)
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '@') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(196);
      END_STATE();
    case 21:
      if (lookahead == '\t') SKIP(21)
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == ' ') SKIP(21)
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '@') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(196);
      END_STATE();
    case 22:
      if (lookahead == '\t') SKIP(22)
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == ' ') SKIP(22)
      if (lookahead == '*') SKIP(22)
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(216);
      END_STATE();
    case 23:
      if (lookahead == '\t') SKIP(23)
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == ' ') SKIP(23)
      if (lookahead == '*') SKIP(23)
      if (lookahead == '{') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(216);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == '\t') ADVANCE(225);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(225);
      if (lookahead == ' ') SKIP(25)
      if (lookahead == '*') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(226);
      END_STATE();
    case 26:
      if (lookahead == '\t') SKIP(26)
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == ' ') SKIP(26)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == ',') ADVANCE(186);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(178);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead == '}') ADVANCE(218);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(222);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 27:
      if (lookahead == '\t') SKIP(26)
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == ' ') SKIP(26)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == ',') ADVANCE(186);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(178);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead == '}') ADVANCE(218);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(222);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(175);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(221);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '@') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '@') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(227);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'g') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(150);
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 100:
      if (lookahead == 'k') ADVANCE(183);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 102:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(141);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 165:
      if (lookahead == 'w') ADVANCE(148);
      END_STATE();
    case 166:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 167:
      if (lookahead == 'y') ADVANCE(200);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 173:
      if (eof) ADVANCE(174);
      if (lookahead == '\t') SKIP(173)
      if (lookahead == '\n') SKIP(173)
      if (lookahead == '\r') SKIP(173)
      if (lookahead == ' ') SKIP(173)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == ',') ADVANCE(186);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(178);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead == '}') ADVANCE(218);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(222);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(144);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(23);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '\t') ADVANCE(225);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(225);
      if (lookahead == ' ') ADVANCE(225);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(213);
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
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 21},
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
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 22},
  [124] = {.lex_state = 22},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 24},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 24},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 24},
  [145] = {.lex_state = 22},
  [146] = {.lex_state = 25},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 25},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 24},
  [159] = {.lex_state = 1},
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
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_static] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(137),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(5),
    [sym__author_tag] = STATE(49),
    [sym__version_tag] = STATE(49),
    [sym__global_tag] = STATE(49),
    [sym__internal_tag] = STATE(49),
    [sym__link_tag] = STATE(49),
    [sym__method_tag] = STATE(49),
    [sym__variable_tag_with_type] = STATE(49),
    [sym__return_tag] = STATE(49),
    [sym__see_tag] = STATE(49),
    [sym__throws_tag] = STATE(49),
    [sym__var_tag] = STATE(49),
    [sym_tag_name] = STATE(19),
    [sym_description] = STATE(6),
    [sym_text_line] = STATE(28),
    [sym_inline_tag] = STATE(82),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_description_repeat1] = STATE(28),
    [aux_sym_text_line_repeat1] = STATE(82),
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
    [sym__author_tag] = STATE(49),
    [sym__version_tag] = STATE(49),
    [sym__global_tag] = STATE(49),
    [sym__internal_tag] = STATE(49),
    [sym__link_tag] = STATE(49),
    [sym__method_tag] = STATE(49),
    [sym__variable_tag_with_type] = STATE(49),
    [sym__return_tag] = STATE(49),
    [sym__see_tag] = STATE(49),
    [sym__throws_tag] = STATE(49),
    [sym__var_tag] = STATE(49),
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
    [sym__author_tag] = STATE(49),
    [sym__version_tag] = STATE(49),
    [sym__global_tag] = STATE(49),
    [sym__internal_tag] = STATE(49),
    [sym__link_tag] = STATE(49),
    [sym__method_tag] = STATE(49),
    [sym__variable_tag_with_type] = STATE(49),
    [sym__return_tag] = STATE(49),
    [sym__see_tag] = STATE(49),
    [sym__throws_tag] = STATE(49),
    [sym__var_tag] = STATE(49),
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
    [sym__author_tag] = STATE(49),
    [sym__version_tag] = STATE(49),
    [sym__global_tag] = STATE(49),
    [sym__internal_tag] = STATE(49),
    [sym__link_tag] = STATE(49),
    [sym__method_tag] = STATE(49),
    [sym__variable_tag_with_type] = STATE(49),
    [sym__return_tag] = STATE(49),
    [sym__see_tag] = STATE(49),
    [sym__throws_tag] = STATE(49),
    [sym__var_tag] = STATE(49),
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
    [sym__author_tag] = STATE(49),
    [sym__version_tag] = STATE(49),
    [sym__global_tag] = STATE(49),
    [sym__internal_tag] = STATE(49),
    [sym__link_tag] = STATE(49),
    [sym__method_tag] = STATE(49),
    [sym__variable_tag_with_type] = STATE(49),
    [sym__return_tag] = STATE(49),
    [sym__see_tag] = STATE(49),
    [sym__throws_tag] = STATE(49),
    [sym__var_tag] = STATE(49),
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
    STATE(13), 1,
      sym_variable_name,
    STATE(66), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
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
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
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
    STATE(70), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
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
  [162] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_ATproperty,
    STATE(51), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(98), 28,
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
  [213] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      anon_sym_ATproperty,
    STATE(52), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(102), 28,
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
  [264] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_ATproperty,
    STATE(53), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(106), 28,
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
  [315] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      anon_sym_ATproperty,
    STATE(57), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(110), 28,
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
  [366] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_ATproperty,
    STATE(60), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(114), 28,
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
  [417] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_ATproperty,
    STATE(64), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(118), 28,
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
  [468] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      anon_sym_ATproperty,
    STATE(61), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(122), 28,
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
  [519] = 5,
    ACTIONS(130), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(132), 1,
      anon_sym_BSLASH,
    STATE(125), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(128), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(126), 31,
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
  [566] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_ATproperty,
    STATE(59), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
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
    STATE(54), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
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
    STATE(65), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
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
    STATE(71), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
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
    STATE(67), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
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
    STATE(58), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
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
  [872] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      anon_sym_ATproperty,
    STATE(50), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
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
  [923] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym_ATproperty,
    STATE(68), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(163), 28,
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
  [974] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_ATproperty,
    STATE(63), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(167), 28,
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
  [1025] = 6,
    ACTIONS(173), 1,
      anon_sym_ATproperty,
    ACTIONS(175), 1,
      sym_text,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(27), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(171), 28,
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
  [1073] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      anon_sym_ATproperty,
    STATE(27), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(181), 28,
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
  [1121] = 5,
    ACTIONS(132), 1,
      anon_sym_BSLASH,
    ACTIONS(185), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(125), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(128), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(126), 30,
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
  [1167] = 4,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    STATE(33), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(189), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(187), 30,
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
  [1210] = 3,
    ACTIONS(197), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(195), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(193), 31,
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
  [1251] = 4,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    STATE(32), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(201), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(199), 30,
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
  [1294] = 4,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    STATE(32), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(208), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(206), 30,
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
  [1337] = 3,
    ACTIONS(210), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(195), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(193), 30,
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
  [1377] = 4,
    ACTIONS(212), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(189), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(187), 29,
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
  [1419] = 2,
    ACTIONS(216), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(214), 31,
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
  [1457] = 4,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    STATE(37), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(201), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(199), 29,
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
  [1499] = 2,
    ACTIONS(201), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(199), 31,
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
  [1537] = 4,
    ACTIONS(212), 1,
      anon_sym_PIPE,
    STATE(37), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(208), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(206), 29,
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
  [1579] = 2,
    ACTIONS(195), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(193), 31,
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
  [1617] = 2,
    ACTIONS(195), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(193), 30,
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
  [1654] = 2,
    ACTIONS(216), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(214), 30,
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
  [1691] = 2,
    ACTIONS(201), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(199), 30,
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
  [1728] = 2,
    ACTIONS(223), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(221), 29,
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
  [1764] = 2,
    ACTIONS(227), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(225), 29,
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
  [1800] = 2,
    ACTIONS(231), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(229), 29,
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
  [1836] = 3,
    ACTIONS(235), 1,
      anon_sym_ATproperty,
    ACTIONS(237), 1,
      sym_author_name,
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
  [1873] = 3,
    ACTIONS(241), 1,
      anon_sym_LT,
    ACTIONS(243), 1,
      anon_sym_ATproperty,
    ACTIONS(239), 28,
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
  [1910] = 2,
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
  [1944] = 2,
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
  [1978] = 2,
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
  [2012] = 2,
    ACTIONS(169), 1,
      anon_sym_ATproperty,
    ACTIONS(167), 28,
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
  [2046] = 2,
    ACTIONS(104), 1,
      anon_sym_ATproperty,
    ACTIONS(102), 28,
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
  [2080] = 2,
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
  [2114] = 2,
    ACTIONS(157), 1,
      anon_sym_ATproperty,
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
  [2148] = 2,
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
  [2182] = 2,
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
  [2216] = 2,
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
  [2250] = 2,
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
  [2284] = 2,
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
  [2318] = 2,
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
  [2352] = 2,
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
  [2386] = 2,
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
  [2420] = 2,
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
  [2454] = 2,
    ACTIONS(120), 1,
      anon_sym_ATproperty,
    ACTIONS(118), 28,
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
  [2488] = 2,
    ACTIONS(112), 1,
      anon_sym_ATproperty,
    ACTIONS(110), 28,
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
  [2522] = 2,
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
  [2556] = 2,
    ACTIONS(291), 1,
      anon_sym_ATproperty,
    ACTIONS(289), 28,
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
  [2590] = 2,
    ACTIONS(295), 1,
      anon_sym_ATproperty,
    ACTIONS(293), 28,
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
  [2624] = 2,
    ACTIONS(124), 1,
      anon_sym_ATproperty,
    ACTIONS(122), 28,
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
  [2658] = 2,
    ACTIONS(299), 1,
      anon_sym_ATproperty,
    ACTIONS(297), 28,
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
  [2692] = 10,
    ACTIONS(301), 1,
      sym__name,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(307), 1,
      anon_sym_DOLLAR,
    STATE(107), 1,
      sym_qualified_name,
    STATE(109), 1,
      sym_param,
    STATE(114), 1,
      sym_variable_name,
    STATE(121), 1,
      sym__type_name,
    STATE(148), 1,
      sym__namespace_name_as_prefix,
    STATE(149), 1,
      sym__namespace_name,
  [2723] = 10,
    ACTIONS(301), 1,
      sym__name,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(307), 1,
      anon_sym_DOLLAR,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_qualified_name,
    STATE(113), 1,
      sym_param,
    STATE(114), 1,
      sym_variable_name,
    STATE(121), 1,
      sym__type_name,
    STATE(148), 1,
      sym__namespace_name_as_prefix,
    STATE(149), 1,
      sym__namespace_name,
  [2754] = 10,
    ACTIONS(301), 1,
      sym__name,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(307), 1,
      anon_sym_DOLLAR,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_qualified_name,
    STATE(108), 1,
      sym_param,
    STATE(114), 1,
      sym_variable_name,
    STATE(121), 1,
      sym__type_name,
    STATE(148), 1,
      sym__namespace_name_as_prefix,
    STATE(149), 1,
      sym__namespace_name,
  [2785] = 9,
    ACTIONS(301), 1,
      sym__name,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(307), 1,
      anon_sym_DOLLAR,
    STATE(107), 1,
      sym_qualified_name,
    STATE(114), 1,
      sym_variable_name,
    STATE(116), 1,
      sym_param,
    STATE(121), 1,
      sym__type_name,
    STATE(148), 1,
      sym__namespace_name_as_prefix,
    STATE(149), 1,
      sym__namespace_name,
  [2813] = 7,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(313), 1,
      sym__name,
    ACTIONS(315), 1,
      sym_static,
    STATE(99), 1,
      sym_qualified_name,
    STATE(147), 1,
      sym__type_name,
    STATE(148), 1,
      sym__namespace_name_as_prefix,
    STATE(149), 1,
      sym__namespace_name,
  [2835] = 5,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(317), 1,
      sym_text,
    STATE(69), 1,
      sym_description,
    STATE(28), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(82), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [2853] = 6,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(319), 1,
      sym__name,
    STATE(21), 1,
      sym__type_name,
    STATE(35), 1,
      sym_qualified_name,
    STATE(149), 1,
      sym__namespace_name,
    STATE(154), 1,
      sym__namespace_name_as_prefix,
  [2872] = 6,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(319), 1,
      sym__name,
    STATE(25), 1,
      sym__type_name,
    STATE(35), 1,
      sym_qualified_name,
    STATE(149), 1,
      sym__namespace_name,
    STATE(154), 1,
      sym__namespace_name_as_prefix,
  [2891] = 5,
    ACTIONS(132), 1,
      anon_sym_BSLASH,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(125), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(126), 2,
      sym__name,
      anon_sym_PIPE,
  [2908] = 4,
    ACTIONS(325), 1,
      anon_sym_ATinternal,
    ACTIONS(327), 1,
      anon_sym_ATlink,
    ACTIONS(329), 1,
      anon_sym_ATsee,
    STATE(142), 3,
      sym__internal_inline_tag,
      sym__link_inline_tag,
      sym__see_inline_tag,
  [2923] = 4,
    ACTIONS(333), 1,
      sym_text,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(331), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(83), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [2938] = 4,
    ACTIONS(339), 1,
      sym_text,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(83), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [2953] = 6,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(345), 1,
      sym__name,
    STATE(99), 1,
      sym_qualified_name,
    STATE(128), 1,
      sym__type_name,
    STATE(148), 1,
      sym__namespace_name_as_prefix,
    STATE(149), 1,
      sym__namespace_name,
  [2972] = 6,
    ACTIONS(301), 1,
      sym__name,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    STATE(107), 1,
      sym_qualified_name,
    STATE(126), 1,
      sym__type_name,
    STATE(148), 1,
      sym__namespace_name_as_prefix,
    STATE(149), 1,
      sym__namespace_name,
  [2991] = 6,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(347), 1,
      sym__name,
    STATE(7), 1,
      sym__type_name,
    STATE(30), 1,
      sym_qualified_name,
    STATE(149), 1,
      sym__namespace_name,
    STATE(159), 1,
      sym__namespace_name_as_prefix,
  [3010] = 5,
    ACTIONS(132), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(126), 2,
      sym__name,
      anon_sym_PIPE,
  [3027] = 6,
    ACTIONS(301), 1,
      sym__name,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    STATE(107), 1,
      sym_qualified_name,
    STATE(127), 1,
      sym__type_name,
    STATE(148), 1,
      sym__namespace_name_as_prefix,
    STATE(149), 1,
      sym__namespace_name,
  [3046] = 5,
    ACTIONS(301), 1,
      sym__name,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    STATE(102), 1,
      sym_qualified_name,
    STATE(148), 1,
      sym__namespace_name_as_prefix,
    STATE(149), 1,
      sym__namespace_name,
  [3062] = 5,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(347), 1,
      sym__name,
    STATE(38), 1,
      sym_qualified_name,
    STATE(149), 1,
      sym__namespace_name,
    STATE(159), 1,
      sym__namespace_name_as_prefix,
  [3078] = 5,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(351), 1,
      sym__name,
    STATE(102), 1,
      sym_qualified_name,
    STATE(148), 1,
      sym__namespace_name_as_prefix,
    STATE(149), 1,
      sym__namespace_name,
  [3094] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(125), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(126), 2,
      sym__name,
      anon_sym_PIPE,
  [3108] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(125), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(126), 2,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3122] = 5,
    ACTIONS(305), 1,
      anon_sym_BSLASH,
    ACTIONS(319), 1,
      sym__name,
    STATE(43), 1,
      sym_qualified_name,
    STATE(149), 1,
      sym__namespace_name,
    STATE(154), 1,
      sym__namespace_name_as_prefix,
  [3138] = 1,
    ACTIONS(353), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_text,
      anon_sym_LBRACE,
  [3145] = 2,
    ACTIONS(355), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(193), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3154] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym__method_tag_repeat1,
  [3164] = 1,
    ACTIONS(221), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [3170] = 3,
    ACTIONS(187), 1,
      sym__name,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(112), 1,
      aux_sym__type_name_repeat1,
  [3180] = 3,
    ACTIONS(206), 1,
      anon_sym_DOLLAR,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    STATE(104), 1,
      aux_sym__type_name_repeat1,
  [3190] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym__method_tag_repeat1,
  [3200] = 1,
    ACTIONS(199), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3206] = 2,
    ACTIONS(369), 1,
      anon_sym_EQ,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3214] = 3,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(371), 1,
      anon_sym_PIPE,
    STATE(104), 1,
      aux_sym__type_name_repeat1,
  [3224] = 1,
    ACTIONS(214), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3230] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym__method_tag_repeat1,
  [3240] = 3,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    STATE(100), 1,
      aux_sym__type_name_repeat1,
  [3250] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym__method_tag_repeat1,
  [3260] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym__method_tag_repeat1,
  [3270] = 1,
    ACTIONS(193), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3276] = 3,
    ACTIONS(199), 1,
      sym__name,
    ACTIONS(380), 1,
      anon_sym_PIPE,
    STATE(111), 1,
      aux_sym__type_name_repeat1,
  [3286] = 3,
    ACTIONS(206), 1,
      sym__name,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(111), 1,
      aux_sym__type_name_repeat1,
  [3296] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym__method_tag_repeat1,
  [3306] = 2,
    ACTIONS(387), 1,
      anon_sym_EQ,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3314] = 3,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym__method_tag_repeat1,
  [3324] = 1,
    ACTIONS(392), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3329] = 1,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3334] = 2,
    ACTIONS(396), 1,
      sym__name,
    STATE(132), 1,
      sym__namespace_name,
  [3341] = 2,
    ACTIONS(399), 1,
      anon_sym_BSLASH,
    STATE(119), 1,
      aux_sym__namespace_name_repeat1,
  [3348] = 2,
    ACTIONS(132), 1,
      anon_sym_BSLASH,
    STATE(125), 1,
      aux_sym__namespace_name_repeat1,
  [3355] = 2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR,
    STATE(103), 1,
      sym_variable_name,
  [3362] = 1,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3367] = 2,
    ACTIONS(404), 1,
      sym_text,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
  [3374] = 2,
    ACTIONS(408), 1,
      sym_text,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
  [3381] = 2,
    ACTIONS(412), 1,
      anon_sym_BSLASH,
    STATE(119), 1,
      aux_sym__namespace_name_repeat1,
  [3388] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR,
    STATE(14), 1,
      sym_variable_name,
  [3395] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_variable_name,
  [3402] = 1,
    ACTIONS(415), 1,
      sym__name,
  [3406] = 1,
    ACTIONS(417), 1,
      sym_uri,
  [3410] = 1,
    ACTIONS(419), 1,
      sym__name,
  [3414] = 1,
    ACTIONS(421), 1,
      sym__name,
  [3418] = 1,
    ACTIONS(423), 1,
      anon_sym_BSLASH,
  [3422] = 1,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
  [3426] = 1,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
  [3430] = 1,
    ACTIONS(427), 1,
      sym__name,
  [3434] = 1,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
  [3438] = 1,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
  [3442] = 1,
    ACTIONS(433), 1,
      sym_email_address,
  [3446] = 1,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
  [3450] = 1,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
  [3454] = 1,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
  [3458] = 1,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
  [3462] = 1,
    ACTIONS(443), 1,
      sym__name,
  [3466] = 1,
    ACTIONS(445), 1,
      sym_uri,
  [3470] = 1,
    ACTIONS(447), 1,
      sym_text,
  [3474] = 1,
    ACTIONS(449), 1,
      sym_param_value,
  [3478] = 1,
    ACTIONS(451), 1,
      sym__name,
  [3482] = 1,
    ACTIONS(453), 1,
      sym__name,
  [3486] = 1,
    ACTIONS(455), 1,
      anon_sym_BSLASH,
  [3490] = 1,
    ACTIONS(457), 1,
      anon_sym_GT,
  [3494] = 1,
    ACTIONS(459), 1,
      sym_param_value,
  [3498] = 1,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
  [3502] = 1,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
  [3506] = 1,
    ACTIONS(465), 1,
      sym__name,
  [3510] = 1,
    ACTIONS(467), 1,
      sym__name,
  [3514] = 1,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
  [3518] = 1,
    ACTIONS(471), 1,
      sym_uri,
  [3522] = 1,
    ACTIONS(473), 1,
      sym_uri,
  [3526] = 1,
    ACTIONS(475), 1,
      sym__name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 57,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 213,
  [SMALL_STATE(12)] = 264,
  [SMALL_STATE(13)] = 315,
  [SMALL_STATE(14)] = 366,
  [SMALL_STATE(15)] = 417,
  [SMALL_STATE(16)] = 468,
  [SMALL_STATE(17)] = 519,
  [SMALL_STATE(18)] = 566,
  [SMALL_STATE(19)] = 617,
  [SMALL_STATE(20)] = 668,
  [SMALL_STATE(21)] = 719,
  [SMALL_STATE(22)] = 770,
  [SMALL_STATE(23)] = 821,
  [SMALL_STATE(24)] = 872,
  [SMALL_STATE(25)] = 923,
  [SMALL_STATE(26)] = 974,
  [SMALL_STATE(27)] = 1025,
  [SMALL_STATE(28)] = 1073,
  [SMALL_STATE(29)] = 1121,
  [SMALL_STATE(30)] = 1167,
  [SMALL_STATE(31)] = 1210,
  [SMALL_STATE(32)] = 1251,
  [SMALL_STATE(33)] = 1294,
  [SMALL_STATE(34)] = 1337,
  [SMALL_STATE(35)] = 1377,
  [SMALL_STATE(36)] = 1419,
  [SMALL_STATE(37)] = 1457,
  [SMALL_STATE(38)] = 1499,
  [SMALL_STATE(39)] = 1537,
  [SMALL_STATE(40)] = 1579,
  [SMALL_STATE(41)] = 1617,
  [SMALL_STATE(42)] = 1654,
  [SMALL_STATE(43)] = 1691,
  [SMALL_STATE(44)] = 1728,
  [SMALL_STATE(45)] = 1764,
  [SMALL_STATE(46)] = 1800,
  [SMALL_STATE(47)] = 1836,
  [SMALL_STATE(48)] = 1873,
  [SMALL_STATE(49)] = 1910,
  [SMALL_STATE(50)] = 1944,
  [SMALL_STATE(51)] = 1978,
  [SMALL_STATE(52)] = 2012,
  [SMALL_STATE(53)] = 2046,
  [SMALL_STATE(54)] = 2080,
  [SMALL_STATE(55)] = 2114,
  [SMALL_STATE(56)] = 2148,
  [SMALL_STATE(57)] = 2182,
  [SMALL_STATE(58)] = 2216,
  [SMALL_STATE(59)] = 2250,
  [SMALL_STATE(60)] = 2284,
  [SMALL_STATE(61)] = 2318,
  [SMALL_STATE(62)] = 2352,
  [SMALL_STATE(63)] = 2386,
  [SMALL_STATE(64)] = 2420,
  [SMALL_STATE(65)] = 2454,
  [SMALL_STATE(66)] = 2488,
  [SMALL_STATE(67)] = 2522,
  [SMALL_STATE(68)] = 2556,
  [SMALL_STATE(69)] = 2590,
  [SMALL_STATE(70)] = 2624,
  [SMALL_STATE(71)] = 2658,
  [SMALL_STATE(72)] = 2692,
  [SMALL_STATE(73)] = 2723,
  [SMALL_STATE(74)] = 2754,
  [SMALL_STATE(75)] = 2785,
  [SMALL_STATE(76)] = 2813,
  [SMALL_STATE(77)] = 2835,
  [SMALL_STATE(78)] = 2853,
  [SMALL_STATE(79)] = 2872,
  [SMALL_STATE(80)] = 2891,
  [SMALL_STATE(81)] = 2908,
  [SMALL_STATE(82)] = 2923,
  [SMALL_STATE(83)] = 2938,
  [SMALL_STATE(84)] = 2953,
  [SMALL_STATE(85)] = 2972,
  [SMALL_STATE(86)] = 2991,
  [SMALL_STATE(87)] = 3010,
  [SMALL_STATE(88)] = 3027,
  [SMALL_STATE(89)] = 3046,
  [SMALL_STATE(90)] = 3062,
  [SMALL_STATE(91)] = 3078,
  [SMALL_STATE(92)] = 3094,
  [SMALL_STATE(93)] = 3108,
  [SMALL_STATE(94)] = 3122,
  [SMALL_STATE(95)] = 3138,
  [SMALL_STATE(96)] = 3145,
  [SMALL_STATE(97)] = 3154,
  [SMALL_STATE(98)] = 3164,
  [SMALL_STATE(99)] = 3170,
  [SMALL_STATE(100)] = 3180,
  [SMALL_STATE(101)] = 3190,
  [SMALL_STATE(102)] = 3200,
  [SMALL_STATE(103)] = 3206,
  [SMALL_STATE(104)] = 3214,
  [SMALL_STATE(105)] = 3224,
  [SMALL_STATE(106)] = 3230,
  [SMALL_STATE(107)] = 3240,
  [SMALL_STATE(108)] = 3250,
  [SMALL_STATE(109)] = 3260,
  [SMALL_STATE(110)] = 3270,
  [SMALL_STATE(111)] = 3276,
  [SMALL_STATE(112)] = 3286,
  [SMALL_STATE(113)] = 3296,
  [SMALL_STATE(114)] = 3306,
  [SMALL_STATE(115)] = 3314,
  [SMALL_STATE(116)] = 3324,
  [SMALL_STATE(117)] = 3329,
  [SMALL_STATE(118)] = 3334,
  [SMALL_STATE(119)] = 3341,
  [SMALL_STATE(120)] = 3348,
  [SMALL_STATE(121)] = 3355,
  [SMALL_STATE(122)] = 3362,
  [SMALL_STATE(123)] = 3367,
  [SMALL_STATE(124)] = 3374,
  [SMALL_STATE(125)] = 3381,
  [SMALL_STATE(126)] = 3388,
  [SMALL_STATE(127)] = 3395,
  [SMALL_STATE(128)] = 3402,
  [SMALL_STATE(129)] = 3406,
  [SMALL_STATE(130)] = 3410,
  [SMALL_STATE(131)] = 3414,
  [SMALL_STATE(132)] = 3418,
  [SMALL_STATE(133)] = 3422,
  [SMALL_STATE(134)] = 3426,
  [SMALL_STATE(135)] = 3430,
  [SMALL_STATE(136)] = 3434,
  [SMALL_STATE(137)] = 3438,
  [SMALL_STATE(138)] = 3442,
  [SMALL_STATE(139)] = 3446,
  [SMALL_STATE(140)] = 3450,
  [SMALL_STATE(141)] = 3454,
  [SMALL_STATE(142)] = 3458,
  [SMALL_STATE(143)] = 3462,
  [SMALL_STATE(144)] = 3466,
  [SMALL_STATE(145)] = 3470,
  [SMALL_STATE(146)] = 3474,
  [SMALL_STATE(147)] = 3478,
  [SMALL_STATE(148)] = 3482,
  [SMALL_STATE(149)] = 3486,
  [SMALL_STATE(150)] = 3490,
  [SMALL_STATE(151)] = 3494,
  [SMALL_STATE(152)] = 3498,
  [SMALL_STATE(153)] = 3502,
  [SMALL_STATE(154)] = 3506,
  [SMALL_STATE(155)] = 3510,
  [SMALL_STATE(156)] = 3514,
  [SMALL_STATE(157)] = 3518,
  [SMALL_STATE(158)] = 3522,
  [SMALL_STATE(159)] = 3526,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(47),
  [7] = {.count = 1, .reusable = true}, SHIFT(8),
  [9] = {.count = 1, .reusable = true}, SHIFT(88),
  [11] = {.count = 1, .reusable = true}, SHIFT(24),
  [13] = {.count = 1, .reusable = true}, SHIFT(158),
  [15] = {.count = 1, .reusable = true}, SHIFT(76),
  [17] = {.count = 1, .reusable = true}, SHIFT(85),
  [19] = {.count = 1, .reusable = false}, SHIFT(85),
  [21] = {.count = 1, .reusable = true}, SHIFT(78),
  [23] = {.count = 1, .reusable = true}, SHIFT(157),
  [25] = {.count = 1, .reusable = true}, SHIFT(79),
  [27] = {.count = 1, .reusable = true}, SHIFT(86),
  [29] = {.count = 1, .reusable = true}, SHIFT(45),
  [31] = {.count = 1, .reusable = false}, SHIFT(82),
  [33] = {.count = 1, .reusable = true}, SHIFT(81),
  [35] = {.count = 1, .reusable = true}, SHIFT(156),
  [37] = {.count = 1, .reusable = true}, SHIFT(152),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(158),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [60] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(157),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(86),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [78] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [80] = {.count = 1, .reusable = true}, SHIFT(140),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 2),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 2),
  [86] = {.count = 1, .reusable = true}, SHIFT(131),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 1),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 1),
  [92] = {.count = 1, .reusable = true}, SHIFT(23),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 3),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 3),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 3),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 3),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 4),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 4),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 1),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 1),
  [130] = {.count = 1, .reusable = true}, SHIFT(40),
  [132] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 1), SHIFT(135),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 8, .production_id = 5),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 8, .production_id = 5),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 2),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 2),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 1),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 1),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 2),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [175] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(82),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(81),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [185] = {.count = 1, .reusable = true}, SHIFT(41),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 1),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 1),
  [191] = {.count = 1, .reusable = true}, SHIFT(90),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 2),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 2),
  [197] = {.count = 1, .reusable = true}, SHIFT(36),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2),
  [201] = {.count = 1, .reusable = false}, REDUCE(aux_sym__type_name_repeat1, 2),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(90),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 2),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 2),
  [210] = {.count = 1, .reusable = true}, SHIFT(42),
  [212] = {.count = 1, .reusable = true}, SHIFT(94),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 3),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 3),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(94),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_variable_name, 2),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_variable_name, 2),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_tag_name, 1),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_tag_name, 1),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_text_line, 2),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_text_line, 2),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 1),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 1),
  [237] = {.count = 1, .reusable = true}, SHIFT(48),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 2),
  [241] = {.count = 1, .reusable = true}, SHIFT(138),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 2),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 2),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 2),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 5),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 5),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 4),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 4),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 3),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 3),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 9, .production_id = 5),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 9, .production_id = 5),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 4),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 4),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym__global_tag, 3),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym__global_tag, 3),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 2),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 2),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 8, .production_id = 4),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 8, .production_id = 4),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 3),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 3),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 3),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 3),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym__see_tag, 3),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym__see_tag, 3),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 3),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 3),
  [301] = {.count = 1, .reusable = true}, SHIFT(93),
  [303] = {.count = 1, .reusable = true}, SHIFT(10),
  [305] = {.count = 1, .reusable = true}, SHIFT(118),
  [307] = {.count = 1, .reusable = true}, SHIFT(155),
  [309] = {.count = 1, .reusable = true}, SHIFT(12),
  [311] = {.count = 1, .reusable = true}, SHIFT(9),
  [313] = {.count = 1, .reusable = false}, SHIFT(80),
  [315] = {.count = 1, .reusable = false}, SHIFT(84),
  [317] = {.count = 1, .reusable = true}, SHIFT(82),
  [319] = {.count = 1, .reusable = true}, SHIFT(29),
  [321] = {.count = 1, .reusable = true}, SHIFT(73),
  [323] = {.count = 1, .reusable = true}, SHIFT(110),
  [325] = {.count = 1, .reusable = true}, SHIFT(145),
  [327] = {.count = 1, .reusable = true}, SHIFT(144),
  [329] = {.count = 1, .reusable = true}, SHIFT(129),
  [331] = {.count = 1, .reusable = false}, SHIFT(46),
  [333] = {.count = 1, .reusable = false}, SHIFT(83),
  [335] = {.count = 1, .reusable = false}, SHIFT(81),
  [337] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2),
  [339] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(83),
  [342] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(81),
  [345] = {.count = 1, .reusable = true}, SHIFT(87),
  [347] = {.count = 1, .reusable = true}, SHIFT(17),
  [349] = {.count = 1, .reusable = true}, SHIFT(72),
  [351] = {.count = 1, .reusable = true}, SHIFT(92),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 3),
  [355] = {.count = 1, .reusable = true}, SHIFT(105),
  [357] = {.count = 1, .reusable = true}, SHIFT(75),
  [359] = {.count = 1, .reusable = true}, SHIFT(15),
  [361] = {.count = 1, .reusable = true}, SHIFT(91),
  [363] = {.count = 1, .reusable = true}, SHIFT(89),
  [365] = {.count = 1, .reusable = true}, SHIFT(18),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_param, 2),
  [369] = {.count = 1, .reusable = true}, SHIFT(146),
  [371] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(89),
  [374] = {.count = 1, .reusable = true}, SHIFT(26),
  [376] = {.count = 1, .reusable = true}, SHIFT(16),
  [378] = {.count = 1, .reusable = true}, SHIFT(20),
  [380] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(91),
  [383] = {.count = 1, .reusable = true}, SHIFT(11),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_param, 1),
  [387] = {.count = 1, .reusable = true}, SHIFT(151),
  [389] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(75),
  [392] = {.count = 1, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_param, 3),
  [396] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 1), SHIFT(120),
  [399] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2), SHIFT_REPEAT(135),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_param, 4),
  [404] = {.count = 1, .reusable = true}, SHIFT(153),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 2),
  [408] = {.count = 1, .reusable = true}, SHIFT(134),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 2),
  [412] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 2), SHIFT(135),
  [415] = {.count = 1, .reusable = true}, SHIFT(139),
  [417] = {.count = 1, .reusable = true}, SHIFT(123),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 3),
  [421] = {.count = 1, .reusable = true}, SHIFT(44),
  [423] = {.count = 1, .reusable = true}, SHIFT(130),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3, .production_id = 3),
  [427] = {.count = 1, .reusable = true}, SHIFT(141),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym__internal_inline_tag, 2, .production_id = 1),
  [431] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [433] = {.count = 1, .reusable = true}, SHIFT(150),
  [435] = {.count = 1, .reusable = true}, SHIFT(74),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [439] = {.count = 1, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2),
  [441] = {.count = 1, .reusable = true}, SHIFT(95),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 2),
  [445] = {.count = 1, .reusable = true}, SHIFT(124),
  [447] = {.count = 1, .reusable = true}, SHIFT(136),
  [449] = {.count = 1, .reusable = true}, SHIFT(122),
  [451] = {.count = 1, .reusable = true}, SHIFT(133),
  [453] = {.count = 1, .reusable = true}, SHIFT(96),
  [455] = {.count = 1, .reusable = true}, SHIFT(143),
  [457] = {.count = 1, .reusable = true}, SHIFT(56),
  [459] = {.count = 1, .reusable = true}, SHIFT(117),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 3, .production_id = 3),
  [465] = {.count = 1, .reusable = true}, SHIFT(34),
  [467] = {.count = 1, .reusable = true}, SHIFT(98),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [471] = {.count = 1, .reusable = true}, SHIFT(77),
  [473] = {.count = 1, .reusable = true}, SHIFT(22),
  [475] = {.count = 1, .reusable = true}, SHIFT(31),
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
