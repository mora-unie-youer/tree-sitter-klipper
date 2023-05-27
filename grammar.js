module.exports = grammar({
  name: 'klipper',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  rules: {
    source_file: $ => seq(
      repeat($.section),
    ),

    section: $ => seq(
      $.section_name,
      // There can be no fields in section
      optional(repeat($.section_field)),
    ),

    section_name: $ => seq(
      '[',
      alias(/[^\[\]\n]+/, $.text),
      ']',
      // Section names must end on newline, but comments are allowed
      '\n',
    ),

    section_field: $ => seq(
      alias(/[^#;:\s\[]+/, $.name),
      ':',
      alias($.section_field_content, $.value),
      // alias(/.+/, $.setting_value),
    ),

    section_field_content: $ => seq(
      /.+/, '\n', // First line
      optional(repeat(seq(/\s+/, /.+/, '\n'))), // Next lines
    ),

    comment: $ => token(choice(
      seq('#', /.*/),
      seq(';', /.*/),
    )),
  },
});