#include <iostream>
#include "libB.hpp"         // 包含自己的头文件
#include "libA/libA.hpp" // 主程序依赖 libB 的接口

void greetFromB() {
    greetFromA(); // 调用 libA 的函数
    std::cout << "Hello from libB!" << std::endl;
}