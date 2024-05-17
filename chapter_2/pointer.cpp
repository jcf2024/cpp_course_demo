#include <iostream>
using namespace std;

int main () {
//    int variable = 20; // 实际变量的声明
//    int *pointer_address = &variable; // 指针变量的声明
////    ip = &var; // 在指针变量中存储 var 的地址
//    cout << "Value of variable: ";
//    cout << variable << endl; // 输出在指针变量中存储的地址
//    cout << "Address stored in ip variable: ";
//    cout << pointer_address << endl; // 访问指针中地址的值
//    cout << "Value of *ip variable: ";
//    cout << *pointer_address << endl;

    int a = 1633;
    int& b = a;
    cout << "b: " << b << endl;
    cout << "address: " << &a << " " << &b << endl;

    return 0;
}
