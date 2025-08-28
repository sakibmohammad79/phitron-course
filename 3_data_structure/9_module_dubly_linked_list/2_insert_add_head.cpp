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

void insert_add_head(Node * &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
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
    insert_add_head(head, tail,  100);
    print_linked_list(head);

    return 0;
}