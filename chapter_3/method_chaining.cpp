#include <iostream>
#include <string>

class MyString {
public:

};

int main () {
    const std::string s1("a");
    const std::string s2("b");
    const std::string s3("c");
    const std::string s4("d");
    std::string result = s1 + s2 + s3 + s4;
    std::cout << result << std::endl;
}