#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    cin >> a >> b;

    int *pa = &a;
    int *pb = &b;

    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    cout << a << " " << b << "\n";
    return 0;
}
