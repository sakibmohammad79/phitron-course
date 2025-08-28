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

void node_input(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_sorted_linked_list(Node * head){
    if(head == NULL){
        return;
    }
    for(Node* i = head; i->next != NULL; i = i->next){
        for(Node* j = i->next; j != NULL; j = j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }

    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    
}
int main(){
    Node * head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        node_input(head, tail, val);
    }
    
    print_sorted_linked_list(head);
    return 0;
}