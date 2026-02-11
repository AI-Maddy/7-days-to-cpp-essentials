#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    unordered_set<int> seen;
    for (int i = 0; i < n; ++i) {
        int x = 0;
        cin >> x;
        if (seen.count(x)) {
            cout << x << "\n";
            return 0;
        }
        seen.insert(x);
    }

    cout << -1 << "\n";
    return 0;
}
