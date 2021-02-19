load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "hello",
    srcs = ["hello.cpp"],
)

cc_binary(
    name = "cpp11",
    srcs = ["cpp11.cpp"],
)

cc_binary(
    name = "working",
    srcs = ["working.cpp"],
)

cc_binary(
    name = "switch",
    srcs = ["switch.cpp"],
)

cc_binary(
    name = "while",
    srcs = ["while.cpp"],
)

cc_binary(
    name = "for_static",
    srcs = ["for.cpp"],
    linkstatic = True,
)

cc_binary(
    name = "for_dyn",
    srcs = ["for.cpp"],
    linkstatic = False,
)
