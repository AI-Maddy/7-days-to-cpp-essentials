#include <iostream>

using namespace std;

int countDigits(long long n) {
    if (n < 10) {
        return 1;
    }
    return 1 + countDigits(n / 10);
}

int main() {
    long long n = 0;
    cin >> n;

    if (n < 0) {
        n = -n;
    }

    cout << countDigits(n) << "\n";
    return 0;
}
