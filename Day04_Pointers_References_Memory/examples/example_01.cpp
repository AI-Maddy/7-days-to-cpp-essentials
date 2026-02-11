#include <iostream>

using namespace std;

int main() {
    int x = 42;
    int *ptr = &x;

    cout << "x: " << x << "\n";
    cout << "*ptr: " << *ptr << "\n";

    *ptr = 50;
    cout << "x after change: " << x << "\n";

    return 0;
}
