#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

int main() {
    int n = 0;
    cin >> n;

    Node *head = nullptr;
    for (int i = 0; i < n; ++i) {
        int x = 0;
        cin >> x;
        Node *node = new Node(x);
        node->next = head;
        head = node;
    }

    Node *curr = head;
    while (curr) {
        cout << curr->data;
        if (curr->next) {
            cout << " ";
        }
        curr = curr->next;
    }
    cout << "\n";

    curr = head;
    while (curr) {
        Node *next = curr->next;
        delete curr;
        curr = next;
    }

    return 0;
}
