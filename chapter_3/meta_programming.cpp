#include <iostream>
#include <string>
using namespace std;

template <int N>
struct PrintConstexprInt {
    static_assert(N >= 0, "N must be non-negative");
    static constexpr auto value = N;
    static constexpr auto str = std::to_string(N);
};

template <int N>
struct Fibonacci {
    static constexpr int value = Fibonacci<N-1>::value + Fibonacci<N-2>::value;
};

template <>
struct Fibonacci<0> {
    static constexpr int value = 0;
};

template <>
struct Fibonacci<1> {
    static constexpr int value = 1;
};



int main() {
    constexpr int fib10 = Fibonacci<10>::value;
    cout << fib10 << endl; // 输出 55
//    static_assert(sizeof(PrintConstexprInt<fib10>) == sizeof(PrintConstexprInt<fib10>), PrintConstexprInt<fib10>::str)
    return 0;
}
