/**
 * @file Tree-sitter parser for Brewfile
 * @author Nicolas Marien
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: "brewfile",

  rules: {
    source_file: ($) => repeat($._line),

    _line: ($) =>
      choice(
        seq($.tap_directive, "\n"),
        seq($.brew_directive, "\n"),
        seq($.cask_directive, "\n"),
        seq($.mas_directive, "\n"),
        seq($.vscode_directive, "\n"),
        seq($.comment, "\n"),
        "\n"
      ),

    tap_directive: ($) =>
      seq("tap", optional($.quoted_string), optional($.options)),

    brew_directive: ($) =>
      seq("brew", optional($.quoted_string), optional($.options)),

    cask_directive: ($) =>
      seq("cask", optional($.quoted_string), optional($.options)),

    mas_directive: ($) =>
      seq(
        "mas",
        optional($.quoted_string),
        optional($.app_id),
        optional($.options)
      ),

    vscode_directive: ($) =>
      seq("vscode", optional($.quoted_string), optional($.options)),

    options: ($) => seq(",", choice($.hash_options, $.array_options)),

    hash_options: ($) =>
      seq("{", repeat(seq($.key_value_pair, optional(","))), "}"),

    array_options: ($) =>
      seq(
        "[",
        repeat(seq(choice($.quoted_string, $.number), optional(","))),
        "]"
      ),

    key_value_pair: ($) =>
      seq(
        field("key", $.identifier),
        ":",
        field(
          "value",
          choice($.quoted_string, $.number, "true", "false", "nil")
        )
      ),

    quoted_string: ($) =>
      choice(seq('"', /[^"]*/, '"'), seq("'", /[^']*/, "'")),

    app_id: ($) => /[0-9]+/,

    number: ($) => /[0-9]+/,

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    comment: ($) => seq("#", /.*/),
  },
});
