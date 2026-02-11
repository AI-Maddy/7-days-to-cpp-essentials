#include <iostream>

using namespace std;

int main() {
    char c = '\0';

    cout << "Enter a character: ";
    cin >> c;

    int code = static_cast<int>(c);
    char next = static_cast<char>(c + 1);

    cout << "ASCII code: " << code << "\n";
    cout << "Next character: " << next << "\n";

    return 0;
}
