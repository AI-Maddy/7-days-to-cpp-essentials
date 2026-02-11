#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int *arr = new int[n];
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum: " << sum << "\n";

    delete[] arr;
    return 0;
}
