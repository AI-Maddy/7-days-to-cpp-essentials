#include <iostream>

using namespace std;

int main() {
    double p = 0.0;
    double r = 0.0;
    double t = 0.0;
    cin >> p >> r >> t;

    double interest = p * r * t / 100.0;
    double total = p + interest;

    cout << interest << " " << total << "\n";
    return 0;
}
