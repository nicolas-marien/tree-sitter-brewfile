import XCTest
import SwiftTreeSitter
import TreeSitterBrewfile

final class TreeSitterBrewfileTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_brewfile())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Brewfile grammar")
    }
}
