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

void delete_at_tail(Node* &head, Node * &tail){
    if(tail == NULL){
        return;
    }
    Node* deleteTail = tail;
     if(deleteTail->prev == NULL){
        delete deleteTail;
        head = NULL;
        tail = NULL;
        return;
    }
    tail = deleteTail->prev;
    delete deleteTail;
    tail->next = NULL;
    
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
    delete_at_tail(head, tail);
  
    print_linked_list(head);

    return 0;
}