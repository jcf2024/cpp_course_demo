#include <iostream>
#include <string>

class Test {
public:
    int a = 0;
    int b = 1;
    inline static int c = 1;
    int d = 3;

};

//int Test::c = 2;

int main () {
    Test test;
//    Test test_2;
    std::cout << "value of test.c is: " << test.c << std::endl;
//    test_2.c = 6;
//    std::cout << "value of test.c is: " << test.c << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << "address of a is: " << &test.a << std::endl;
    std::cout << "address of b is: " << &test.b << std::endl;
//    std::cout << "address of c is: " << &test.c << std::endl;
//    std::cout << "address of c is: " << &Test::c << std::endl;
    std::cout << "address of d is: " << &test.d << std::endl;
}