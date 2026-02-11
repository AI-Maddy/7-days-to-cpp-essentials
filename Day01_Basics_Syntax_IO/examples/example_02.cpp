#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Sum: " << a + b << "\n";
    cout << "Difference: " << a - b << "\n";
    cout << "Product: " << a * b << "\n";

    if (b != 0) {
        cout << "Quotient: " << a / b << "\n";
        cout << "Remainder: " << a % b << "\n";
    } else {
        cout << "Quotient: undefined (division by zero)\n";
        cout << "Remainder: undefined (division by zero)\n";
    }

    return 0;
}
