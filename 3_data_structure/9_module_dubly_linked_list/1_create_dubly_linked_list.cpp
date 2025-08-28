#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node* next;
        Node* pre;

        Node(int val){
            this->val = val;
            this->pre = NULL;
            this->next = NULL;
        }
};

void print_linked_list_forward(Node* head){
    Node * tamp = head;
    while (tamp != NULL)
    {
        cout << tamp->val << " ";
        tamp = tamp->next;
    }
    

}
void print_linked_list_backward(Node* tail){
     Node * tamp = tail;
    while (tamp != NULL)
    {
        cout << tamp->val << " ";
        tamp = tamp->pre;
    }
    

}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->pre = head;
    a->next = tail;
    tail->pre = a;

    print_linked_list_forward(head);
    print_linked_list_backward(tail);
    
    return 0;
}