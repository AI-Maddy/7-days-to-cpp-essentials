#include <iostream>
#include <vector>

using namespace std;

class Stack {
public:
    void push(int value) {
        data.push_back(value);
    }

    void pop() {
        if (!data.empty()) {
            data.pop_back();
        }
    }

    int top() const {
        return data.back();
    }

    bool empty() const {
        return data.empty();
    }

private:
    vector<int> data;
};

int main() {
    Stack st;
    st.push(5);
    st.push(10);

    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";

    return 0;
}
