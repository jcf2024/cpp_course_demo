#include <iostream>
#include <string>

int main() {
    std::string module = "perception";
    std::string status = "running!";
    // 拼接
    std::string result = module.append(" is " + status);

    // 获取长度

    // 查找
    std::string full_path = "/project/chapter_2/string.cpp";
    std::string file_name = "str";

    size_t found_pos = full_path.find(file_name);
    if (found_pos != std::string::npos) {
        std::cout << "File name found at position " << found_pos << std::endl; // 输出 "Substring found at position 6"
    } else {
        std::cout << "File name not found." << std::endl;
    }

    // 获取子串
    std::string found_str = full_path.substr( found_pos);
    std::cout << found_str << std::endl;

    return 0;
}
