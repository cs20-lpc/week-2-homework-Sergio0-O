#include <iostream>
using namespace std;

template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 one, T2 two) {
    first = one;
    second = two;
}

template <typename T1, typename T2>
void Pair<T1, T2>::print() const {
    cout << "(" << first << ", " << second << ")" << endl;
}
