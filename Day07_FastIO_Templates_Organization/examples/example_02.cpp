#include <iostream>

using namespace std;

template <typename T>
T maxOfTwo(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << maxOfTwo(3, 7) << "\n";
    cout << maxOfTwo(2.5, 1.2) << "\n";
    return 0;
}
