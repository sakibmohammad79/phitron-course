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
void delete_head_node(Node* &head){
    Node * deleteNode = head;
    head = head->next;
    delete deleteNode;
    return;
}
void print_linked_list(Node * head){
    if(head == NULL){
        cout << "This list is empty!";
        return;
    }
    Node * temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    
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
    
    print_linked_list(head);
    delete_head_node(head);
    print_linked_list(head);

    return 0;
}