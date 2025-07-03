from unittest import TestCase

import tree_sitter
import tree_sitter_gh_actions_expressions


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_gh_actions_expressions.language())
        except Exception:
            self.fail("Error loading GhActionsExpressions grammar")
