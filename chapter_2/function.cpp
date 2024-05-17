#include <iostream>

int Max(int num1, int num2);

int main() {
    int a = 100;
    int b = 200;

    int the_bigger_one = Max(a, b);
    std::cout << "a: " << a << std::endl;
    std::cout << "the_bigger_one: " << the_bigger_one << std::endl;
    return 0;
}

int Max(int num1, int num2) {
    int a = 0;
    std::cout << "a: " << a << std::endl;
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int Min() {

}