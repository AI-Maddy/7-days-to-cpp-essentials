#include <iostream>

using namespace std;

int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    int *ptr = arr;

    for (int i = 0; i < 5; ++i) {
        cout << *(ptr + i);
        if (i + 1 < 5) {
            cout << " ";
        }
    }
    cout << "\n";

    return 0;
}
