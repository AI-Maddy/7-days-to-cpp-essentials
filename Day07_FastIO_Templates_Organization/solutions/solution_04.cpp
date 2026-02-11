#include <iostream>
#include <vector>

using namespace std;

template <typename T>
int findIndex(const vector<T> &values, const T &target) {
    for (size_t i = 0; i < values.size(); ++i) {
        if (values[i] == target) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

int main() {
    int n = 0;
    cin >> n;

    vector<int> values(n);
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    int target = 0;
    cin >> target;

    cout << findIndex(values, target) << "\n";
    return 0;
}
