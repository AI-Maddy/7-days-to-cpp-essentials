#include <iostream>

using namespace std;

template <typename T>
T minOfThree(T a, T b, T c) {
    T min_val = (a < b) ? a : b;
    return (c < min_val) ? c : min_val;
}

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b >> c;

    cout << minOfThree(a, b, c) << "\n";
    return 0;
}
