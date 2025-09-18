import XCTest
import SwiftTreeSitter
import TreeSitterGhActionsExpressions

final class TreeSitterGhActionsExpressionsTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gh_actions_expressions())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading GhActionsExpressions grammar")
    }
}
