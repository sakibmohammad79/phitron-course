#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node* prev;
        Node* next;

        Node(int val){
            this->val = val;
            this->prev = NULL;
            this->next = NULL;
        }
};

void delete_at_head(Node * &head, Node * &tail){
    if(head == NULL){
        return;
    }
    Node* deleteHead = head;
    if(deleteHead->next == NULL){
        delete deleteHead;
        head = NULL;
        tail = NULL;
        return;
    }
    head = deleteHead->next;
    delete deleteHead;
    head->prev = NULL;
}

void print_linked_list(Node * head){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    
}
int main(){
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    print_linked_list(head);
    delete_at_head(head, tail);
  
    print_linked_list(head);

    return 0;
}