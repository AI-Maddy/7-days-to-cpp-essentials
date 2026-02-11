#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int max_value = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }

    cout << max_value << "\n";

    delete[] arr;
    return 0;
}
