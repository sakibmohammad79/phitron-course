#include<bits/stdc++.h>
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

void print_middle_value(Node* head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    int count = 0;

    // Count nodes
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    int middle_idx = count / 2;
    temp = head;

    // Move to middle index
    for (int i = 0; i < middle_idx - (count % 2 == 0 ? 1 : 0); i++) {
        temp = temp->next;
    }

    if (count % 2 == 0) {
        cout << "Middle values: " << temp->val << " " << temp->next->val << endl;
    } else {
        cout << "Middle value: " << temp->val << endl;
    }
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    print_middle_value(head); // Output: Middle values: 40 50

    return 0;
}
