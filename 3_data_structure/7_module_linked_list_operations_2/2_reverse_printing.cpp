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
void input_node(Node* &head, Node* &tail, int val){

    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    
    tail->next = newNode;
    tail = newNode;
    
}
void print_linked_list_reverse(Node * temp){
    if(temp == NULL){
        return;
    }
    print_linked_list_reverse(temp->next);
    cout << temp->val << " ";
    
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    while (true)
    {
        int val;
        cin >> val ;
        if(val == -1 ){
            break;
        }
        input_node(head, tail, val);
    }
    
    print_linked_list_reverse(head);

    return 0;
}