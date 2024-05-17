#include <fstream>
#include <iostream>

int main() {
    std::string filename = "your_data_file";

    // 打开文件
    std::fstream file(filename, std::ios::in);

    // 检查文件是否成功打开
    if (!file.is_open()) {
        std::cerr << "Failed to open the file: " << filename << std::endl;
        return 1;
    }

    std::string line;
    // 逐行读取文件内容
    while (std::getline(file, line)) {
        /* 获取到一行内容，做你的其他处理 */
    }

    // 关闭文件
    file.close();
    return 0;
}