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

void input_node(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int get_size(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}


bool insert_node_any_pos(Node*& head, Node*& tail, int val, int index) {
    int size = get_size(head);
    if (index < 0 || index > size) {
        return false;  // invalid
    }

    Node* newNode = new Node(val);

    if (index == 0) {
        newNode->next = head;
        head = newNode;
        return true;
    }

    Node* temp = head;
    for (int i = 1; i < index; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    if (newNode->next == NULL) {
        tail = newNode;
    }

    return true; // success
}

void print_linked_list(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val && val != -1) {
        input_node(head, tail, val);
    }

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int index, value;
        cin >> index >> value;

        bool success = insert_node_any_pos(head, tail, value, index);

        if (!success) {
            cout << "Invalid" << endl;
        } else {
            print_linked_list(head);
        }
    }

    return 0;
}
