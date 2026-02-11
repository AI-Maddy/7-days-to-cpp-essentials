#include <iostream>

using namespace std;

int main() {
    int value = 10;
    int &alias = value;

    cout << "value: " << value << "\n";
    alias = 25;
    cout << "value after alias change: " << value << "\n";

    return 0;
}
