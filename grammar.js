module.exports = grammar({
  name: 'klipper',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    document: $ => repeat($.section),

    section: $ => seq(
      $.section_name,
      alias(repeat($.field), $.section_body),
    ),
    section_name: $ => seq('[', alias(/[^\[\]\n]+/, $.text), ']'),

    field: $ => seq(
      $.field_name,
      ':',
      $.field_value,
    ),

    field_name: $ => /[^#;:\s\[]+/,
    field_value: $ => seq(
      /[^#;\n]*/,
      repeat(choice(
        seq(/[ \t]+/, /[^#;\n]*/),
      )),
    ),
    comment: $ => /[#;][^\n]*/,
  },
});