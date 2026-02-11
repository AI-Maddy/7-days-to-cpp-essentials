#include <iostream>
#include <map>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        int x = 0;
        cin >> x;
        ++freq[x];
    }

    for (const auto &pair : freq) {
        cout << pair.first << " " << pair.second << "\n";
    }

    return 0;
}
