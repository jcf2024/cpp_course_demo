#include <iostream>
using namespace std;

int main() {
//    string result = "fail";
//    bool is_ok = (result == "success" ? true : false);

    string result = "fail";
    bool is_ok;
    if (result == "success") {
        is_ok = true;
    } else {
        is_ok = false;
    }

    return 0;
}