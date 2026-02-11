#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

class Queue {
public:
    Queue() : head(nullptr), tail(nullptr), count(0) {}

    ~Queue() {
        while (head) {
            Node *next = head->next;
            delete head;
            head = next;
        }
    }

    void enqueue(int value) {
        Node *node = new Node(value);
        if (!tail) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
        ++count;
    }

    void dequeue() {
        if (!head) {
            return;
        }
        Node *old = head;
        head = head->next;
        if (!head) {
            tail = nullptr;
        }
        delete old;
        --count;
    }

    int front() const {
        return head ? head->data : -1;
    }

    int size() const {
        return count;
    }

private:
    Node *head;
    Node *tail;
    int count;
};

int main() {
    int n = 0;
    cin >> n;

    Queue q;
    for (int i = 0; i < n; ++i) {
        int x = 0;
        cin >> x;
        q.enqueue(x);
    }

    q.dequeue();
    cout << q.front() << " " << q.size() << "\n";

    return 0;
}
