#include <iostream>

using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 0;
    int b = 0;
    cin >> a >> b;

    swapValues(a, b);
    cout << a << " " << b << "\n";
    return 0;
}
