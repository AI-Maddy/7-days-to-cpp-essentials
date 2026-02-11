#include <iostream>

using namespace std;

class Rectangle {
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2.0 * (length + width);
    }

private:
    double length;
    double width;
};

int main() {
    Rectangle rect(4.0, 3.0);
    cout << rect.area() << " " << rect.perimeter() << "\n";
    return 0;
}
