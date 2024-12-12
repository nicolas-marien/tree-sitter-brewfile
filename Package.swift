// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterBrewfile",
    products: [
        .library(name: "TreeSitterBrewfile", targets: ["TreeSitterBrewfile"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterBrewfile",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterBrewfileTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterBrewfile",
            ],
            path: "bindings/swift/TreeSitterBrewfileTests"
        )
    ],
    cLanguageStandard: .c11
)
