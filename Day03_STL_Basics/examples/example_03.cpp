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
        seen.insert(x);
    }

    int query = 0;
    cin >> query;

    cout << (seen.count(query) ? "YES" : "NO") << "\n";
    return 0;
}
