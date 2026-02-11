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

    int query = 0;
    cin >> query;

    if (values.find(query) != values.end()) {
        cout << "FOUND\n";
    } else {
        cout << "NOT FOUND\n";
    }

    values.erase(query);
    cout << "Size after erase: " << values.size() << "\n";

    return 0;
}
