#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);

    cout << head->data << " " << head->next->data << "\n";

    delete head->next;
    delete head;
    return 0;
}
