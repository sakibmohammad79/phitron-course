#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void node_input(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void search_node(Node* head, int value) {
    int index = 0;
    while (head != NULL) {
        if (head->val == value) {
            cout << index << endl;
            return;
        }
        head = head->next;
        index++;
    }
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Node* head = NULL;
        Node* tail = NULL;

        int val;
        while (cin >> val && val != -1) {
            node_input(head, tail, val);
        }

        int value;
        cin >> value;
        search_node(head, value);
    }

    return 0;
}
