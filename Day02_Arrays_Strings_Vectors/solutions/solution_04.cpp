#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    int k = 0;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    if (n == 0) {
        return 0;
    }

    k = k % n;
    vector<int> rotated(n);

    for (int i = 0; i < n; ++i) {
        int new_index = (i + k) % n;
        rotated[new_index] = arr[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << rotated[i];
        if (i + 1 < n) {
            cout << " ";
        }
    }
    cout << "\n";

    return 0;
}
