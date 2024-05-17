#include <iostream>

template <typename T> // 通用类型的print函数模板
void print(T value) {
    std::cout << value << std::endl;
}

template <> // bool类型特化版本
void print(bool value) {
    std::cout << (value ? "true" : "false") << std::endl;
}

int main() {
    int i = 42;
    // 编译器会优先考虑特化版本，但匹配不到，再考虑通用版本
    print(i); // 使用通用版本,输出 42

    bool b = true;
    // 编译器会优先考虑特化版本，匹配成功，选择通用版本
    print<bool>(b); // 使用特化版本,输出 true

    return 0;
}