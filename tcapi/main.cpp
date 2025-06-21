#include <iostream>
#include "libB/libB.hpp" // 主程序依赖 libB 的接口

int main() {
    std::cout << "Calling greetFromB from tcapi..." << std::endl;
    greetFromB(); // 调用 libB 的函数
    return 0;
}