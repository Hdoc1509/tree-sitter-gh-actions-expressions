package tree_sitter_gh_actions_expressions_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_gh_actions_expressions "github.com/hdoc1509/tree-sitter-gh-actions-expressions/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gh_actions_expressions.Language())
	if language == nil {
		t.Errorf("Error loading GhActionsExpressions grammar")
	}
}
