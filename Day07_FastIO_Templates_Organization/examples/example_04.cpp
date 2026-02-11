#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void printVector(const vector<T> &values) {
    for (size_t i = 0; i < values.size(); ++i) {
        cout << values[i];
        if (i + 1 < values.size()) {
            cout << " ";
        }
    }
    cout << "\n";
}

int main() {
    vector<int> numbers = {1, 3, 5, 7};
    printVector(numbers);
    return 0;
}
