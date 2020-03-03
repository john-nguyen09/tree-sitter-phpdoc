#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym__begin = 1,
  anon_sym_ATauthor = 2,
  anon_sym_LT = 3,
  anon_sym_GT = 4,
  anon_sym_ATdeprecated = 5,
  anon_sym_ATglobal = 6,
  anon_sym_ATinternal = 7,
  anon_sym_ATlink = 8,
  sym_author_name = 9,
  sym_email_address = 10,
  anon_sym_ATapi = 11,
  anon_sym_ATcategory = 12,
  anon_sym_ATcopyright = 13,
  anon_sym_ATexample = 14,
  anon_sym_ATfilesource = 15,
  anon_sym_ATignore = 16,
  anon_sym_ATlicense = 17,
  anon_sym_ATmethod = 18,
  anon_sym_ATpackage = 19,
  anon_sym_ATparam = 20,
  anon_sym_ATproperty = 21,
  anon_sym_ATproperty_DASHread = 22,
  anon_sym_ATproperty_DASHwrite = 23,
  anon_sym_ATreturn = 24,
  anon_sym_ATsee = 25,
  anon_sym_ATsince = 26,
  anon_sym_ATsource = 27,
  anon_sym_ATsubpackage = 28,
  anon_sym_ATthrows = 29,
  anon_sym_ATtodo = 30,
  anon_sym_ATuses = 31,
  anon_sym_ATvar = 32,
  anon_sym_ATversion = 33,
  anon_sym_LF = 34,
  anon_sym_CR_LF = 35,
  sym_text = 36,
  anon_sym_LBRACE = 37,
  anon_sym_RBRACE = 38,
  sym_version = 39,
  sym_uri = 40,
  sym_identifier = 41,
  sym__end = 42,
  sym_document = 43,
  sym_tag = 44,
  sym__author_tag = 45,
  sym__deprecated_tag = 46,
  sym__global_tag = 47,
  sym__internal_tag = 48,
  sym__internal_inline_tag = 49,
  sym__link_tag = 50,
  sym_tag_name = 51,
  sym_description = 52,
  sym_text_line = 53,
  sym_inline_tag = 54,
  aux_sym_document_repeat1 = 55,
  aux_sym_description_repeat1 = 56,
  aux_sym_text_line_repeat1 = 57,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__begin] = "_begin",
  [anon_sym_ATauthor] = "tag_name",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_ATdeprecated] = "tag_name",
  [anon_sym_ATglobal] = "tag_name",
  [anon_sym_ATinternal] = "tag_name",
  [anon_sym_ATlink] = "tag_name",
  [sym_author_name] = "author_name",
  [sym_email_address] = "email_address",
  [anon_sym_ATapi] = "@api",
  [anon_sym_ATcategory] = "@category",
  [anon_sym_ATcopyright] = "@copyright",
  [anon_sym_ATexample] = "@example",
  [anon_sym_ATfilesource] = "@filesource",
  [anon_sym_ATignore] = "@ignore",
  [anon_sym_ATlicense] = "@license",
  [anon_sym_ATmethod] = "@method",
  [anon_sym_ATpackage] = "@package",
  [anon_sym_ATparam] = "@param",
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
  [sym_identifier] = "type",
  [sym__end] = "_end",
  [sym_document] = "document",
  [sym_tag] = "tag",
  [sym__author_tag] = "_author_tag",
  [sym__deprecated_tag] = "_deprecated_tag",
  [sym__global_tag] = "_global_tag",
  [sym__internal_tag] = "_internal_tag",
  [sym__internal_inline_tag] = "_internal_inline_tag",
  [sym__link_tag] = "_link_tag",
  [sym_tag_name] = "tag_name",
  [sym_description] = "description",
  [sym_text_line] = "text_line",
  [sym_inline_tag] = "inline_tag",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_text_line_repeat1] = "text_line_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__begin] = sym__begin,
  [anon_sym_ATauthor] = sym_tag_name,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_ATdeprecated] = sym_tag_name,
  [anon_sym_ATglobal] = sym_tag_name,
  [anon_sym_ATinternal] = sym_tag_name,
  [anon_sym_ATlink] = sym_tag_name,
  [sym_author_name] = sym_author_name,
  [sym_email_address] = sym_email_address,
  [anon_sym_ATapi] = anon_sym_ATapi,
  [anon_sym_ATcategory] = anon_sym_ATcategory,
  [anon_sym_ATcopyright] = anon_sym_ATcopyright,
  [anon_sym_ATexample] = anon_sym_ATexample,
  [anon_sym_ATfilesource] = anon_sym_ATfilesource,
  [anon_sym_ATignore] = anon_sym_ATignore,
  [anon_sym_ATlicense] = anon_sym_ATlicense,
  [anon_sym_ATmethod] = anon_sym_ATmethod,
  [anon_sym_ATpackage] = anon_sym_ATpackage,
  [anon_sym_ATparam] = anon_sym_ATparam,
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
  [sym_identifier] = sym_identifier,
  [sym__end] = sym__end,
  [sym_document] = sym_document,
  [sym_tag] = sym_tag,
  [sym__author_tag] = sym__author_tag,
  [sym__deprecated_tag] = sym__deprecated_tag,
  [sym__global_tag] = sym__global_tag,
  [sym__internal_tag] = sym__internal_tag,
  [sym__internal_inline_tag] = sym__internal_inline_tag,
  [sym__link_tag] = sym__link_tag,
  [sym_tag_name] = sym_tag_name,
  [sym_description] = sym_description,
  [sym_text_line] = sym_text_line,
  [sym_inline_tag] = sym_inline_tag,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_text_line_repeat1] = aux_sym_text_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [anon_sym_ATmethod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATparam] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [aux_sym_document_repeat1] = {
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
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_description,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(158);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(157)
      if (lookahead == '\r') SKIP(157)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '}') ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '*') SKIP(1)
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '>') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(198);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(198);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '@') ADVANCE(20);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(198);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(198);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '@') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '@') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(8)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '*') SKIP(8)
      if (lookahead == '{') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(198);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(198);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(10)
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '*') SKIP(10)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '}') ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '}') ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(159);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'g') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(166);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 'w') ADVANCE(125);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 149:
      if (lookahead == 'w') ADVANCE(132);
      END_STATE();
    case 150:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 151:
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 152:
      if (lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 157:
      if (eof) ADVANCE(158);
      if (lookahead == '\t') SKIP(157)
      if (lookahead == '\n') SKIP(157)
      if (lookahead == '\r') SKIP(157)
      if (lookahead == ' ') SKIP(157)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '}') ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == '.') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(204);
      if (lookahead == ' ' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(196);
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
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 10},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [anon_sym_ATauthor] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_ATdeprecated] = ACTIONS(1),
    [anon_sym_ATglobal] = ACTIONS(1),
    [anon_sym_ATinternal] = ACTIONS(1),
    [anon_sym_ATlink] = ACTIONS(1),
    [sym_author_name] = ACTIONS(1),
    [anon_sym_ATapi] = ACTIONS(1),
    [anon_sym_ATcategory] = ACTIONS(1),
    [anon_sym_ATcopyright] = ACTIONS(1),
    [anon_sym_ATexample] = ACTIONS(1),
    [anon_sym_ATfilesource] = ACTIONS(1),
    [anon_sym_ATignore] = ACTIONS(1),
    [anon_sym_ATlicense] = ACTIONS(1),
    [anon_sym_ATmethod] = ACTIONS(1),
    [anon_sym_ATpackage] = ACTIONS(1),
    [anon_sym_ATparam] = ACTIONS(1),
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
    [sym_identifier] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(35),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(6),
    [sym__author_tag] = STATE(19),
    [sym__deprecated_tag] = STATE(19),
    [sym__global_tag] = STATE(19),
    [sym__internal_tag] = STATE(19),
    [sym__link_tag] = STATE(19),
    [sym_tag_name] = STATE(9),
    [sym_description] = STATE(3),
    [sym_text_line] = STATE(11),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_description_repeat1] = STATE(11),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATapi] = ACTIONS(15),
    [anon_sym_ATcategory] = ACTIONS(15),
    [anon_sym_ATcopyright] = ACTIONS(15),
    [anon_sym_ATexample] = ACTIONS(15),
    [anon_sym_ATfilesource] = ACTIONS(15),
    [anon_sym_ATignore] = ACTIONS(15),
    [anon_sym_ATlicense] = ACTIONS(15),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATpackage] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(15),
    [anon_sym_ATproperty] = ACTIONS(17),
    [anon_sym_ATproperty_DASHread] = ACTIONS(15),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(15),
    [anon_sym_ATreturn] = ACTIONS(15),
    [anon_sym_ATsee] = ACTIONS(15),
    [anon_sym_ATsince] = ACTIONS(15),
    [anon_sym_ATsource] = ACTIONS(15),
    [anon_sym_ATsubpackage] = ACTIONS(15),
    [anon_sym_ATthrows] = ACTIONS(15),
    [anon_sym_ATtodo] = ACTIONS(15),
    [anon_sym_ATuses] = ACTIONS(15),
    [anon_sym_ATvar] = ACTIONS(15),
    [anon_sym_ATversion] = ACTIONS(15),
    [sym_text] = ACTIONS(19),
    [sym__end] = ACTIONS(21),
  },
  [3] = {
    [sym_tag] = STATE(5),
    [sym__author_tag] = STATE(19),
    [sym__deprecated_tag] = STATE(19),
    [sym__global_tag] = STATE(19),
    [sym__internal_tag] = STATE(19),
    [sym__link_tag] = STATE(19),
    [sym_tag_name] = STATE(9),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATapi] = ACTIONS(15),
    [anon_sym_ATcategory] = ACTIONS(15),
    [anon_sym_ATcopyright] = ACTIONS(15),
    [anon_sym_ATexample] = ACTIONS(15),
    [anon_sym_ATfilesource] = ACTIONS(15),
    [anon_sym_ATignore] = ACTIONS(15),
    [anon_sym_ATlicense] = ACTIONS(15),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATpackage] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(15),
    [anon_sym_ATproperty] = ACTIONS(17),
    [anon_sym_ATproperty_DASHread] = ACTIONS(15),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(15),
    [anon_sym_ATreturn] = ACTIONS(15),
    [anon_sym_ATsee] = ACTIONS(15),
    [anon_sym_ATsince] = ACTIONS(15),
    [anon_sym_ATsource] = ACTIONS(15),
    [anon_sym_ATsubpackage] = ACTIONS(15),
    [anon_sym_ATthrows] = ACTIONS(15),
    [anon_sym_ATtodo] = ACTIONS(15),
    [anon_sym_ATuses] = ACTIONS(15),
    [anon_sym_ATvar] = ACTIONS(15),
    [anon_sym_ATversion] = ACTIONS(15),
    [sym__end] = ACTIONS(23),
  },
  [4] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(19),
    [sym__deprecated_tag] = STATE(19),
    [sym__global_tag] = STATE(19),
    [sym__internal_tag] = STATE(19),
    [sym__link_tag] = STATE(19),
    [sym_tag_name] = STATE(9),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATauthor] = ACTIONS(25),
    [anon_sym_ATdeprecated] = ACTIONS(28),
    [anon_sym_ATglobal] = ACTIONS(31),
    [anon_sym_ATinternal] = ACTIONS(34),
    [anon_sym_ATlink] = ACTIONS(37),
    [anon_sym_ATapi] = ACTIONS(40),
    [anon_sym_ATcategory] = ACTIONS(40),
    [anon_sym_ATcopyright] = ACTIONS(40),
    [anon_sym_ATexample] = ACTIONS(40),
    [anon_sym_ATfilesource] = ACTIONS(40),
    [anon_sym_ATignore] = ACTIONS(40),
    [anon_sym_ATlicense] = ACTIONS(40),
    [anon_sym_ATmethod] = ACTIONS(40),
    [anon_sym_ATpackage] = ACTIONS(40),
    [anon_sym_ATparam] = ACTIONS(40),
    [anon_sym_ATproperty] = ACTIONS(43),
    [anon_sym_ATproperty_DASHread] = ACTIONS(40),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(40),
    [anon_sym_ATreturn] = ACTIONS(40),
    [anon_sym_ATsee] = ACTIONS(40),
    [anon_sym_ATsince] = ACTIONS(40),
    [anon_sym_ATsource] = ACTIONS(40),
    [anon_sym_ATsubpackage] = ACTIONS(40),
    [anon_sym_ATthrows] = ACTIONS(40),
    [anon_sym_ATtodo] = ACTIONS(40),
    [anon_sym_ATuses] = ACTIONS(40),
    [anon_sym_ATvar] = ACTIONS(40),
    [anon_sym_ATversion] = ACTIONS(40),
    [sym__end] = ACTIONS(46),
  },
  [5] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(19),
    [sym__deprecated_tag] = STATE(19),
    [sym__global_tag] = STATE(19),
    [sym__internal_tag] = STATE(19),
    [sym__link_tag] = STATE(19),
    [sym_tag_name] = STATE(9),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATapi] = ACTIONS(15),
    [anon_sym_ATcategory] = ACTIONS(15),
    [anon_sym_ATcopyright] = ACTIONS(15),
    [anon_sym_ATexample] = ACTIONS(15),
    [anon_sym_ATfilesource] = ACTIONS(15),
    [anon_sym_ATignore] = ACTIONS(15),
    [anon_sym_ATlicense] = ACTIONS(15),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATpackage] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(15),
    [anon_sym_ATproperty] = ACTIONS(17),
    [anon_sym_ATproperty_DASHread] = ACTIONS(15),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(15),
    [anon_sym_ATreturn] = ACTIONS(15),
    [anon_sym_ATsee] = ACTIONS(15),
    [anon_sym_ATsince] = ACTIONS(15),
    [anon_sym_ATsource] = ACTIONS(15),
    [anon_sym_ATsubpackage] = ACTIONS(15),
    [anon_sym_ATthrows] = ACTIONS(15),
    [anon_sym_ATtodo] = ACTIONS(15),
    [anon_sym_ATuses] = ACTIONS(15),
    [anon_sym_ATvar] = ACTIONS(15),
    [anon_sym_ATversion] = ACTIONS(15),
    [sym__end] = ACTIONS(48),
  },
  [6] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(19),
    [sym__deprecated_tag] = STATE(19),
    [sym__global_tag] = STATE(19),
    [sym__internal_tag] = STATE(19),
    [sym__link_tag] = STATE(19),
    [sym_tag_name] = STATE(9),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATapi] = ACTIONS(15),
    [anon_sym_ATcategory] = ACTIONS(15),
    [anon_sym_ATcopyright] = ACTIONS(15),
    [anon_sym_ATexample] = ACTIONS(15),
    [anon_sym_ATfilesource] = ACTIONS(15),
    [anon_sym_ATignore] = ACTIONS(15),
    [anon_sym_ATlicense] = ACTIONS(15),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATpackage] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(15),
    [anon_sym_ATproperty] = ACTIONS(17),
    [anon_sym_ATproperty_DASHread] = ACTIONS(15),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(15),
    [anon_sym_ATreturn] = ACTIONS(15),
    [anon_sym_ATsee] = ACTIONS(15),
    [anon_sym_ATsince] = ACTIONS(15),
    [anon_sym_ATsource] = ACTIONS(15),
    [anon_sym_ATsubpackage] = ACTIONS(15),
    [anon_sym_ATthrows] = ACTIONS(15),
    [anon_sym_ATtodo] = ACTIONS(15),
    [anon_sym_ATuses] = ACTIONS(15),
    [anon_sym_ATvar] = ACTIONS(15),
    [anon_sym_ATversion] = ACTIONS(15),
    [sym__end] = ACTIONS(23),
  },
  [7] = {
    [sym_description] = STATE(21),
    [sym_text_line] = STATE(11),
    [aux_sym_description_repeat1] = STATE(11),
    [anon_sym_ATauthor] = ACTIONS(50),
    [anon_sym_ATdeprecated] = ACTIONS(50),
    [anon_sym_ATglobal] = ACTIONS(50),
    [anon_sym_ATinternal] = ACTIONS(50),
    [anon_sym_ATlink] = ACTIONS(50),
    [anon_sym_ATapi] = ACTIONS(50),
    [anon_sym_ATcategory] = ACTIONS(50),
    [anon_sym_ATcopyright] = ACTIONS(50),
    [anon_sym_ATexample] = ACTIONS(50),
    [anon_sym_ATfilesource] = ACTIONS(50),
    [anon_sym_ATignore] = ACTIONS(50),
    [anon_sym_ATlicense] = ACTIONS(50),
    [anon_sym_ATmethod] = ACTIONS(50),
    [anon_sym_ATpackage] = ACTIONS(50),
    [anon_sym_ATparam] = ACTIONS(50),
    [anon_sym_ATproperty] = ACTIONS(52),
    [anon_sym_ATproperty_DASHread] = ACTIONS(50),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(50),
    [anon_sym_ATreturn] = ACTIONS(50),
    [anon_sym_ATsee] = ACTIONS(50),
    [anon_sym_ATsince] = ACTIONS(50),
    [anon_sym_ATsource] = ACTIONS(50),
    [anon_sym_ATsubpackage] = ACTIONS(50),
    [anon_sym_ATthrows] = ACTIONS(50),
    [anon_sym_ATtodo] = ACTIONS(50),
    [anon_sym_ATuses] = ACTIONS(50),
    [anon_sym_ATvar] = ACTIONS(50),
    [anon_sym_ATversion] = ACTIONS(50),
    [sym_text] = ACTIONS(19),
    [sym_version] = ACTIONS(54),
    [sym__end] = ACTIONS(50),
  },
  [8] = {
    [sym_description] = STATE(23),
    [sym_text_line] = STATE(11),
    [aux_sym_description_repeat1] = STATE(11),
    [anon_sym_ATauthor] = ACTIONS(56),
    [anon_sym_ATdeprecated] = ACTIONS(56),
    [anon_sym_ATglobal] = ACTIONS(56),
    [anon_sym_ATinternal] = ACTIONS(56),
    [anon_sym_ATlink] = ACTIONS(56),
    [anon_sym_ATapi] = ACTIONS(56),
    [anon_sym_ATcategory] = ACTIONS(56),
    [anon_sym_ATcopyright] = ACTIONS(56),
    [anon_sym_ATexample] = ACTIONS(56),
    [anon_sym_ATfilesource] = ACTIONS(56),
    [anon_sym_ATignore] = ACTIONS(56),
    [anon_sym_ATlicense] = ACTIONS(56),
    [anon_sym_ATmethod] = ACTIONS(56),
    [anon_sym_ATpackage] = ACTIONS(56),
    [anon_sym_ATparam] = ACTIONS(56),
    [anon_sym_ATproperty] = ACTIONS(58),
    [anon_sym_ATproperty_DASHread] = ACTIONS(56),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(56),
    [anon_sym_ATreturn] = ACTIONS(56),
    [anon_sym_ATsee] = ACTIONS(56),
    [anon_sym_ATsince] = ACTIONS(56),
    [anon_sym_ATsource] = ACTIONS(56),
    [anon_sym_ATsubpackage] = ACTIONS(56),
    [anon_sym_ATthrows] = ACTIONS(56),
    [anon_sym_ATtodo] = ACTIONS(56),
    [anon_sym_ATuses] = ACTIONS(56),
    [anon_sym_ATvar] = ACTIONS(56),
    [anon_sym_ATversion] = ACTIONS(56),
    [sym_text] = ACTIONS(19),
    [sym__end] = ACTIONS(56),
  },
  [9] = {
    [sym_description] = STATE(25),
    [sym_text_line] = STATE(11),
    [aux_sym_description_repeat1] = STATE(11),
    [anon_sym_ATauthor] = ACTIONS(60),
    [anon_sym_ATdeprecated] = ACTIONS(60),
    [anon_sym_ATglobal] = ACTIONS(60),
    [anon_sym_ATinternal] = ACTIONS(60),
    [anon_sym_ATlink] = ACTIONS(60),
    [anon_sym_ATapi] = ACTIONS(60),
    [anon_sym_ATcategory] = ACTIONS(60),
    [anon_sym_ATcopyright] = ACTIONS(60),
    [anon_sym_ATexample] = ACTIONS(60),
    [anon_sym_ATfilesource] = ACTIONS(60),
    [anon_sym_ATignore] = ACTIONS(60),
    [anon_sym_ATlicense] = ACTIONS(60),
    [anon_sym_ATmethod] = ACTIONS(60),
    [anon_sym_ATpackage] = ACTIONS(60),
    [anon_sym_ATparam] = ACTIONS(60),
    [anon_sym_ATproperty] = ACTIONS(62),
    [anon_sym_ATproperty_DASHread] = ACTIONS(60),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(60),
    [anon_sym_ATreturn] = ACTIONS(60),
    [anon_sym_ATsee] = ACTIONS(60),
    [anon_sym_ATsince] = ACTIONS(60),
    [anon_sym_ATsource] = ACTIONS(60),
    [anon_sym_ATsubpackage] = ACTIONS(60),
    [anon_sym_ATthrows] = ACTIONS(60),
    [anon_sym_ATtodo] = ACTIONS(60),
    [anon_sym_ATuses] = ACTIONS(60),
    [anon_sym_ATvar] = ACTIONS(60),
    [anon_sym_ATversion] = ACTIONS(60),
    [sym_text] = ACTIONS(19),
    [sym__end] = ACTIONS(60),
  },
  [10] = {
    [sym_description] = STATE(24),
    [sym_text_line] = STATE(11),
    [aux_sym_description_repeat1] = STATE(11),
    [anon_sym_ATauthor] = ACTIONS(64),
    [anon_sym_ATdeprecated] = ACTIONS(64),
    [anon_sym_ATglobal] = ACTIONS(64),
    [anon_sym_ATinternal] = ACTIONS(64),
    [anon_sym_ATlink] = ACTIONS(64),
    [anon_sym_ATapi] = ACTIONS(64),
    [anon_sym_ATcategory] = ACTIONS(64),
    [anon_sym_ATcopyright] = ACTIONS(64),
    [anon_sym_ATexample] = ACTIONS(64),
    [anon_sym_ATfilesource] = ACTIONS(64),
    [anon_sym_ATignore] = ACTIONS(64),
    [anon_sym_ATlicense] = ACTIONS(64),
    [anon_sym_ATmethod] = ACTIONS(64),
    [anon_sym_ATpackage] = ACTIONS(64),
    [anon_sym_ATparam] = ACTIONS(64),
    [anon_sym_ATproperty] = ACTIONS(66),
    [anon_sym_ATproperty_DASHread] = ACTIONS(64),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(64),
    [anon_sym_ATreturn] = ACTIONS(64),
    [anon_sym_ATsee] = ACTIONS(64),
    [anon_sym_ATsince] = ACTIONS(64),
    [anon_sym_ATsource] = ACTIONS(64),
    [anon_sym_ATsubpackage] = ACTIONS(64),
    [anon_sym_ATthrows] = ACTIONS(64),
    [anon_sym_ATtodo] = ACTIONS(64),
    [anon_sym_ATuses] = ACTIONS(64),
    [anon_sym_ATvar] = ACTIONS(64),
    [anon_sym_ATversion] = ACTIONS(64),
    [sym_text] = ACTIONS(19),
    [sym__end] = ACTIONS(64),
  },
  [11] = {
    [sym_text_line] = STATE(12),
    [aux_sym_description_repeat1] = STATE(12),
    [anon_sym_ATauthor] = ACTIONS(68),
    [anon_sym_ATdeprecated] = ACTIONS(68),
    [anon_sym_ATglobal] = ACTIONS(68),
    [anon_sym_ATinternal] = ACTIONS(68),
    [anon_sym_ATlink] = ACTIONS(68),
    [anon_sym_ATapi] = ACTIONS(68),
    [anon_sym_ATcategory] = ACTIONS(68),
    [anon_sym_ATcopyright] = ACTIONS(68),
    [anon_sym_ATexample] = ACTIONS(68),
    [anon_sym_ATfilesource] = ACTIONS(68),
    [anon_sym_ATignore] = ACTIONS(68),
    [anon_sym_ATlicense] = ACTIONS(68),
    [anon_sym_ATmethod] = ACTIONS(68),
    [anon_sym_ATpackage] = ACTIONS(68),
    [anon_sym_ATparam] = ACTIONS(68),
    [anon_sym_ATproperty] = ACTIONS(70),
    [anon_sym_ATproperty_DASHread] = ACTIONS(68),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(68),
    [anon_sym_ATreturn] = ACTIONS(68),
    [anon_sym_ATsee] = ACTIONS(68),
    [anon_sym_ATsince] = ACTIONS(68),
    [anon_sym_ATsource] = ACTIONS(68),
    [anon_sym_ATsubpackage] = ACTIONS(68),
    [anon_sym_ATthrows] = ACTIONS(68),
    [anon_sym_ATtodo] = ACTIONS(68),
    [anon_sym_ATuses] = ACTIONS(68),
    [anon_sym_ATvar] = ACTIONS(68),
    [anon_sym_ATversion] = ACTIONS(68),
    [sym_text] = ACTIONS(19),
    [sym__end] = ACTIONS(68),
  },
  [12] = {
    [sym_text_line] = STATE(12),
    [aux_sym_description_repeat1] = STATE(12),
    [anon_sym_ATauthor] = ACTIONS(72),
    [anon_sym_ATdeprecated] = ACTIONS(72),
    [anon_sym_ATglobal] = ACTIONS(72),
    [anon_sym_ATinternal] = ACTIONS(72),
    [anon_sym_ATlink] = ACTIONS(72),
    [anon_sym_ATapi] = ACTIONS(72),
    [anon_sym_ATcategory] = ACTIONS(72),
    [anon_sym_ATcopyright] = ACTIONS(72),
    [anon_sym_ATexample] = ACTIONS(72),
    [anon_sym_ATfilesource] = ACTIONS(72),
    [anon_sym_ATignore] = ACTIONS(72),
    [anon_sym_ATlicense] = ACTIONS(72),
    [anon_sym_ATmethod] = ACTIONS(72),
    [anon_sym_ATpackage] = ACTIONS(72),
    [anon_sym_ATparam] = ACTIONS(72),
    [anon_sym_ATproperty] = ACTIONS(74),
    [anon_sym_ATproperty_DASHread] = ACTIONS(72),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(72),
    [anon_sym_ATreturn] = ACTIONS(72),
    [anon_sym_ATsee] = ACTIONS(72),
    [anon_sym_ATsince] = ACTIONS(72),
    [anon_sym_ATsource] = ACTIONS(72),
    [anon_sym_ATsubpackage] = ACTIONS(72),
    [anon_sym_ATthrows] = ACTIONS(72),
    [anon_sym_ATtodo] = ACTIONS(72),
    [anon_sym_ATuses] = ACTIONS(72),
    [anon_sym_ATvar] = ACTIONS(72),
    [anon_sym_ATversion] = ACTIONS(72),
    [sym_text] = ACTIONS(76),
    [sym__end] = ACTIONS(72),
  },
  [13] = {
    [anon_sym_ATauthor] = ACTIONS(79),
    [anon_sym_ATdeprecated] = ACTIONS(79),
    [anon_sym_ATglobal] = ACTIONS(79),
    [anon_sym_ATinternal] = ACTIONS(79),
    [anon_sym_ATlink] = ACTIONS(79),
    [anon_sym_ATapi] = ACTIONS(79),
    [anon_sym_ATcategory] = ACTIONS(79),
    [anon_sym_ATcopyright] = ACTIONS(79),
    [anon_sym_ATexample] = ACTIONS(79),
    [anon_sym_ATfilesource] = ACTIONS(79),
    [anon_sym_ATignore] = ACTIONS(79),
    [anon_sym_ATlicense] = ACTIONS(79),
    [anon_sym_ATmethod] = ACTIONS(79),
    [anon_sym_ATpackage] = ACTIONS(79),
    [anon_sym_ATparam] = ACTIONS(79),
    [anon_sym_ATproperty] = ACTIONS(81),
    [anon_sym_ATproperty_DASHread] = ACTIONS(79),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(79),
    [anon_sym_ATreturn] = ACTIONS(79),
    [anon_sym_ATsee] = ACTIONS(79),
    [anon_sym_ATsince] = ACTIONS(79),
    [anon_sym_ATsource] = ACTIONS(79),
    [anon_sym_ATsubpackage] = ACTIONS(79),
    [anon_sym_ATthrows] = ACTIONS(79),
    [anon_sym_ATtodo] = ACTIONS(79),
    [anon_sym_ATuses] = ACTIONS(79),
    [anon_sym_ATvar] = ACTIONS(79),
    [anon_sym_ATversion] = ACTIONS(79),
    [sym_text] = ACTIONS(81),
    [sym__end] = ACTIONS(79),
  },
  [14] = {
    [anon_sym_ATauthor] = ACTIONS(83),
    [anon_sym_ATdeprecated] = ACTIONS(83),
    [anon_sym_ATglobal] = ACTIONS(83),
    [anon_sym_ATinternal] = ACTIONS(83),
    [anon_sym_ATlink] = ACTIONS(83),
    [anon_sym_ATapi] = ACTIONS(83),
    [anon_sym_ATcategory] = ACTIONS(83),
    [anon_sym_ATcopyright] = ACTIONS(83),
    [anon_sym_ATexample] = ACTIONS(83),
    [anon_sym_ATfilesource] = ACTIONS(83),
    [anon_sym_ATignore] = ACTIONS(83),
    [anon_sym_ATlicense] = ACTIONS(83),
    [anon_sym_ATmethod] = ACTIONS(83),
    [anon_sym_ATpackage] = ACTIONS(83),
    [anon_sym_ATparam] = ACTIONS(83),
    [anon_sym_ATproperty] = ACTIONS(85),
    [anon_sym_ATproperty_DASHread] = ACTIONS(83),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(83),
    [anon_sym_ATreturn] = ACTIONS(83),
    [anon_sym_ATsee] = ACTIONS(83),
    [anon_sym_ATsince] = ACTIONS(83),
    [anon_sym_ATsource] = ACTIONS(83),
    [anon_sym_ATsubpackage] = ACTIONS(83),
    [anon_sym_ATthrows] = ACTIONS(83),
    [anon_sym_ATtodo] = ACTIONS(83),
    [anon_sym_ATuses] = ACTIONS(83),
    [anon_sym_ATvar] = ACTIONS(83),
    [anon_sym_ATversion] = ACTIONS(83),
    [sym_text] = ACTIONS(85),
    [sym__end] = ACTIONS(83),
  },
  [15] = {
    [anon_sym_ATauthor] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_ATdeprecated] = ACTIONS(87),
    [anon_sym_ATglobal] = ACTIONS(87),
    [anon_sym_ATinternal] = ACTIONS(87),
    [anon_sym_ATlink] = ACTIONS(87),
    [anon_sym_ATapi] = ACTIONS(87),
    [anon_sym_ATcategory] = ACTIONS(87),
    [anon_sym_ATcopyright] = ACTIONS(87),
    [anon_sym_ATexample] = ACTIONS(87),
    [anon_sym_ATfilesource] = ACTIONS(87),
    [anon_sym_ATignore] = ACTIONS(87),
    [anon_sym_ATlicense] = ACTIONS(87),
    [anon_sym_ATmethod] = ACTIONS(87),
    [anon_sym_ATpackage] = ACTIONS(87),
    [anon_sym_ATparam] = ACTIONS(87),
    [anon_sym_ATproperty] = ACTIONS(91),
    [anon_sym_ATproperty_DASHread] = ACTIONS(87),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(87),
    [anon_sym_ATreturn] = ACTIONS(87),
    [anon_sym_ATsee] = ACTIONS(87),
    [anon_sym_ATsince] = ACTIONS(87),
    [anon_sym_ATsource] = ACTIONS(87),
    [anon_sym_ATsubpackage] = ACTIONS(87),
    [anon_sym_ATthrows] = ACTIONS(87),
    [anon_sym_ATtodo] = ACTIONS(87),
    [anon_sym_ATuses] = ACTIONS(87),
    [anon_sym_ATvar] = ACTIONS(87),
    [anon_sym_ATversion] = ACTIONS(87),
    [sym__end] = ACTIONS(87),
  },
  [16] = {
    [anon_sym_ATauthor] = ACTIONS(93),
    [anon_sym_ATdeprecated] = ACTIONS(93),
    [anon_sym_ATglobal] = ACTIONS(93),
    [anon_sym_ATinternal] = ACTIONS(93),
    [anon_sym_ATlink] = ACTIONS(93),
    [anon_sym_ATapi] = ACTIONS(93),
    [anon_sym_ATcategory] = ACTIONS(93),
    [anon_sym_ATcopyright] = ACTIONS(93),
    [anon_sym_ATexample] = ACTIONS(93),
    [anon_sym_ATfilesource] = ACTIONS(93),
    [anon_sym_ATignore] = ACTIONS(93),
    [anon_sym_ATlicense] = ACTIONS(93),
    [anon_sym_ATmethod] = ACTIONS(93),
    [anon_sym_ATpackage] = ACTIONS(93),
    [anon_sym_ATparam] = ACTIONS(93),
    [anon_sym_ATproperty] = ACTIONS(95),
    [anon_sym_ATproperty_DASHread] = ACTIONS(93),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(93),
    [anon_sym_ATreturn] = ACTIONS(93),
    [anon_sym_ATsee] = ACTIONS(93),
    [anon_sym_ATsince] = ACTIONS(93),
    [anon_sym_ATsource] = ACTIONS(93),
    [anon_sym_ATsubpackage] = ACTIONS(93),
    [anon_sym_ATthrows] = ACTIONS(93),
    [anon_sym_ATtodo] = ACTIONS(93),
    [anon_sym_ATuses] = ACTIONS(93),
    [anon_sym_ATvar] = ACTIONS(93),
    [anon_sym_ATversion] = ACTIONS(93),
    [sym_text] = ACTIONS(95),
    [sym__end] = ACTIONS(93),
  },
  [17] = {
    [anon_sym_ATauthor] = ACTIONS(97),
    [anon_sym_ATdeprecated] = ACTIONS(97),
    [anon_sym_ATglobal] = ACTIONS(97),
    [anon_sym_ATinternal] = ACTIONS(97),
    [anon_sym_ATlink] = ACTIONS(97),
    [sym_author_name] = ACTIONS(99),
    [anon_sym_ATapi] = ACTIONS(97),
    [anon_sym_ATcategory] = ACTIONS(97),
    [anon_sym_ATcopyright] = ACTIONS(97),
    [anon_sym_ATexample] = ACTIONS(97),
    [anon_sym_ATfilesource] = ACTIONS(97),
    [anon_sym_ATignore] = ACTIONS(97),
    [anon_sym_ATlicense] = ACTIONS(97),
    [anon_sym_ATmethod] = ACTIONS(97),
    [anon_sym_ATpackage] = ACTIONS(97),
    [anon_sym_ATparam] = ACTIONS(97),
    [anon_sym_ATproperty] = ACTIONS(101),
    [anon_sym_ATproperty_DASHread] = ACTIONS(97),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(97),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATsee] = ACTIONS(97),
    [anon_sym_ATsince] = ACTIONS(97),
    [anon_sym_ATsource] = ACTIONS(97),
    [anon_sym_ATsubpackage] = ACTIONS(97),
    [anon_sym_ATthrows] = ACTIONS(97),
    [anon_sym_ATtodo] = ACTIONS(97),
    [anon_sym_ATuses] = ACTIONS(97),
    [anon_sym_ATvar] = ACTIONS(97),
    [anon_sym_ATversion] = ACTIONS(97),
    [sym__end] = ACTIONS(97),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(105), 1,
      anon_sym_ATproperty,
    ACTIONS(103), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
      anon_sym_ATpackage,
      anon_sym_ATparam,
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
  [34] = 2,
    ACTIONS(62), 1,
      anon_sym_ATproperty,
    ACTIONS(60), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
      anon_sym_ATpackage,
      anon_sym_ATparam,
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
  [68] = 2,
    ACTIONS(109), 1,
      anon_sym_ATproperty,
    ACTIONS(107), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
      anon_sym_ATpackage,
      anon_sym_ATparam,
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
  [102] = 2,
    ACTIONS(66), 1,
      anon_sym_ATproperty,
    ACTIONS(64), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
      anon_sym_ATpackage,
      anon_sym_ATparam,
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
  [136] = 2,
    ACTIONS(113), 1,
      anon_sym_ATproperty,
    ACTIONS(111), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
      anon_sym_ATpackage,
      anon_sym_ATparam,
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
  [170] = 2,
    ACTIONS(117), 1,
      anon_sym_ATproperty,
    ACTIONS(115), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
      anon_sym_ATpackage,
      anon_sym_ATparam,
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
  [204] = 2,
    ACTIONS(121), 1,
      anon_sym_ATproperty,
    ACTIONS(119), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
      anon_sym_ATpackage,
      anon_sym_ATparam,
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
  [238] = 2,
    ACTIONS(125), 1,
      anon_sym_ATproperty,
    ACTIONS(123), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
      anon_sym_ATpackage,
      anon_sym_ATparam,
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
  [272] = 4,
    ACTIONS(129), 1,
      sym_text,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(27), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [287] = 4,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      sym_text,
    ACTIONS(133), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(28), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [302] = 4,
    ACTIONS(139), 1,
      sym_text,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(28), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [317] = 3,
    ACTIONS(145), 1,
      sym_text,
    STATE(18), 1,
      sym_description,
    STATE(11), 2,
      sym_text_line,
      aux_sym_description_repeat1,
  [328] = 3,
    ACTIONS(145), 1,
      sym_text,
    STATE(22), 1,
      sym_description,
    STATE(11), 2,
      sym_text_line,
      aux_sym_description_repeat1,
  [339] = 1,
    ACTIONS(147), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_text,
      anon_sym_LBRACE,
  [346] = 2,
    ACTIONS(149), 1,
      anon_sym_ATinternal,
    STATE(37), 1,
      sym__internal_inline_tag,
  [353] = 1,
    ACTIONS(151), 1,
      sym_email_address,
  [357] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [361] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [365] = 1,
    ACTIONS(157), 1,
      sym_text,
  [369] = 1,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
  [373] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
  [377] = 1,
    ACTIONS(163), 1,
      sym_uri,
  [381] = 1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
  [385] = 1,
    ACTIONS(167), 1,
      anon_sym_GT,
  [389] = 1,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
  [393] = 1,
    ACTIONS(171), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 34,
  [SMALL_STATE(20)] = 68,
  [SMALL_STATE(21)] = 102,
  [SMALL_STATE(22)] = 136,
  [SMALL_STATE(23)] = 170,
  [SMALL_STATE(24)] = 204,
  [SMALL_STATE(25)] = 238,
  [SMALL_STATE(26)] = 272,
  [SMALL_STATE(27)] = 287,
  [SMALL_STATE(28)] = 302,
  [SMALL_STATE(29)] = 317,
  [SMALL_STATE(30)] = 328,
  [SMALL_STATE(31)] = 339,
  [SMALL_STATE(32)] = 346,
  [SMALL_STATE(33)] = 353,
  [SMALL_STATE(34)] = 357,
  [SMALL_STATE(35)] = 361,
  [SMALL_STATE(36)] = 365,
  [SMALL_STATE(37)] = 369,
  [SMALL_STATE(38)] = 373,
  [SMALL_STATE(39)] = 377,
  [SMALL_STATE(40)] = 381,
  [SMALL_STATE(41)] = 385,
  [SMALL_STATE(42)] = 389,
  [SMALL_STATE(43)] = 393,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(17),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(43),
  [11] = {.count = 1, .reusable = true}, SHIFT(8),
  [13] = {.count = 1, .reusable = true}, SHIFT(39),
  [15] = {.count = 1, .reusable = true}, SHIFT(14),
  [17] = {.count = 1, .reusable = false}, SHIFT(14),
  [19] = {.count = 1, .reusable = false}, SHIFT(26),
  [21] = {.count = 1, .reusable = true}, SHIFT(38),
  [23] = {.count = 1, .reusable = true}, SHIFT(34),
  [25] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [28] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [34] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [43] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [46] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [48] = {.count = 1, .reusable = true}, SHIFT(40),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 1),
  [52] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 1),
  [54] = {.count = 1, .reusable = true}, SHIFT(10),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 1),
  [58] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 1),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [62] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 2),
  [66] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 2),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [72] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [74] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [76] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(26),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_text_line, 3),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_text_line, 3),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_tag_name, 1),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_tag_name, 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 2),
  [89] = {.count = 1, .reusable = true}, SHIFT(33),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_text_line, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_text_line, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(15),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 1),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 3),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 3),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 5),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 5),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__global_tag, 3),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym__global_tag, 3),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 2),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 2),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 3),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 3),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [127] = {.count = 1, .reusable = false}, SHIFT(16),
  [129] = {.count = 1, .reusable = false}, SHIFT(27),
  [131] = {.count = 1, .reusable = false}, SHIFT(32),
  [133] = {.count = 1, .reusable = false}, SHIFT(13),
  [135] = {.count = 1, .reusable = false}, SHIFT(28),
  [137] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2),
  [139] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(28),
  [142] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(32),
  [145] = {.count = 1, .reusable = true}, SHIFT(26),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 3),
  [149] = {.count = 1, .reusable = true}, SHIFT(36),
  [151] = {.count = 1, .reusable = true}, SHIFT(41),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [155] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [157] = {.count = 1, .reusable = true}, SHIFT(42),
  [159] = {.count = 1, .reusable = true}, SHIFT(31),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [163] = {.count = 1, .reusable = true}, SHIFT(29),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [167] = {.count = 1, .reusable = true}, SHIFT(20),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym__internal_inline_tag, 2, .production_id = 1),
  [171] = {.count = 1, .reusable = true}, SHIFT(30),
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
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
