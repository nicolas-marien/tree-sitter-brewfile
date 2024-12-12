package tree_sitter_brewfile_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_brewfile "github.com/tree-sitter/tree-sitter-brewfile/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_brewfile.Language())
	if language == nil {
		t.Errorf("Error loading Brewfile grammar")
	}
}
