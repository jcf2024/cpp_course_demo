#include <iostream>
#include <bitset>
using namespace std;

int main() {
     double length = 5.0000000000000000000001 * 3.00000000000000000000000001;
    if (length - 15.0 < 0.000001) {
        cout << "equal." << endl;
    }
    return 0;
}