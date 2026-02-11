#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int *left = arr;
    int *right = arr + n - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i];
        if (i + 1 < n) {
            cout << " ";
        }
    }
    cout << "\n";

    delete[] arr;
    return 0;
}
