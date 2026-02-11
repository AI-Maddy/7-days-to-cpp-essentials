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

    int max_value = values[0];
    for (int i = 1; i < n; ++i) {
        if (values[i] > max_value) {
            max_value = values[i];
        }
    }

    cout << max_value << "\n";
    return 0;
}
