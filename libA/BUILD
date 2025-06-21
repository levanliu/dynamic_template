# libA/BUILD

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "libA",
    srcs = ["libA.cpp"],
    hdrs = ["libA.hpp"],
    includes = ["."], # 允许其他目标以 "libA.hpp" 方式包含此库的头文件
    linkstatic = 0, # 构建为共享库 (.so)
)