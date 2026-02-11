#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int score;

    bool isPassing() const {
        return score >= 50;
    }
};

int main() {
    Student s{"Ravi", 72};
    cout << s.name << " " << (s.isPassing() ? "PASS" : "FAIL") << "\n";
    return 0;
}
