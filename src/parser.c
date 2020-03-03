#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 110
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 78
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
  anon_sym_ATglobal = 7,
  anon_sym_ATinternal = 8,
  anon_sym_ATlink = 9,
  anon_sym_ATmethod = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_ATparam = 13,
  anon_sym_ATproperty = 14,
  anon_sym_ATproperty_DASHread = 15,
  anon_sym_ATproperty_DASHwrite = 16,
  anon_sym_ATreturn = 17,
  sym_author_name = 18,
  sym_email_address = 19,
  anon_sym_ATapi = 20,
  anon_sym_ATcategory = 21,
  anon_sym_ATcopyright = 22,
  anon_sym_ATexample = 23,
  anon_sym_ATfilesource = 24,
  anon_sym_ATignore = 25,
  anon_sym_ATlicense = 26,
  anon_sym_ATpackage = 27,
  anon_sym_ATsee = 28,
  anon_sym_ATsince = 29,
  anon_sym_ATsource = 30,
  anon_sym_ATsubpackage = 31,
  anon_sym_ATthrows = 32,
  anon_sym_ATtodo = 33,
  anon_sym_ATuses = 34,
  anon_sym_ATvar = 35,
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
  sym__deprecated_tag = 53,
  sym__global_tag = 54,
  sym__internal_tag = 55,
  sym__internal_inline_tag = 56,
  sym__link_tag = 57,
  sym__link_inline_tag = 58,
  sym__method_tag = 59,
  sym__variable_tag_with_type = 60,
  sym__return_tag = 61,
  sym_tag_name = 62,
  sym_description = 63,
  sym_text_line = 64,
  sym_inline_tag = 65,
  sym__type_name = 66,
  sym_param = 67,
  sym_qualified_name = 68,
  sym__namespace_name = 69,
  sym__namespace_name_as_prefix = 70,
  sym_variable_name = 71,
  aux_sym_document_repeat1 = 72,
  aux_sym__method_tag_repeat1 = 73,
  aux_sym_description_repeat1 = 74,
  aux_sym_text_line_repeat1 = 75,
  aux_sym__type_name_repeat1 = 76,
  aux_sym__namespace_name_repeat1 = 77,
  alias_sym_name = 78,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__name] = "_name",
  [sym__begin] = "_begin",
  [anon_sym_ATauthor] = "tag_name",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_ATdeprecated] = "tag_name",
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
  [anon_sym_ATsee] = "@see",
  [anon_sym_ATsince] = "@since",
  [anon_sym_ATsource] = "@source",
  [anon_sym_ATsubpackage] = "@subpackage",
  [anon_sym_ATthrows] = "@throws",
  [anon_sym_ATtodo] = "@todo",
  [anon_sym_ATuses] = "@uses",
  [anon_sym_ATvar] = "@var",
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
  [sym__deprecated_tag] = "_deprecated_tag",
  [sym__global_tag] = "_global_tag",
  [sym__internal_tag] = "_internal_tag",
  [sym__internal_inline_tag] = "_internal_inline_tag",
  [sym__link_tag] = "_link_tag",
  [sym__link_inline_tag] = "_link_inline_tag",
  [sym__method_tag] = "_method_tag",
  [sym__variable_tag_with_type] = "_variable_tag_with_type",
  [sym__return_tag] = "_return_tag",
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
  [anon_sym_ATsee] = anon_sym_ATsee,
  [anon_sym_ATsince] = anon_sym_ATsince,
  [anon_sym_ATsource] = anon_sym_ATsource,
  [anon_sym_ATsubpackage] = anon_sym_ATsubpackage,
  [anon_sym_ATthrows] = anon_sym_ATthrows,
  [anon_sym_ATtodo] = anon_sym_ATtodo,
  [anon_sym_ATuses] = anon_sym_ATuses,
  [anon_sym_ATvar] = anon_sym_ATvar,
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
  [sym__deprecated_tag] = sym__deprecated_tag,
  [sym__global_tag] = sym__global_tag,
  [sym__internal_tag] = sym__internal_tag,
  [sym__internal_inline_tag] = sym__internal_inline_tag,
  [sym__link_tag] = sym__link_tag,
  [sym__link_inline_tag] = sym__link_inline_tag,
  [sym__method_tag] = sym__method_tag,
  [sym__variable_tag_with_type] = sym__variable_tag_with_type,
  [sym__return_tag] = sym__return_tag,
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
  [anon_sym_ATsee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsince] = {
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
  [anon_sym_ATthrows] = {
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
  [anon_sym_ATvar] = {
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
  [sym__deprecated_tag] = {
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
      if (eof) ADVANCE(165);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(164)
      if (lookahead == '\r') SKIP(164)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead == '}') ADVANCE(208);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(212);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '*') SKIP(1)
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '|') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(212);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(207);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '@') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(182);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '@') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(182);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(14)
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') SKIP(14)
      if (lookahead == '*') SKIP(14)
      if (lookahead == '{') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 15:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '*') SKIP(15)
      if (lookahead == '}') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(206);
      END_STATE();
    case 16:
      if (lookahead == '\t') SKIP(16)
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == ' ') SKIP(16)
      if (lookahead == '*') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead == '}') ADVANCE(208);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(212);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 18:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead == '}') ADVANCE(208);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(212);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(166);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(211);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(214);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'g') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(173);
      END_STATE();
    case 92:
      if (lookahead == 'k') ADVANCE(33);
      END_STATE();
    case 93:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(132);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 156:
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 157:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 158:
      if (lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 159:
      if (lookahead == 'y') ADVANCE(178);
      END_STATE();
    case 160:
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 164:
      if (eof) ADVANCE(165);
      if (lookahead == '\t') SKIP(164)
      if (lookahead == '\n') SKIP(164)
      if (lookahead == '\r') SKIP(164)
      if (lookahead == ' ') SKIP(164)
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead == '}') ADVANCE(208);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(212);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(14);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(203);
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
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 16},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
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
    [anon_sym_ATapi] = ACTIONS(1),
    [anon_sym_ATcategory] = ACTIONS(1),
    [anon_sym_ATcopyright] = ACTIONS(1),
    [anon_sym_ATexample] = ACTIONS(1),
    [anon_sym_ATfilesource] = ACTIONS(1),
    [anon_sym_ATignore] = ACTIONS(1),
    [anon_sym_ATlicense] = ACTIONS(1),
    [anon_sym_ATpackage] = ACTIONS(1),
    [anon_sym_ATsee] = ACTIONS(1),
    [anon_sym_ATsince] = ACTIONS(1),
    [anon_sym_ATsource] = ACTIONS(1),
    [anon_sym_ATsubpackage] = ACTIONS(1),
    [anon_sym_ATthrows] = ACTIONS(1),
    [anon_sym_ATtodo] = ACTIONS(1),
    [anon_sym_ATuses] = ACTIONS(1),
    [anon_sym_ATvar] = ACTIONS(1),
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
    [sym_document] = STATE(90),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(6),
    [sym__author_tag] = STATE(35),
    [sym__deprecated_tag] = STATE(35),
    [sym__global_tag] = STATE(35),
    [sym__internal_tag] = STATE(35),
    [sym__link_tag] = STATE(35),
    [sym__method_tag] = STATE(35),
    [sym__variable_tag_with_type] = STATE(35),
    [sym__return_tag] = STATE(35),
    [sym_tag_name] = STATE(13),
    [sym_description] = STATE(3),
    [sym_text_line] = STATE(16),
    [sym_inline_tag] = STATE(56),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_description_repeat1] = STATE(16),
    [aux_sym_text_line_repeat1] = STATE(56),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(21),
    [anon_sym_ATapi] = ACTIONS(23),
    [anon_sym_ATcategory] = ACTIONS(23),
    [anon_sym_ATcopyright] = ACTIONS(23),
    [anon_sym_ATexample] = ACTIONS(23),
    [anon_sym_ATfilesource] = ACTIONS(23),
    [anon_sym_ATignore] = ACTIONS(23),
    [anon_sym_ATlicense] = ACTIONS(23),
    [anon_sym_ATpackage] = ACTIONS(23),
    [anon_sym_ATsee] = ACTIONS(23),
    [anon_sym_ATsince] = ACTIONS(23),
    [anon_sym_ATsource] = ACTIONS(23),
    [anon_sym_ATsubpackage] = ACTIONS(23),
    [anon_sym_ATthrows] = ACTIONS(23),
    [anon_sym_ATtodo] = ACTIONS(23),
    [anon_sym_ATuses] = ACTIONS(23),
    [anon_sym_ATvar] = ACTIONS(23),
    [anon_sym_ATversion] = ACTIONS(23),
    [sym_text] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym__end] = ACTIONS(29),
  },
  [3] = {
    [sym_tag] = STATE(5),
    [sym__author_tag] = STATE(35),
    [sym__deprecated_tag] = STATE(35),
    [sym__global_tag] = STATE(35),
    [sym__internal_tag] = STATE(35),
    [sym__link_tag] = STATE(35),
    [sym__method_tag] = STATE(35),
    [sym__variable_tag_with_type] = STATE(35),
    [sym__return_tag] = STATE(35),
    [sym_tag_name] = STATE(13),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(21),
    [anon_sym_ATapi] = ACTIONS(23),
    [anon_sym_ATcategory] = ACTIONS(23),
    [anon_sym_ATcopyright] = ACTIONS(23),
    [anon_sym_ATexample] = ACTIONS(23),
    [anon_sym_ATfilesource] = ACTIONS(23),
    [anon_sym_ATignore] = ACTIONS(23),
    [anon_sym_ATlicense] = ACTIONS(23),
    [anon_sym_ATpackage] = ACTIONS(23),
    [anon_sym_ATsee] = ACTIONS(23),
    [anon_sym_ATsince] = ACTIONS(23),
    [anon_sym_ATsource] = ACTIONS(23),
    [anon_sym_ATsubpackage] = ACTIONS(23),
    [anon_sym_ATthrows] = ACTIONS(23),
    [anon_sym_ATtodo] = ACTIONS(23),
    [anon_sym_ATuses] = ACTIONS(23),
    [anon_sym_ATvar] = ACTIONS(23),
    [anon_sym_ATversion] = ACTIONS(23),
    [sym__end] = ACTIONS(31),
  },
  [4] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(35),
    [sym__deprecated_tag] = STATE(35),
    [sym__global_tag] = STATE(35),
    [sym__internal_tag] = STATE(35),
    [sym__link_tag] = STATE(35),
    [sym__method_tag] = STATE(35),
    [sym__variable_tag_with_type] = STATE(35),
    [sym__return_tag] = STATE(35),
    [sym_tag_name] = STATE(13),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATauthor] = ACTIONS(33),
    [anon_sym_ATdeprecated] = ACTIONS(36),
    [anon_sym_ATglobal] = ACTIONS(39),
    [anon_sym_ATinternal] = ACTIONS(42),
    [anon_sym_ATlink] = ACTIONS(45),
    [anon_sym_ATmethod] = ACTIONS(48),
    [anon_sym_ATparam] = ACTIONS(51),
    [anon_sym_ATproperty] = ACTIONS(54),
    [anon_sym_ATproperty_DASHread] = ACTIONS(51),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(51),
    [anon_sym_ATreturn] = ACTIONS(57),
    [anon_sym_ATapi] = ACTIONS(60),
    [anon_sym_ATcategory] = ACTIONS(60),
    [anon_sym_ATcopyright] = ACTIONS(60),
    [anon_sym_ATexample] = ACTIONS(60),
    [anon_sym_ATfilesource] = ACTIONS(60),
    [anon_sym_ATignore] = ACTIONS(60),
    [anon_sym_ATlicense] = ACTIONS(60),
    [anon_sym_ATpackage] = ACTIONS(60),
    [anon_sym_ATsee] = ACTIONS(60),
    [anon_sym_ATsince] = ACTIONS(60),
    [anon_sym_ATsource] = ACTIONS(60),
    [anon_sym_ATsubpackage] = ACTIONS(60),
    [anon_sym_ATthrows] = ACTIONS(60),
    [anon_sym_ATtodo] = ACTIONS(60),
    [anon_sym_ATuses] = ACTIONS(60),
    [anon_sym_ATvar] = ACTIONS(60),
    [anon_sym_ATversion] = ACTIONS(60),
    [sym__end] = ACTIONS(63),
  },
  [5] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(35),
    [sym__deprecated_tag] = STATE(35),
    [sym__global_tag] = STATE(35),
    [sym__internal_tag] = STATE(35),
    [sym__link_tag] = STATE(35),
    [sym__method_tag] = STATE(35),
    [sym__variable_tag_with_type] = STATE(35),
    [sym__return_tag] = STATE(35),
    [sym_tag_name] = STATE(13),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(21),
    [anon_sym_ATapi] = ACTIONS(23),
    [anon_sym_ATcategory] = ACTIONS(23),
    [anon_sym_ATcopyright] = ACTIONS(23),
    [anon_sym_ATexample] = ACTIONS(23),
    [anon_sym_ATfilesource] = ACTIONS(23),
    [anon_sym_ATignore] = ACTIONS(23),
    [anon_sym_ATlicense] = ACTIONS(23),
    [anon_sym_ATpackage] = ACTIONS(23),
    [anon_sym_ATsee] = ACTIONS(23),
    [anon_sym_ATsince] = ACTIONS(23),
    [anon_sym_ATsource] = ACTIONS(23),
    [anon_sym_ATsubpackage] = ACTIONS(23),
    [anon_sym_ATthrows] = ACTIONS(23),
    [anon_sym_ATtodo] = ACTIONS(23),
    [anon_sym_ATuses] = ACTIONS(23),
    [anon_sym_ATvar] = ACTIONS(23),
    [anon_sym_ATversion] = ACTIONS(23),
    [sym__end] = ACTIONS(65),
  },
  [6] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(35),
    [sym__deprecated_tag] = STATE(35),
    [sym__global_tag] = STATE(35),
    [sym__internal_tag] = STATE(35),
    [sym__link_tag] = STATE(35),
    [sym__method_tag] = STATE(35),
    [sym__variable_tag_with_type] = STATE(35),
    [sym__return_tag] = STATE(35),
    [sym_tag_name] = STATE(13),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(21),
    [anon_sym_ATapi] = ACTIONS(23),
    [anon_sym_ATcategory] = ACTIONS(23),
    [anon_sym_ATcopyright] = ACTIONS(23),
    [anon_sym_ATexample] = ACTIONS(23),
    [anon_sym_ATfilesource] = ACTIONS(23),
    [anon_sym_ATignore] = ACTIONS(23),
    [anon_sym_ATlicense] = ACTIONS(23),
    [anon_sym_ATpackage] = ACTIONS(23),
    [anon_sym_ATsee] = ACTIONS(23),
    [anon_sym_ATsince] = ACTIONS(23),
    [anon_sym_ATsource] = ACTIONS(23),
    [anon_sym_ATsubpackage] = ACTIONS(23),
    [anon_sym_ATthrows] = ACTIONS(23),
    [anon_sym_ATtodo] = ACTIONS(23),
    [anon_sym_ATuses] = ACTIONS(23),
    [anon_sym_ATvar] = ACTIONS(23),
    [anon_sym_ATversion] = ACTIONS(23),
    [sym__end] = ACTIONS(31),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(25), 1,
      sym_text,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_ATproperty,
    ACTIONS(71), 1,
      sym_version,
    STATE(29), 1,
      sym_description,
    STATE(16), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(56), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(67), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [54] = 7,
    ACTIONS(25), 1,
      sym_text,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_ATproperty,
    STATE(43), 1,
      sym_description,
    STATE(16), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(56), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(73), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [105] = 7,
    ACTIONS(25), 1,
      sym_text,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_ATproperty,
    STATE(32), 1,
      sym_description,
    STATE(16), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(56), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(77), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [156] = 7,
    ACTIONS(25), 1,
      sym_text,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_ATproperty,
    STATE(31), 1,
      sym_description,
    STATE(16), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(56), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(81), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [207] = 7,
    ACTIONS(25), 1,
      sym_text,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_ATproperty,
    STATE(33), 1,
      sym_description,
    STATE(16), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(56), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(85), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [258] = 7,
    ACTIONS(25), 1,
      sym_text,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_ATproperty,
    STATE(42), 1,
      sym_description,
    STATE(16), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(56), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(89), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [309] = 7,
    ACTIONS(25), 1,
      sym_text,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_ATproperty,
    STATE(40), 1,
      sym_description,
    STATE(16), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(56), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(93), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [360] = 6,
    ACTIONS(99), 1,
      anon_sym_ATproperty,
    ACTIONS(101), 1,
      sym_text,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    STATE(14), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(56), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(97), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [408] = 5,
    ACTIONS(111), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    STATE(82), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(109), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(107), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [454] = 6,
    ACTIONS(25), 1,
      sym_text,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      anon_sym_ATproperty,
    STATE(14), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(56), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(116), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [502] = 4,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(122), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(120), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [544] = 3,
    ACTIONS(130), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(128), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(126), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [584] = 4,
    ACTIONS(136), 1,
      anon_sym_PIPE,
    STATE(19), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(134), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(132), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [626] = 4,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    STATE(19), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(141), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(139), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [668] = 2,
    ACTIONS(145), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(143), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [705] = 2,
    ACTIONS(134), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(132), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [742] = 2,
    ACTIONS(128), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(126), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [779] = 2,
    ACTIONS(149), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(147), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [815] = 2,
    ACTIONS(153), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(151), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [851] = 2,
    ACTIONS(157), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(155), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [887] = 3,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_ATproperty,
    ACTIONS(159), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [924] = 3,
    ACTIONS(167), 1,
      anon_sym_ATproperty,
    ACTIONS(169), 1,
      sym_author_name,
    ACTIONS(165), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [961] = 2,
    ACTIONS(91), 1,
      anon_sym_ATproperty,
    ACTIONS(89), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [995] = 2,
    ACTIONS(173), 1,
      anon_sym_ATproperty,
    ACTIONS(171), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1029] = 2,
    ACTIONS(177), 1,
      anon_sym_ATproperty,
    ACTIONS(175), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1063] = 2,
    ACTIONS(181), 1,
      anon_sym_ATproperty,
    ACTIONS(179), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1097] = 2,
    ACTIONS(185), 1,
      anon_sym_ATproperty,
    ACTIONS(183), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1131] = 2,
    ACTIONS(189), 1,
      anon_sym_ATproperty,
    ACTIONS(187), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1165] = 2,
    ACTIONS(95), 1,
      anon_sym_ATproperty,
    ACTIONS(93), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1199] = 2,
    ACTIONS(193), 1,
      anon_sym_ATproperty,
    ACTIONS(191), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1233] = 2,
    ACTIONS(197), 1,
      anon_sym_ATproperty,
    ACTIONS(195), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1267] = 2,
    ACTIONS(201), 1,
      anon_sym_ATproperty,
    ACTIONS(199), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1301] = 2,
    ACTIONS(205), 1,
      anon_sym_ATproperty,
    ACTIONS(203), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1335] = 2,
    ACTIONS(209), 1,
      anon_sym_ATproperty,
    ACTIONS(207), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1369] = 2,
    ACTIONS(213), 1,
      anon_sym_ATproperty,
    ACTIONS(211), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1403] = 2,
    ACTIONS(217), 1,
      anon_sym_ATproperty,
    ACTIONS(215), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1437] = 2,
    ACTIONS(221), 1,
      anon_sym_ATproperty,
    ACTIONS(219), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1471] = 2,
    ACTIONS(225), 1,
      anon_sym_ATproperty,
    ACTIONS(223), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1505] = 10,
    ACTIONS(227), 1,
      sym__name,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym_qualified_name,
    STATE(68), 1,
      sym_variable_name,
    STATE(80), 1,
      sym__type_name,
    STATE(103), 1,
      sym__namespace_name_as_prefix,
    STATE(104), 1,
      sym__namespace_name,
    STATE(48), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1537] = 10,
    ACTIONS(227), 1,
      sym__name,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_qualified_name,
    STATE(68), 1,
      sym_variable_name,
    STATE(80), 1,
      sym__type_name,
    STATE(103), 1,
      sym__namespace_name_as_prefix,
    STATE(104), 1,
      sym__namespace_name,
    STATE(49), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1569] = 10,
    ACTIONS(227), 1,
      sym__name,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_qualified_name,
    STATE(68), 1,
      sym_variable_name,
    STATE(80), 1,
      sym__type_name,
    STATE(103), 1,
      sym__namespace_name_as_prefix,
    STATE(104), 1,
      sym__namespace_name,
    STATE(51), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1601] = 10,
    ACTIONS(227), 1,
      sym__name,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_qualified_name,
    STATE(68), 1,
      sym_variable_name,
    STATE(80), 1,
      sym__type_name,
    STATE(103), 1,
      sym__namespace_name_as_prefix,
    STATE(104), 1,
      sym__namespace_name,
    STATE(49), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1633] = 10,
    ACTIONS(241), 1,
      sym__name,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(249), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym_qualified_name,
    STATE(68), 1,
      sym_variable_name,
    STATE(80), 1,
      sym__type_name,
    STATE(103), 1,
      sym__namespace_name_as_prefix,
    STATE(104), 1,
      sym__namespace_name,
    STATE(49), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1665] = 10,
    ACTIONS(227), 1,
      sym__name,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_qualified_name,
    STATE(68), 1,
      sym_variable_name,
    STATE(80), 1,
      sym__type_name,
    STATE(103), 1,
      sym__namespace_name_as_prefix,
    STATE(104), 1,
      sym__namespace_name,
    STATE(46), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1697] = 10,
    ACTIONS(227), 1,
      sym__name,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_qualified_name,
    STATE(68), 1,
      sym_variable_name,
    STATE(80), 1,
      sym__type_name,
    STATE(103), 1,
      sym__namespace_name_as_prefix,
    STATE(104), 1,
      sym__namespace_name,
    STATE(49), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1729] = 7,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    ACTIONS(256), 1,
      sym__name,
    ACTIONS(258), 1,
      sym_static,
    STATE(65), 1,
      sym_qualified_name,
    STATE(102), 1,
      sym__type_name,
    STATE(103), 1,
      sym__namespace_name_as_prefix,
    STATE(104), 1,
      sym__namespace_name,
  [1751] = 6,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    ACTIONS(260), 1,
      sym__name,
    STATE(10), 1,
      sym__type_name,
    STATE(17), 1,
      sym_qualified_name,
    STATE(104), 1,
      sym__namespace_name,
    STATE(108), 1,
      sym__namespace_name_as_prefix,
  [1770] = 6,
    ACTIONS(227), 1,
      sym__name,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    STATE(65), 1,
      sym_qualified_name,
    STATE(76), 1,
      sym__type_name,
    STATE(103), 1,
      sym__namespace_name_as_prefix,
    STATE(104), 1,
      sym__namespace_name,
  [1789] = 6,
    ACTIONS(227), 1,
      sym__name,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    STATE(65), 1,
      sym_qualified_name,
    STATE(81), 1,
      sym__type_name,
    STATE(103), 1,
      sym__namespace_name_as_prefix,
    STATE(104), 1,
      sym__namespace_name,
  [1808] = 4,
    ACTIONS(264), 1,
      sym_text,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(58), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [1823] = 4,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(268), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(82), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(107), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [1838] = 4,
    ACTIONS(272), 1,
      sym_text,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(58), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [1853] = 5,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(268), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(107), 2,
      sym__name,
      anon_sym_PIPE,
  [1870] = 6,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    ACTIONS(280), 1,
      sym__name,
    STATE(65), 1,
      sym_qualified_name,
    STATE(89), 1,
      sym__type_name,
    STATE(103), 1,
      sym__namespace_name_as_prefix,
    STATE(104), 1,
      sym__namespace_name,
  [1889] = 5,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(268), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(107), 2,
      sym__name,
      anon_sym_PIPE,
  [1906] = 5,
    ACTIONS(227), 1,
      sym__name,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    STATE(73), 1,
      sym_qualified_name,
    STATE(103), 1,
      sym__namespace_name_as_prefix,
    STATE(104), 1,
      sym__namespace_name,
  [1922] = 5,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    ACTIONS(260), 1,
      sym__name,
    STATE(22), 1,
      sym_qualified_name,
    STATE(104), 1,
      sym__namespace_name,
    STATE(108), 1,
      sym__namespace_name_as_prefix,
  [1938] = 1,
    ACTIONS(284), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_text,
      anon_sym_LBRACE,
  [1945] = 3,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(120), 2,
      sym__name,
      anon_sym_DOLLAR,
  [1956] = 3,
    ACTIONS(288), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(132), 2,
      sym__name,
      anon_sym_DOLLAR,
  [1967] = 1,
    ACTIONS(147), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [1974] = 1,
    ACTIONS(291), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [1981] = 3,
    ACTIONS(293), 1,
      anon_sym_ATinternal,
    ACTIONS(295), 1,
      anon_sym_ATlink,
    STATE(98), 2,
      sym__internal_inline_tag,
      sym__link_inline_tag,
  [1992] = 3,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(139), 2,
      sym__name,
      anon_sym_DOLLAR,
  [2003] = 2,
    ACTIONS(297), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(126), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2012] = 1,
    ACTIONS(299), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [2019] = 1,
    ACTIONS(132), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2025] = 1,
    ACTIONS(143), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2031] = 1,
    ACTIONS(126), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2037] = 2,
    ACTIONS(301), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_variable_name,
  [2044] = 2,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    STATE(82), 1,
      aux_sym__namespace_name_repeat1,
  [2051] = 2,
    ACTIONS(303), 1,
      sym_text,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
  [2058] = 2,
    ACTIONS(307), 1,
      sym__name,
    STATE(92), 1,
      sym__namespace_name,
  [2065] = 2,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_variable_name,
  [2072] = 2,
    ACTIONS(301), 1,
      anon_sym_DOLLAR,
    STATE(8), 1,
      sym_variable_name,
  [2079] = 2,
    ACTIONS(310), 1,
      anon_sym_BSLASH,
    STATE(83), 1,
      aux_sym__namespace_name_repeat1,
  [2086] = 2,
    ACTIONS(313), 1,
      anon_sym_BSLASH,
    STATE(83), 1,
      aux_sym__namespace_name_repeat1,
  [2093] = 1,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
  [2097] = 1,
    ACTIONS(318), 1,
      anon_sym_BSLASH,
  [2101] = 1,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
  [2105] = 1,
    ACTIONS(322), 1,
      sym__name,
  [2109] = 1,
    ACTIONS(324), 1,
      sym__name,
  [2113] = 1,
    ACTIONS(326), 1,
      sym__name,
  [2117] = 1,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
  [2121] = 1,
    ACTIONS(330), 1,
      sym__name,
  [2125] = 1,
    ACTIONS(332), 1,
      anon_sym_BSLASH,
  [2129] = 1,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
  [2133] = 1,
    ACTIONS(336), 1,
      anon_sym_GT,
  [2137] = 1,
    ACTIONS(338), 1,
      sym__name,
  [2141] = 1,
    ACTIONS(340), 1,
      sym_email_address,
  [2145] = 1,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
  [2149] = 1,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
  [2153] = 1,
    ACTIONS(346), 1,
      sym_uri,
  [2157] = 1,
    ACTIONS(348), 1,
      sym_text,
  [2161] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [2165] = 1,
    ACTIONS(352), 1,
      sym__name,
  [2169] = 1,
    ACTIONS(354), 1,
      sym__name,
  [2173] = 1,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
  [2177] = 1,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
  [2181] = 1,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
  [2185] = 1,
    ACTIONS(360), 1,
      sym_uri,
  [2189] = 1,
    ACTIONS(362), 1,
      sym__name,
  [2193] = 1,
    ACTIONS(364), 1,
      sym__name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 258,
  [SMALL_STATE(13)] = 309,
  [SMALL_STATE(14)] = 360,
  [SMALL_STATE(15)] = 408,
  [SMALL_STATE(16)] = 454,
  [SMALL_STATE(17)] = 502,
  [SMALL_STATE(18)] = 544,
  [SMALL_STATE(19)] = 584,
  [SMALL_STATE(20)] = 626,
  [SMALL_STATE(21)] = 668,
  [SMALL_STATE(22)] = 705,
  [SMALL_STATE(23)] = 742,
  [SMALL_STATE(24)] = 779,
  [SMALL_STATE(25)] = 815,
  [SMALL_STATE(26)] = 851,
  [SMALL_STATE(27)] = 887,
  [SMALL_STATE(28)] = 924,
  [SMALL_STATE(29)] = 961,
  [SMALL_STATE(30)] = 995,
  [SMALL_STATE(31)] = 1029,
  [SMALL_STATE(32)] = 1063,
  [SMALL_STATE(33)] = 1097,
  [SMALL_STATE(34)] = 1131,
  [SMALL_STATE(35)] = 1165,
  [SMALL_STATE(36)] = 1199,
  [SMALL_STATE(37)] = 1233,
  [SMALL_STATE(38)] = 1267,
  [SMALL_STATE(39)] = 1301,
  [SMALL_STATE(40)] = 1335,
  [SMALL_STATE(41)] = 1369,
  [SMALL_STATE(42)] = 1403,
  [SMALL_STATE(43)] = 1437,
  [SMALL_STATE(44)] = 1471,
  [SMALL_STATE(45)] = 1505,
  [SMALL_STATE(46)] = 1537,
  [SMALL_STATE(47)] = 1569,
  [SMALL_STATE(48)] = 1601,
  [SMALL_STATE(49)] = 1633,
  [SMALL_STATE(50)] = 1665,
  [SMALL_STATE(51)] = 1697,
  [SMALL_STATE(52)] = 1729,
  [SMALL_STATE(53)] = 1751,
  [SMALL_STATE(54)] = 1770,
  [SMALL_STATE(55)] = 1789,
  [SMALL_STATE(56)] = 1808,
  [SMALL_STATE(57)] = 1823,
  [SMALL_STATE(58)] = 1838,
  [SMALL_STATE(59)] = 1853,
  [SMALL_STATE(60)] = 1870,
  [SMALL_STATE(61)] = 1889,
  [SMALL_STATE(62)] = 1906,
  [SMALL_STATE(63)] = 1922,
  [SMALL_STATE(64)] = 1938,
  [SMALL_STATE(65)] = 1945,
  [SMALL_STATE(66)] = 1956,
  [SMALL_STATE(67)] = 1967,
  [SMALL_STATE(68)] = 1974,
  [SMALL_STATE(69)] = 1981,
  [SMALL_STATE(70)] = 1992,
  [SMALL_STATE(71)] = 2003,
  [SMALL_STATE(72)] = 2012,
  [SMALL_STATE(73)] = 2019,
  [SMALL_STATE(74)] = 2025,
  [SMALL_STATE(75)] = 2031,
  [SMALL_STATE(76)] = 2037,
  [SMALL_STATE(77)] = 2044,
  [SMALL_STATE(78)] = 2051,
  [SMALL_STATE(79)] = 2058,
  [SMALL_STATE(80)] = 2065,
  [SMALL_STATE(81)] = 2072,
  [SMALL_STATE(82)] = 2079,
  [SMALL_STATE(83)] = 2086,
  [SMALL_STATE(84)] = 2093,
  [SMALL_STATE(85)] = 2097,
  [SMALL_STATE(86)] = 2101,
  [SMALL_STATE(87)] = 2105,
  [SMALL_STATE(88)] = 2109,
  [SMALL_STATE(89)] = 2113,
  [SMALL_STATE(90)] = 2117,
  [SMALL_STATE(91)] = 2121,
  [SMALL_STATE(92)] = 2125,
  [SMALL_STATE(93)] = 2129,
  [SMALL_STATE(94)] = 2133,
  [SMALL_STATE(95)] = 2137,
  [SMALL_STATE(96)] = 2141,
  [SMALL_STATE(97)] = 2145,
  [SMALL_STATE(98)] = 2149,
  [SMALL_STATE(99)] = 2153,
  [SMALL_STATE(100)] = 2157,
  [SMALL_STATE(101)] = 2161,
  [SMALL_STATE(102)] = 2165,
  [SMALL_STATE(103)] = 2169,
  [SMALL_STATE(104)] = 2173,
  [SMALL_STATE(105)] = 2177,
  [SMALL_STATE(106)] = 2181,
  [SMALL_STATE(107)] = 2185,
  [SMALL_STATE(108)] = 2189,
  [SMALL_STATE(109)] = 2193,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(28),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(54),
  [11] = {.count = 1, .reusable = true}, SHIFT(9),
  [13] = {.count = 1, .reusable = true}, SHIFT(107),
  [15] = {.count = 1, .reusable = true}, SHIFT(52),
  [17] = {.count = 1, .reusable = true}, SHIFT(55),
  [19] = {.count = 1, .reusable = false}, SHIFT(55),
  [21] = {.count = 1, .reusable = true}, SHIFT(53),
  [23] = {.count = 1, .reusable = true}, SHIFT(25),
  [25] = {.count = 1, .reusable = false}, SHIFT(56),
  [27] = {.count = 1, .reusable = true}, SHIFT(69),
  [29] = {.count = 1, .reusable = true}, SHIFT(106),
  [31] = {.count = 1, .reusable = true}, SHIFT(97),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [54] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [65] = {.count = 1, .reusable = true}, SHIFT(101),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 1),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(12),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 3),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 3),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 2),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 2),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 2),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [97] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(56),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(69),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(23),
  [113] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 1), SHIFT(95),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 1),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 1),
  [124] = {.count = 1, .reusable = true}, SHIFT(63),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 2),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 2),
  [130] = {.count = 1, .reusable = true}, SHIFT(21),
  [132] = {.count = 1, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2),
  [134] = {.count = 1, .reusable = false}, REDUCE(aux_sym__type_name_repeat1, 2),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(63),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 2),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 3),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 3),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_variable_name, 2),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_variable_name, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_tag_name, 1),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_tag_name, 1),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_text_line, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_text_line, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 2),
  [161] = {.count = 1, .reusable = true}, SHIFT(96),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 1),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 1),
  [169] = {.count = 1, .reusable = true}, SHIFT(27),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 3),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 3),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 2),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 2),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 3),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 3),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__global_tag, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym__global_tag, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 5),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 5),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 3),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 3),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 4),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 4),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [227] = {.count = 1, .reusable = true}, SHIFT(57),
  [229] = {.count = 1, .reusable = true}, SHIFT(30),
  [231] = {.count = 1, .reusable = true}, SHIFT(79),
  [233] = {.count = 1, .reusable = true}, SHIFT(109),
  [235] = {.count = 1, .reusable = true}, SHIFT(39),
  [237] = {.count = 1, .reusable = true}, SHIFT(38),
  [239] = {.count = 1, .reusable = true}, SHIFT(37),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(57),
  [244] = {.count = 1, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(79),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(109),
  [252] = {.count = 1, .reusable = true}, SHIFT(44),
  [254] = {.count = 1, .reusable = true}, SHIFT(41),
  [256] = {.count = 1, .reusable = false}, SHIFT(61),
  [258] = {.count = 1, .reusable = false}, SHIFT(60),
  [260] = {.count = 1, .reusable = true}, SHIFT(15),
  [262] = {.count = 1, .reusable = false}, SHIFT(26),
  [264] = {.count = 1, .reusable = false}, SHIFT(58),
  [266] = {.count = 1, .reusable = false}, SHIFT(69),
  [268] = {.count = 1, .reusable = true}, SHIFT(75),
  [270] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(58),
  [275] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(69),
  [278] = {.count = 1, .reusable = true}, SHIFT(47),
  [280] = {.count = 1, .reusable = true}, SHIFT(59),
  [282] = {.count = 1, .reusable = true}, SHIFT(45),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 3),
  [286] = {.count = 1, .reusable = true}, SHIFT(62),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(62),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_param, 1),
  [293] = {.count = 1, .reusable = true}, SHIFT(100),
  [295] = {.count = 1, .reusable = true}, SHIFT(99),
  [297] = {.count = 1, .reusable = true}, SHIFT(74),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_param, 2),
  [301] = {.count = 1, .reusable = true}, SHIFT(91),
  [303] = {.count = 1, .reusable = true}, SHIFT(86),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 2),
  [307] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 1), SHIFT(77),
  [310] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 2), SHIFT(95),
  [313] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2), SHIFT_REPEAT(95),
  [316] = {.count = 1, .reusable = true}, SHIFT(50),
  [318] = {.count = 1, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3, .production_id = 3),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 3),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 2),
  [326] = {.count = 1, .reusable = true}, SHIFT(84),
  [328] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [330] = {.count = 1, .reusable = true}, SHIFT(24),
  [332] = {.count = 1, .reusable = true}, SHIFT(87),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym__internal_inline_tag, 2, .production_id = 1),
  [336] = {.count = 1, .reusable = true}, SHIFT(36),
  [338] = {.count = 1, .reusable = true}, SHIFT(85),
  [340] = {.count = 1, .reusable = true}, SHIFT(94),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [344] = {.count = 1, .reusable = true}, SHIFT(64),
  [346] = {.count = 1, .reusable = true}, SHIFT(78),
  [348] = {.count = 1, .reusable = true}, SHIFT(93),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [352] = {.count = 1, .reusable = true}, SHIFT(105),
  [354] = {.count = 1, .reusable = true}, SHIFT(71),
  [356] = {.count = 1, .reusable = true}, SHIFT(88),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [360] = {.count = 1, .reusable = true}, SHIFT(11),
  [362] = {.count = 1, .reusable = true}, SHIFT(18),
  [364] = {.count = 1, .reusable = true}, SHIFT(67),
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
