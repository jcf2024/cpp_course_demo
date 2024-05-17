#include <iostream>
using namespace std;

namespace ads::perception::detection {
    void Detect() { cout << "Detect" << endl; }
}  // namespace ads::perception::Detect

int main() {
    // 调用perception命名空间中的函数
    ads::perception::detection::Detect();
    return 0;
}
