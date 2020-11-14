// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "Button",
    products: [
        .library(
            name: "Button",
            targets: ["Button"]),
    ],
    targets: [
        .binaryTarget(
            name: "Button",
            path: "Button.xcframework")
    ]
)
