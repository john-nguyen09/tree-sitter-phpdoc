module.exports = grammar({
  name: 'phpdoc',

  extras: $ => [
    token(
      seq(/(\r)|(\r\n)|(\n)/, /[ \t]*/, repeat('*'), /[ \t]*/)
    ),
    token(
      seq(/[ \t]*/, repeat('*'), /[ \t]*/)
    ),
    token(repeat1(' ')),
  ],

  rules: {
    document: $ => seq(
      $._begin,
      optional($.description),
      repeat($.tag),
      $._end,
    ),

    _begin: $ => token(seq('/**', repeat('*'))),
  
    tag: $ => choice(
      seq($.tag_name, optional($.description)),

      $._author_tag,

      $._deprecated_tag,

      $._global_tag,

      $._internal_tag,

      $._link_tag,
    ),

    _author_tag: $ => seq(
      alias('@author', $.tag_name),
      optional(
        seq($.author_name, optional(seq('<', $.email_address, '>')))
      )
    ),

    _deprecated_tag: $ => seq(
      alias('@deprecated', $.tag_name),
      optional($.version),
      optional($.description),
    ),

    _global_tag: $ => seq(
      alias('@global', $.tag_name),
      alias($.identifier, $.type),
      $.description,
    ),

    _internal_tag: $ => seq(
      alias('@internal', $.tag_name),
      optional($.description)
    ),

    _internal_inline_tag: $ => seq(
      alias('@internal', $.tag_name),
      alias($.text, $.description)
    ),

    _link_tag: $ => seq(
      alias('@link', $.tag_name),
      $.uri,
      $.description
    ),

    _link_inline_tag: $ => seq(
      alias('@link', $.tag_name),
      $.uri,
      alias($.text, $.description)
    ),

    author_name: $ => /[a-zA-Zα-ωΑ-Ωµ0-9_][ a-zA-Zα-ωΑ-Ωµ0-9_]*/,

    email_address: $ => /\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+/,
  
    tag_name: $ => choice(...phpdoc_tags_with_at()),
  
    description: $ => repeat1($.text_line),

    text_line: $ => seq(
      $.text,
      repeat(choice($.text, $.inline_tag)),
      choice('\n', '\r\n')
    ),

    text: $ => token(prec(-1, /[^@*\s\r\n{}][^\r\n{}]*/)),

    inline_tag: $ => seq(
      '{',
      $._internal_inline_tag,
      // $._link_inline_tag,
      '}'
    ),

    version: $ => /[\.0-9]+/,

    uri: $ => token(/\w+:(\/?\/?)[^\s]+/),
  
    identifier: $ => /[a-zA-Z_$\\][a-zA-Z_$\\0-9]*/,
  
    _end: $ => '*/',
  },
})

function phpdoc_tags_with_at() {
  return phpdoc_tags().map(tag => `@${tag}`);
}

function phpdoc_tags() {
  return [
    'api',
    'category',
    'copyright',
    'example',
    'filesource',
    'ignore',
    'license',
    'method',
    'package',
    'param',
    'property',
    'property-read',
    'property-write',
    'return',
    'see',
    'since',
    'source',
    'subpackage',
    'throws',
    'todo',
    'uses',
    'var',
    'version',
  ];
}