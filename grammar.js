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
    source_file: ($) => repeat1(choice($.word, $.not_word)),

    word: () => /\w+/,
    not_word: () => /\W+/,
  },
});
