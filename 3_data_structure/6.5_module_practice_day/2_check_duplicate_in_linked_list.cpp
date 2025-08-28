#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

void print_linked_list(Node * head){
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    bool isDuplicate = false;
    int freq[101] = {0};
    Node* temp = head;
    while (temp != NULL)
    {
        
        freq[temp->val]++;
        if(freq[temp->val] > 1){
            isDuplicate = true;
            break;
        }
        temp = temp->next;
    
    }
    if(isDuplicate){
        cout << "Yes, This list has duplicate value!";
    }
    else{
        cout << "No, This list has not duplicate value!";
    }
    
}

int main(){
    Node* head = new Node(2);
    Node* a = new Node(1);
    Node* b = new Node(5);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(4);
    Node* tail = new Node(9);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = tail;

    print_linked_list(head);

    return 0;
}