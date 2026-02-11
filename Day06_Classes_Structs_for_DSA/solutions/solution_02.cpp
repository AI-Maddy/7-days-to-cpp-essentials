#include <cmath>
#include <iostream>

using namespace std;

class Point {
public:
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}

    double distanceToOrigin() const {
        return sqrt(x * x + y * y);
    }

private:
    double x;
    double y;
};

int main() {
    double x = 0.0;
    double y = 0.0;
    cin >> x >> y;

    Point p(x, y);
    cout << p.distanceToOrigin() << "\n";
    return 0;
}
