/**
 * @file Github Actions expressions grammar for tree-sitter
 * @author Héctor Ochoa <hector.ochoa.dev@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "gh_actions_expressions",

  rules: {
    pair: ($) => $._if_pair,

    _if_pair: ($) =>
      seq(
        field("key", $.if_key),
        ":",
        field("value", choice($.delimited_expression, $.expression))
      ),
    if_key: () => "if",

    expression: ($) => choice($.context, $.literal),
    delimited_expression: ($) => seq("${{", choice($.context, $.literal), "}}"),

    literal: ($) => choice($.boolean, $.null, $.number, $.string),

    boolean: () => choice("true", "false"),

    null: () => "null",

    _dot: () => ".",

    number: ($) => choice($._int, $._float, $._hex, $._exp),
    _int: () => /\d+/,
    _float: ($) => seq(optional("-"), $._int, $._dot, $._int),
    _hex: () => seq("0x", /[0-9a-f]+/),
    _exp: ($) => seq($._float, "e", optional("-"), $._int),

    string: ($) =>
      seq("'", repeat(choice($.string_content, $.scape_sequence)), "'"),
    string_content: (_) => token(prec(-1, /([^'\\\r\n]|\\(.|\r?\n))+/)),
    scape_sequence: () => token.immediate("''"),

    identifier: () => /[_a-zA-Z][-_a-zA-Z0-9]+/,
    context: ($) => $.identifier,
  },
});
