#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;

    cout << "Enter two integers: ";
    cin >> a >> b;

    if (b == 0) {
        cout << "Division by zero is not allowed.\n";
        return 0;
    }

    int int_div = a / b;
    double double_div = static_cast<double>(a) / b;

    cout << "Integer division: " << int_div << "\n";
    cout << "Double division: " << double_div << "\n";

    return 0;
}
