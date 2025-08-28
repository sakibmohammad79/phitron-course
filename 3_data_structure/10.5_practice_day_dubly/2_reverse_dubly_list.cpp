#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void input_node(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void reverse_linked_list(Node* &head, Node* &tail){
    if(head == NULL || tail == NULL){
        return;
    }
    for(Node* i = head, *j = tail; i != j && i->prev != j; i = i->next, j= j->prev){
        swap(i->val , j->val);
    }
}

void print_linked_list(Node * head){
    if(head == NULL){
        return;
    }
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        input_node(head, tail, val);
    }
    
    reverse_linked_list(head, tail);
    print_linked_list(head);
    return 0;
}