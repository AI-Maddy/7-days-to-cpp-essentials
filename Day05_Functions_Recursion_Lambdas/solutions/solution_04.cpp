#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    vector<int> values(n);
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    bool first = true;
    auto is_even = [](int x) { return x % 2 == 0; };

    for (int v : values) {
        if (is_even(v)) {
            if (!first) {
                cout << " ";
            }
            cout << v;
            first = false;
        }
    }

    cout << "\n";
    return 0;
}
