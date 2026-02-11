#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    int count = 0;
    for (char c : line) {
        char lower = static_cast<char>(tolower(static_cast<unsigned char>(c)));
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            ++count;
        }
    }

    cout << count << "\n";
    return 0;
}
