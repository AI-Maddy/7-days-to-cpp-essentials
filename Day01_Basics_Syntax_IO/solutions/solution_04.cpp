#include <iostream>

using namespace std;

int main() {
    double length = 0.0;
    double width = 0.0;
    cin >> length >> width;

    double area = length * width;
    double perimeter = 2.0 * (length + width);

    cout << area << " " << perimeter << "\n";
    return 0;
}
