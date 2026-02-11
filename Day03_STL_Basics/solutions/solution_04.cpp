#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string a;
    string b;

    getline(cin, a);
    getline(cin, b);

    if (a.length() != b.length()) {
        cout << "NO\n";
        return 0;
    }

    vector<int> count(256, 0);
    for (unsigned char c : a) {
        ++count[c];
    }
    for (unsigned char c : b) {
        --count[c];
    }

    for (int value : count) {
        if (value != 0) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
