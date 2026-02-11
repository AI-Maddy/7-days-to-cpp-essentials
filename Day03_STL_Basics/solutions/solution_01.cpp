#include <iostream>
#include <set>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    set<int> values;
    for (int i = 0; i < n; ++i) {
        int x = 0;
        cin >> x;
        values.insert(x);
    }

    cout << values.size() << "\n";
    return 0;
}
