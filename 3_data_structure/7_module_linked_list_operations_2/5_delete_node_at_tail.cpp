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
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void node_delete_any_position(Node* &head, Node* &tail, int index) {
    if (head == NULL){
        return;
    } 

    if (index == 0) {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < index; i++) {
        temp = temp->next;
        if (temp == NULL || temp->next == NULL) {
            return; 
        }
    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    tail = temp;
}

void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while (true) {
        int val;
        cin >> val;
        if (val == -1) {
            break;
        }
        input_node(head, tail, val);
    }

    print_linked_list(head);
    node_delete_any_position(head, tail, 4); 
    print_linked_list(head);

    return 0;
}
