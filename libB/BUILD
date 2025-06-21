# libB/BUILD

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "libB",
    srcs = ["libB.cpp"],
    hdrs = ["libB.hpp"],
    includes = ["."], # 允许其他目标以 "libB.hpp" 方式包含此库的头文件
    deps = ["//libA:libA"], # 依赖于 libA 库
    linkstatic = 0, # 构建为共享库 (.so)
)