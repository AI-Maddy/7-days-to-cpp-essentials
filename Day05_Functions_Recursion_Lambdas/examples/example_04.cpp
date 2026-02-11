#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> values = {3, -7, 2, -1, 5};

    sort(values.begin(), values.end(), [](int a, int b) {
        return abs(a) < abs(b);
    });

    for (size_t i = 0; i < values.size(); ++i) {
        cout << values[i];
        if (i + 1 < values.size()) {
            cout << " ";
        }
    }
    cout << "\n";

    return 0;
}
