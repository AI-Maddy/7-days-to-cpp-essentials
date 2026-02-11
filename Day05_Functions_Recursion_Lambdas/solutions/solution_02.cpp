#include <iostream>

using namespace std;

long long power(int a, int b) {
    if (b == 0) {
        return 1;
    }
    return static_cast<long long>(a) * power(a, b - 1);
}

int main() {
    int a = 0;
    int b = 0;
    cin >> a >> b;
    cout << power(a, b) << "\n";
    return 0;
}
