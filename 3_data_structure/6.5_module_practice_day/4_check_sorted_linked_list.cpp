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

void check_is_sorted(Node* head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    bool isSorted = true;
    while (temp->next != NULL) {
       if(temp->val > temp->next->val){
         isSorted = false;
         break;
       }
        temp = temp->next;
    }

    if(isSorted){
        cout << "Yes, is sorted list!";
    }
    else{
        cout << "No, isn't sorted list!";
    }

    
}

int main() {
    Node* head = new Node(90);
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

    check_is_sorted(head); 

    return 0;
}
