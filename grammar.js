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
    expression: ($) => repeat1(choice($.boolean, $.null)),

    boolean: () => /true|false/,
    null: () => /null/,
  },
});
