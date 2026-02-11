#include <iostream>

using namespace std;

void addOneByValue(int x) {
    x += 1;
}

void addOneByRef(int &x) {
    x += 1;
}

int main() {
    int value = 5;

    addOneByValue(value);
    cout << "After by value: " << value << "\n";

    addOneByRef(value);
    cout << "After by ref: " << value << "\n";

    return 0;
}
