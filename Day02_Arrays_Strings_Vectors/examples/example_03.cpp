#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> values;
    int n = 0;

    cout << "How many numbers? ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int x = 0;
        cin >> x;
        values.push_back(x);
    }

    if (!values.empty()) {
        values.pop_back();
    }

    cout << "Size after pop: " << values.size() << "\n";
    cout << "Values:";
    for (int v : values) {
        cout << " " << v;
    }
    cout << "\n";

    return 0;
}
