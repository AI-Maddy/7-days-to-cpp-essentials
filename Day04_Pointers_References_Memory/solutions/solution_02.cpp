#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sum = 0;
    int *ptr = arr;
    for (int i = 0; i < n; ++i) {
        sum += *(ptr + i);
    }

    cout << sum << "\n";

    delete[] arr;
    return 0;
}
