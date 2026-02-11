#include <iostream>
#include <string>

using namespace std;

int main() {
    string first;
    string second;

    cout << "Enter first string: ";
    getline(cin, first);
    cout << "Enter second string: ";
    getline(cin, second);

    string combined = first + " " + second;

    cout << "Length of first: " << first.length() << "\n";
    cout << "Length of second: " << second.length() << "\n";
    cout << "Combined: " << combined << "\n";

    return 0;
}
