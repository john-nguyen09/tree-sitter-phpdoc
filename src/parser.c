#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 77
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
  sym_author_name = 14,
  sym_email_address = 15,
  anon_sym_ATapi = 16,
  anon_sym_ATcategory = 17,
  anon_sym_ATcopyright = 18,
  anon_sym_ATexample = 19,
  anon_sym_ATfilesource = 20,
  anon_sym_ATignore = 21,
  anon_sym_ATlicense = 22,
  anon_sym_ATpackage = 23,
  anon_sym_ATproperty = 24,
  anon_sym_ATproperty_DASHread = 25,
  anon_sym_ATproperty_DASHwrite = 26,
  anon_sym_ATreturn = 27,
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
  sym__param_tag = 60,
  sym_tag_name = 61,
  sym_description = 62,
  sym_text_line = 63,
  sym_inline_tag = 64,
  sym__type_name = 65,
  sym_param = 66,
  sym_qualified_name = 67,
  sym__namespace_name = 68,
  sym__namespace_name_as_prefix = 69,
  sym_variable_name = 70,
  aux_sym_document_repeat1 = 71,
  aux_sym__method_tag_repeat1 = 72,
  aux_sym_description_repeat1 = 73,
  aux_sym_text_line_repeat1 = 74,
  aux_sym__type_name_repeat1 = 75,
  aux_sym__namespace_name_repeat1 = 76,
  alias_sym_name = 77,
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
  [anon_sym_ATproperty] = "@property",
  [anon_sym_ATproperty_DASHread] = "@property-read",
  [anon_sym_ATproperty_DASHwrite] = "@property-write",
  [anon_sym_ATreturn] = "@return",
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
  [sym__param_tag] = "_param_tag",
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
  [anon_sym_ATproperty] = anon_sym_ATproperty,
  [anon_sym_ATproperty_DASHread] = anon_sym_ATproperty_DASHread,
  [anon_sym_ATproperty_DASHwrite] = anon_sym_ATproperty_DASHwrite,
  [anon_sym_ATreturn] = anon_sym_ATreturn,
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
  [sym__param_tag] = sym__param_tag,
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
  [anon_sym_ATproperty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATproperty_DASHread] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATproperty_DASHwrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATreturn] = {
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
  [sym__param_tag] = {
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
      if (eof) ADVANCE(159);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(158)
      if (lookahead == '\r') SKIP(158)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '}') ADVANCE(202);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') SKIP(1)
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '|') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '{') ADVANCE(201);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '@') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(172);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '@') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(172);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(8)
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '*') SKIP(8)
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') SKIP(9)
      if (lookahead == '}') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(200);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(10)
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '*') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '}') ADVANCE(202);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '}') ADVANCE(202);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(160);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(205);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == ']') ADVANCE(208);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'g') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(167);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(27);
      END_STATE();
    case 87:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 'w') ADVANCE(126);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 150:
      if (lookahead == 'w') ADVANCE(133);
      END_STATE();
    case 151:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 152:
      if (lookahead == 'y') ADVANCE(176);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 154:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      if (lookahead == '\t') SKIP(158)
      if (lookahead == '\n') SKIP(158)
      if (lookahead == '\r') SKIP(158)
      if (lookahead == ' ') SKIP(158)
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '}') ADVANCE(202);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(197);
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
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 1},
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
    [anon_sym_ATapi] = ACTIONS(1),
    [anon_sym_ATcategory] = ACTIONS(1),
    [anon_sym_ATcopyright] = ACTIONS(1),
    [anon_sym_ATexample] = ACTIONS(1),
    [anon_sym_ATfilesource] = ACTIONS(1),
    [anon_sym_ATignore] = ACTIONS(1),
    [anon_sym_ATlicense] = ACTIONS(1),
    [anon_sym_ATpackage] = ACTIONS(1),
    [anon_sym_ATproperty] = ACTIONS(1),
    [anon_sym_ATproperty_DASHread] = ACTIONS(1),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(1),
    [anon_sym_ATreturn] = ACTIONS(1),
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
    [sym_document] = STATE(80),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(6),
    [sym__author_tag] = STATE(20),
    [sym__deprecated_tag] = STATE(20),
    [sym__global_tag] = STATE(20),
    [sym__internal_tag] = STATE(20),
    [sym__link_tag] = STATE(20),
    [sym__method_tag] = STATE(20),
    [sym__param_tag] = STATE(20),
    [sym_tag_name] = STATE(8),
    [sym_description] = STATE(3),
    [sym_text_line] = STATE(13),
    [sym_inline_tag] = STATE(49),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_description_repeat1] = STATE(13),
    [aux_sym_text_line_repeat1] = STATE(49),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATapi] = ACTIONS(19),
    [anon_sym_ATcategory] = ACTIONS(19),
    [anon_sym_ATcopyright] = ACTIONS(19),
    [anon_sym_ATexample] = ACTIONS(19),
    [anon_sym_ATfilesource] = ACTIONS(19),
    [anon_sym_ATignore] = ACTIONS(19),
    [anon_sym_ATlicense] = ACTIONS(19),
    [anon_sym_ATpackage] = ACTIONS(19),
    [anon_sym_ATproperty] = ACTIONS(21),
    [anon_sym_ATproperty_DASHread] = ACTIONS(19),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(19),
    [anon_sym_ATreturn] = ACTIONS(19),
    [anon_sym_ATsee] = ACTIONS(19),
    [anon_sym_ATsince] = ACTIONS(19),
    [anon_sym_ATsource] = ACTIONS(19),
    [anon_sym_ATsubpackage] = ACTIONS(19),
    [anon_sym_ATthrows] = ACTIONS(19),
    [anon_sym_ATtodo] = ACTIONS(19),
    [anon_sym_ATuses] = ACTIONS(19),
    [anon_sym_ATvar] = ACTIONS(19),
    [anon_sym_ATversion] = ACTIONS(19),
    [sym_text] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym__end] = ACTIONS(27),
  },
  [3] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(20),
    [sym__deprecated_tag] = STATE(20),
    [sym__global_tag] = STATE(20),
    [sym__internal_tag] = STATE(20),
    [sym__link_tag] = STATE(20),
    [sym__method_tag] = STATE(20),
    [sym__param_tag] = STATE(20),
    [sym_tag_name] = STATE(8),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATapi] = ACTIONS(19),
    [anon_sym_ATcategory] = ACTIONS(19),
    [anon_sym_ATcopyright] = ACTIONS(19),
    [anon_sym_ATexample] = ACTIONS(19),
    [anon_sym_ATfilesource] = ACTIONS(19),
    [anon_sym_ATignore] = ACTIONS(19),
    [anon_sym_ATlicense] = ACTIONS(19),
    [anon_sym_ATpackage] = ACTIONS(19),
    [anon_sym_ATproperty] = ACTIONS(21),
    [anon_sym_ATproperty_DASHread] = ACTIONS(19),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(19),
    [anon_sym_ATreturn] = ACTIONS(19),
    [anon_sym_ATsee] = ACTIONS(19),
    [anon_sym_ATsince] = ACTIONS(19),
    [anon_sym_ATsource] = ACTIONS(19),
    [anon_sym_ATsubpackage] = ACTIONS(19),
    [anon_sym_ATthrows] = ACTIONS(19),
    [anon_sym_ATtodo] = ACTIONS(19),
    [anon_sym_ATuses] = ACTIONS(19),
    [anon_sym_ATvar] = ACTIONS(19),
    [anon_sym_ATversion] = ACTIONS(19),
    [sym__end] = ACTIONS(29),
  },
  [4] = {
    [sym_tag] = STATE(5),
    [sym__author_tag] = STATE(20),
    [sym__deprecated_tag] = STATE(20),
    [sym__global_tag] = STATE(20),
    [sym__internal_tag] = STATE(20),
    [sym__link_tag] = STATE(20),
    [sym__method_tag] = STATE(20),
    [sym__param_tag] = STATE(20),
    [sym_tag_name] = STATE(8),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATapi] = ACTIONS(19),
    [anon_sym_ATcategory] = ACTIONS(19),
    [anon_sym_ATcopyright] = ACTIONS(19),
    [anon_sym_ATexample] = ACTIONS(19),
    [anon_sym_ATfilesource] = ACTIONS(19),
    [anon_sym_ATignore] = ACTIONS(19),
    [anon_sym_ATlicense] = ACTIONS(19),
    [anon_sym_ATpackage] = ACTIONS(19),
    [anon_sym_ATproperty] = ACTIONS(21),
    [anon_sym_ATproperty_DASHread] = ACTIONS(19),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(19),
    [anon_sym_ATreturn] = ACTIONS(19),
    [anon_sym_ATsee] = ACTIONS(19),
    [anon_sym_ATsince] = ACTIONS(19),
    [anon_sym_ATsource] = ACTIONS(19),
    [anon_sym_ATsubpackage] = ACTIONS(19),
    [anon_sym_ATthrows] = ACTIONS(19),
    [anon_sym_ATtodo] = ACTIONS(19),
    [anon_sym_ATuses] = ACTIONS(19),
    [anon_sym_ATvar] = ACTIONS(19),
    [anon_sym_ATversion] = ACTIONS(19),
    [sym__end] = ACTIONS(31),
  },
  [5] = {
    [sym_tag] = STATE(5),
    [sym__author_tag] = STATE(20),
    [sym__deprecated_tag] = STATE(20),
    [sym__global_tag] = STATE(20),
    [sym__internal_tag] = STATE(20),
    [sym__link_tag] = STATE(20),
    [sym__method_tag] = STATE(20),
    [sym__param_tag] = STATE(20),
    [sym_tag_name] = STATE(8),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATauthor] = ACTIONS(33),
    [anon_sym_ATdeprecated] = ACTIONS(36),
    [anon_sym_ATglobal] = ACTIONS(39),
    [anon_sym_ATinternal] = ACTIONS(42),
    [anon_sym_ATlink] = ACTIONS(45),
    [anon_sym_ATmethod] = ACTIONS(48),
    [anon_sym_ATparam] = ACTIONS(51),
    [anon_sym_ATapi] = ACTIONS(54),
    [anon_sym_ATcategory] = ACTIONS(54),
    [anon_sym_ATcopyright] = ACTIONS(54),
    [anon_sym_ATexample] = ACTIONS(54),
    [anon_sym_ATfilesource] = ACTIONS(54),
    [anon_sym_ATignore] = ACTIONS(54),
    [anon_sym_ATlicense] = ACTIONS(54),
    [anon_sym_ATpackage] = ACTIONS(54),
    [anon_sym_ATproperty] = ACTIONS(57),
    [anon_sym_ATproperty_DASHread] = ACTIONS(54),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(54),
    [anon_sym_ATreturn] = ACTIONS(54),
    [anon_sym_ATsee] = ACTIONS(54),
    [anon_sym_ATsince] = ACTIONS(54),
    [anon_sym_ATsource] = ACTIONS(54),
    [anon_sym_ATsubpackage] = ACTIONS(54),
    [anon_sym_ATthrows] = ACTIONS(54),
    [anon_sym_ATtodo] = ACTIONS(54),
    [anon_sym_ATuses] = ACTIONS(54),
    [anon_sym_ATvar] = ACTIONS(54),
    [anon_sym_ATversion] = ACTIONS(54),
    [sym__end] = ACTIONS(60),
  },
  [6] = {
    [sym_tag] = STATE(5),
    [sym__author_tag] = STATE(20),
    [sym__deprecated_tag] = STATE(20),
    [sym__global_tag] = STATE(20),
    [sym__internal_tag] = STATE(20),
    [sym__link_tag] = STATE(20),
    [sym__method_tag] = STATE(20),
    [sym__param_tag] = STATE(20),
    [sym_tag_name] = STATE(8),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATapi] = ACTIONS(19),
    [anon_sym_ATcategory] = ACTIONS(19),
    [anon_sym_ATcopyright] = ACTIONS(19),
    [anon_sym_ATexample] = ACTIONS(19),
    [anon_sym_ATfilesource] = ACTIONS(19),
    [anon_sym_ATignore] = ACTIONS(19),
    [anon_sym_ATlicense] = ACTIONS(19),
    [anon_sym_ATpackage] = ACTIONS(19),
    [anon_sym_ATproperty] = ACTIONS(21),
    [anon_sym_ATproperty_DASHread] = ACTIONS(19),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(19),
    [anon_sym_ATreturn] = ACTIONS(19),
    [anon_sym_ATsee] = ACTIONS(19),
    [anon_sym_ATsince] = ACTIONS(19),
    [anon_sym_ATsource] = ACTIONS(19),
    [anon_sym_ATsubpackage] = ACTIONS(19),
    [anon_sym_ATthrows] = ACTIONS(19),
    [anon_sym_ATtodo] = ACTIONS(19),
    [anon_sym_ATuses] = ACTIONS(19),
    [anon_sym_ATvar] = ACTIONS(19),
    [anon_sym_ATversion] = ACTIONS(19),
    [sym__end] = ACTIONS(29),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_ATproperty,
    ACTIONS(66), 1,
      sym_version,
    STATE(24), 1,
      sym_description,
    STATE(13), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(49), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(62), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_ATproperty,
    STATE(21), 1,
      sym_description,
    STATE(13), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(49), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(68), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_ATproperty,
    STATE(29), 1,
      sym_description,
    STATE(13), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(49), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(72), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      anon_sym_ATproperty,
    STATE(30), 1,
      sym_description,
    STATE(13), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(49), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(76), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_ATproperty,
    STATE(23), 1,
      sym_description,
    STATE(13), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(49), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(80), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_ATproperty,
    STATE(32), 1,
      sym_description,
    STATE(13), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(49), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(84), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [309] = 6,
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_ATproperty,
    STATE(14), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(49), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(88), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [357] = 6,
    ACTIONS(94), 1,
      anon_sym_ATproperty,
    ACTIONS(96), 1,
      sym_text,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    STATE(14), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(49), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(92), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [405] = 2,
    ACTIONS(104), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(102), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [441] = 2,
    ACTIONS(108), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(106), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [477] = 2,
    ACTIONS(112), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(110), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [513] = 3,
    ACTIONS(116), 1,
      anon_sym_LT,
    ACTIONS(118), 1,
      anon_sym_ATproperty,
    ACTIONS(114), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [550] = 3,
    ACTIONS(122), 1,
      sym_author_name,
    ACTIONS(124), 1,
      anon_sym_ATproperty,
    ACTIONS(120), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [587] = 2,
    ACTIONS(70), 1,
      anon_sym_ATproperty,
    ACTIONS(68), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [621] = 2,
    ACTIONS(128), 1,
      anon_sym_ATproperty,
    ACTIONS(126), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [655] = 2,
    ACTIONS(132), 1,
      anon_sym_ATproperty,
    ACTIONS(130), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [689] = 2,
    ACTIONS(136), 1,
      anon_sym_ATproperty,
    ACTIONS(134), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [723] = 2,
    ACTIONS(82), 1,
      anon_sym_ATproperty,
    ACTIONS(80), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [757] = 2,
    ACTIONS(140), 1,
      anon_sym_ATproperty,
    ACTIONS(138), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [791] = 2,
    ACTIONS(144), 1,
      anon_sym_ATproperty,
    ACTIONS(142), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [825] = 2,
    ACTIONS(148), 1,
      anon_sym_ATproperty,
    ACTIONS(146), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [859] = 2,
    ACTIONS(152), 1,
      anon_sym_ATproperty,
    ACTIONS(150), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [893] = 2,
    ACTIONS(156), 1,
      anon_sym_ATproperty,
    ACTIONS(154), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [927] = 2,
    ACTIONS(160), 1,
      anon_sym_ATproperty,
    ACTIONS(158), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
    ACTIONS(164), 1,
      anon_sym_ATproperty,
    ACTIONS(162), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
    ACTIONS(168), 1,
      anon_sym_ATproperty,
    ACTIONS(166), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
    ACTIONS(172), 1,
      anon_sym_ATproperty,
    ACTIONS(170), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
    ACTIONS(176), 1,
      anon_sym_ATproperty,
    ACTIONS(174), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
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
  [1097] = 10,
    ACTIONS(178), 1,
      sym__name,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_qualified_name,
    STATE(60), 1,
      sym_variable_name,
    STATE(68), 1,
      sym__type_name,
    STATE(91), 1,
      sym__namespace_name_as_prefix,
    STATE(92), 1,
      sym__namespace_name,
    STATE(38), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1129] = 10,
    ACTIONS(186), 1,
      sym__name,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(191), 1,
      anon_sym_BSLASH,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_qualified_name,
    STATE(60), 1,
      sym_variable_name,
    STATE(68), 1,
      sym__type_name,
    STATE(91), 1,
      sym__namespace_name_as_prefix,
    STATE(92), 1,
      sym__namespace_name,
    STATE(36), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1161] = 10,
    ACTIONS(178), 1,
      sym__name,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_qualified_name,
    STATE(60), 1,
      sym_variable_name,
    STATE(68), 1,
      sym__type_name,
    STATE(91), 1,
      sym__namespace_name_as_prefix,
    STATE(92), 1,
      sym__namespace_name,
    STATE(40), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1193] = 10,
    ACTIONS(178), 1,
      sym__name,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_qualified_name,
    STATE(60), 1,
      sym_variable_name,
    STATE(68), 1,
      sym__type_name,
    STATE(91), 1,
      sym__namespace_name_as_prefix,
    STATE(92), 1,
      sym__namespace_name,
    STATE(36), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1225] = 10,
    ACTIONS(178), 1,
      sym__name,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_qualified_name,
    STATE(60), 1,
      sym_variable_name,
    STATE(68), 1,
      sym__type_name,
    STATE(91), 1,
      sym__namespace_name_as_prefix,
    STATE(92), 1,
      sym__namespace_name,
    STATE(36), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1257] = 10,
    ACTIONS(178), 1,
      sym__name,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_qualified_name,
    STATE(60), 1,
      sym_variable_name,
    STATE(68), 1,
      sym__type_name,
    STATE(91), 1,
      sym__namespace_name_as_prefix,
    STATE(92), 1,
      sym__namespace_name,
    STATE(36), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1289] = 10,
    ACTIONS(178), 1,
      sym__name,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_qualified_name,
    STATE(60), 1,
      sym_variable_name,
    STATE(68), 1,
      sym__type_name,
    STATE(91), 1,
      sym__namespace_name_as_prefix,
    STATE(92), 1,
      sym__namespace_name,
    STATE(39), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1321] = 7,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(207), 1,
      sym__name,
    ACTIONS(209), 1,
      sym_static,
    STATE(52), 1,
      sym_qualified_name,
    STATE(90), 1,
      sym__type_name,
    STATE(91), 1,
      sym__namespace_name_as_prefix,
    STATE(92), 1,
      sym__namespace_name,
  [1343] = 5,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(217), 1,
      anon_sym_BSLASH,
    STATE(71), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(211), 2,
      sym__name,
      anon_sym_PIPE,
  [1360] = 6,
    ACTIONS(178), 1,
      sym__name,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym_qualified_name,
    STATE(66), 1,
      sym__type_name,
    STATE(91), 1,
      sym__namespace_name_as_prefix,
    STATE(92), 1,
      sym__namespace_name,
  [1379] = 6,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(220), 1,
      sym__name,
    STATE(52), 1,
      sym_qualified_name,
    STATE(75), 1,
      sym__type_name,
    STATE(91), 1,
      sym__namespace_name_as_prefix,
    STATE(92), 1,
      sym__namespace_name,
  [1398] = 5,
    ACTIONS(215), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(217), 1,
      anon_sym_BSLASH,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(211), 2,
      sym__name,
      anon_sym_PIPE,
  [1415] = 4,
    ACTIONS(226), 1,
      sym_text,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(47), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [1430] = 4,
    ACTIONS(215), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(217), 1,
      anon_sym_BSLASH,
    STATE(71), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(211), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [1445] = 4,
    ACTIONS(234), 1,
      sym_text,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(47), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [1460] = 6,
    ACTIONS(178), 1,
      sym__name,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym_qualified_name,
    STATE(65), 1,
      sym__type_name,
    STATE(91), 1,
      sym__namespace_name_as_prefix,
    STATE(92), 1,
      sym__namespace_name,
  [1479] = 5,
    ACTIONS(178), 1,
      sym__name,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    STATE(62), 1,
      sym_qualified_name,
    STATE(91), 1,
      sym__namespace_name_as_prefix,
    STATE(92), 1,
      sym__namespace_name,
  [1495] = 3,
    ACTIONS(240), 1,
      anon_sym_PIPE,
    STATE(54), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(238), 2,
      sym__name,
      anon_sym_DOLLAR,
  [1506] = 3,
    ACTIONS(242), 1,
      anon_sym_ATinternal,
    ACTIONS(244), 1,
      anon_sym_ATlink,
    STATE(86), 2,
      sym__internal_inline_tag,
      sym__link_inline_tag,
  [1517] = 3,
    ACTIONS(240), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(246), 2,
      sym__name,
      anon_sym_DOLLAR,
  [1528] = 2,
    ACTIONS(250), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(248), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [1537] = 1,
    ACTIONS(252), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [1544] = 1,
    ACTIONS(254), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_text,
      anon_sym_LBRACE,
  [1551] = 3,
    ACTIONS(258), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(256), 2,
      sym__name,
      anon_sym_DOLLAR,
  [1562] = 1,
    ACTIONS(106), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [1569] = 1,
    ACTIONS(261), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [1576] = 1,
    ACTIONS(248), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [1582] = 1,
    ACTIONS(256), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [1588] = 1,
    ACTIONS(263), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [1594] = 2,
    ACTIONS(265), 1,
      sym__name,
    STATE(74), 1,
      sym__namespace_name,
  [1601] = 2,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    STATE(12), 1,
      sym_variable_name,
  [1608] = 2,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      sym_variable_name,
  [1615] = 2,
    ACTIONS(270), 1,
      sym_text,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
  [1622] = 2,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym_variable_name,
  [1629] = 2,
    ACTIONS(217), 1,
      anon_sym_BSLASH,
    STATE(71), 1,
      aux_sym__namespace_name_repeat1,
  [1636] = 2,
    ACTIONS(274), 1,
      anon_sym_BSLASH,
    STATE(70), 1,
      aux_sym__namespace_name_repeat1,
  [1643] = 2,
    ACTIONS(277), 1,
      anon_sym_BSLASH,
    STATE(70), 1,
      aux_sym__namespace_name_repeat1,
  [1650] = 1,
    ACTIONS(280), 1,
      sym__name,
  [1654] = 1,
    ACTIONS(282), 1,
      anon_sym_BSLASH,
  [1658] = 1,
    ACTIONS(284), 1,
      anon_sym_BSLASH,
  [1662] = 1,
    ACTIONS(286), 1,
      sym__name,
  [1666] = 1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
  [1670] = 1,
    ACTIONS(288), 1,
      anon_sym_GT,
  [1674] = 1,
    ACTIONS(290), 1,
      sym__name,
  [1678] = 1,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
  [1682] = 1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
  [1686] = 1,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
  [1690] = 1,
    ACTIONS(298), 1,
      sym__name,
  [1694] = 1,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
  [1698] = 1,
    ACTIONS(302), 1,
      sym_email_address,
  [1702] = 1,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
  [1706] = 1,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
  [1710] = 1,
    ACTIONS(308), 1,
      sym_uri,
  [1714] = 1,
    ACTIONS(310), 1,
      sym_text,
  [1718] = 1,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
  [1722] = 1,
    ACTIONS(314), 1,
      sym__name,
  [1726] = 1,
    ACTIONS(316), 1,
      sym__name,
  [1730] = 1,
    ACTIONS(318), 1,
      anon_sym_BSLASH,
  [1734] = 1,
    ACTIONS(320), 1,
      sym__name,
  [1738] = 1,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
  [1742] = 1,
    ACTIONS(324), 1,
      sym_uri,
  [1746] = 1,
    ACTIONS(326), 1,
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
  [SMALL_STATE(14)] = 357,
  [SMALL_STATE(15)] = 405,
  [SMALL_STATE(16)] = 441,
  [SMALL_STATE(17)] = 477,
  [SMALL_STATE(18)] = 513,
  [SMALL_STATE(19)] = 550,
  [SMALL_STATE(20)] = 587,
  [SMALL_STATE(21)] = 621,
  [SMALL_STATE(22)] = 655,
  [SMALL_STATE(23)] = 689,
  [SMALL_STATE(24)] = 723,
  [SMALL_STATE(25)] = 757,
  [SMALL_STATE(26)] = 791,
  [SMALL_STATE(27)] = 825,
  [SMALL_STATE(28)] = 859,
  [SMALL_STATE(29)] = 893,
  [SMALL_STATE(30)] = 927,
  [SMALL_STATE(31)] = 961,
  [SMALL_STATE(32)] = 995,
  [SMALL_STATE(33)] = 1029,
  [SMALL_STATE(34)] = 1063,
  [SMALL_STATE(35)] = 1097,
  [SMALL_STATE(36)] = 1129,
  [SMALL_STATE(37)] = 1161,
  [SMALL_STATE(38)] = 1193,
  [SMALL_STATE(39)] = 1225,
  [SMALL_STATE(40)] = 1257,
  [SMALL_STATE(41)] = 1289,
  [SMALL_STATE(42)] = 1321,
  [SMALL_STATE(43)] = 1343,
  [SMALL_STATE(44)] = 1360,
  [SMALL_STATE(45)] = 1379,
  [SMALL_STATE(46)] = 1398,
  [SMALL_STATE(47)] = 1415,
  [SMALL_STATE(48)] = 1430,
  [SMALL_STATE(49)] = 1445,
  [SMALL_STATE(50)] = 1460,
  [SMALL_STATE(51)] = 1479,
  [SMALL_STATE(52)] = 1495,
  [SMALL_STATE(53)] = 1506,
  [SMALL_STATE(54)] = 1517,
  [SMALL_STATE(55)] = 1528,
  [SMALL_STATE(56)] = 1537,
  [SMALL_STATE(57)] = 1544,
  [SMALL_STATE(58)] = 1551,
  [SMALL_STATE(59)] = 1562,
  [SMALL_STATE(60)] = 1569,
  [SMALL_STATE(61)] = 1576,
  [SMALL_STATE(62)] = 1582,
  [SMALL_STATE(63)] = 1588,
  [SMALL_STATE(64)] = 1594,
  [SMALL_STATE(65)] = 1601,
  [SMALL_STATE(66)] = 1608,
  [SMALL_STATE(67)] = 1615,
  [SMALL_STATE(68)] = 1622,
  [SMALL_STATE(69)] = 1629,
  [SMALL_STATE(70)] = 1636,
  [SMALL_STATE(71)] = 1643,
  [SMALL_STATE(72)] = 1650,
  [SMALL_STATE(73)] = 1654,
  [SMALL_STATE(74)] = 1658,
  [SMALL_STATE(75)] = 1662,
  [SMALL_STATE(76)] = 1666,
  [SMALL_STATE(77)] = 1670,
  [SMALL_STATE(78)] = 1674,
  [SMALL_STATE(79)] = 1678,
  [SMALL_STATE(80)] = 1682,
  [SMALL_STATE(81)] = 1686,
  [SMALL_STATE(82)] = 1690,
  [SMALL_STATE(83)] = 1694,
  [SMALL_STATE(84)] = 1698,
  [SMALL_STATE(85)] = 1702,
  [SMALL_STATE(86)] = 1706,
  [SMALL_STATE(87)] = 1710,
  [SMALL_STATE(88)] = 1714,
  [SMALL_STATE(89)] = 1718,
  [SMALL_STATE(90)] = 1722,
  [SMALL_STATE(91)] = 1726,
  [SMALL_STATE(92)] = 1730,
  [SMALL_STATE(93)] = 1734,
  [SMALL_STATE(94)] = 1738,
  [SMALL_STATE(95)] = 1742,
  [SMALL_STATE(96)] = 1746,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(19),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(44),
  [11] = {.count = 1, .reusable = true}, SHIFT(9),
  [13] = {.count = 1, .reusable = true}, SHIFT(95),
  [15] = {.count = 1, .reusable = true}, SHIFT(42),
  [17] = {.count = 1, .reusable = true}, SHIFT(50),
  [19] = {.count = 1, .reusable = true}, SHIFT(15),
  [21] = {.count = 1, .reusable = false}, SHIFT(15),
  [23] = {.count = 1, .reusable = false}, SHIFT(49),
  [25] = {.count = 1, .reusable = true}, SHIFT(53),
  [27] = {.count = 1, .reusable = true}, SHIFT(94),
  [29] = {.count = 1, .reusable = true}, SHIFT(85),
  [31] = {.count = 1, .reusable = true}, SHIFT(89),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [60] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 1),
  [64] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 1),
  [66] = {.count = 1, .reusable = true}, SHIFT(11),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 1),
  [74] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 1),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 2),
  [78] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 2),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 2),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 2),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym__param_tag, 3),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym__param_tag, 3),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [92] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [94] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(49),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(53),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_tag_name, 1),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_tag_name, 1),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_variable_name, 2),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_variable_name, 2),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_text_line, 2),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_text_line, 2),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 2),
  [116] = {.count = 1, .reusable = true}, SHIFT(84),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 2),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 1),
  [122] = {.count = 1, .reusable = true}, SHIFT(18),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 1),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 5),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 5),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 3),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 3),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym__global_tag, 3),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym__global_tag, 3),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 2),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 2),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 3),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 3),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym__param_tag, 4),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym__param_tag, 4),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [178] = {.count = 1, .reusable = true}, SHIFT(48),
  [180] = {.count = 1, .reusable = true}, SHIFT(33),
  [182] = {.count = 1, .reusable = true}, SHIFT(64),
  [184] = {.count = 1, .reusable = true}, SHIFT(96),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(48),
  [189] = {.count = 1, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(64),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(96),
  [197] = {.count = 1, .reusable = true}, SHIFT(26),
  [199] = {.count = 1, .reusable = true}, SHIFT(28),
  [201] = {.count = 1, .reusable = true}, SHIFT(34),
  [203] = {.count = 1, .reusable = true}, SHIFT(31),
  [205] = {.count = 1, .reusable = true}, SHIFT(25),
  [207] = {.count = 1, .reusable = false}, SHIFT(46),
  [209] = {.count = 1, .reusable = false}, SHIFT(45),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 1),
  [213] = {.count = 1, .reusable = true}, SHIFT(35),
  [215] = {.count = 1, .reusable = true}, SHIFT(61),
  [217] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 1), SHIFT(82),
  [220] = {.count = 1, .reusable = true}, SHIFT(43),
  [222] = {.count = 1, .reusable = true}, SHIFT(41),
  [224] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2),
  [226] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(47),
  [229] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(53),
  [232] = {.count = 1, .reusable = false}, SHIFT(17),
  [234] = {.count = 1, .reusable = false}, SHIFT(47),
  [236] = {.count = 1, .reusable = false}, SHIFT(53),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 1),
  [240] = {.count = 1, .reusable = true}, SHIFT(51),
  [242] = {.count = 1, .reusable = true}, SHIFT(88),
  [244] = {.count = 1, .reusable = true}, SHIFT(87),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 2),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 2),
  [250] = {.count = 1, .reusable = true}, SHIFT(63),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_param, 2),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 3),
  [256] = {.count = 1, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(51),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_param, 1),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 3),
  [265] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 1), SHIFT(69),
  [268] = {.count = 1, .reusable = true}, SHIFT(93),
  [270] = {.count = 1, .reusable = true}, SHIFT(83),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 2),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2), SHIFT_REPEAT(82),
  [277] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 2), SHIFT(82),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 3),
  [282] = {.count = 1, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2),
  [284] = {.count = 1, .reusable = true}, SHIFT(72),
  [286] = {.count = 1, .reusable = true}, SHIFT(81),
  [288] = {.count = 1, .reusable = true}, SHIFT(22),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 2),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym__internal_inline_tag, 2, .production_id = 1),
  [294] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [296] = {.count = 1, .reusable = true}, SHIFT(37),
  [298] = {.count = 1, .reusable = true}, SHIFT(73),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3, .production_id = 3),
  [302] = {.count = 1, .reusable = true}, SHIFT(77),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [306] = {.count = 1, .reusable = true}, SHIFT(57),
  [308] = {.count = 1, .reusable = true}, SHIFT(67),
  [310] = {.count = 1, .reusable = true}, SHIFT(79),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [314] = {.count = 1, .reusable = true}, SHIFT(76),
  [316] = {.count = 1, .reusable = true}, SHIFT(55),
  [318] = {.count = 1, .reusable = true}, SHIFT(78),
  [320] = {.count = 1, .reusable = true}, SHIFT(16),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [324] = {.count = 1, .reusable = true}, SHIFT(10),
  [326] = {.count = 1, .reusable = true}, SHIFT(59),
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
