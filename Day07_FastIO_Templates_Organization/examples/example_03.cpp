#include <iostream>
#include <string>

using namespace std;

template <typename T, typename U>
class Pair {
public:
    Pair(T first, U second) : first_value(first), second_value(second) {}

    void print() const {
        cout << first_value << " " << second_value << "\n";
    }

private:
    T first_value;
    U second_value;
};

int main() {
    Pair<int, string> p(10, "points");
    p.print();
    return 0;
}
