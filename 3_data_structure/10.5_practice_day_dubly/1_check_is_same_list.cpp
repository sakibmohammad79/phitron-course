#include<bits/stdc++.h>
using namespace std;
class Node {
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
int get_size(Node* head){
    int size = 0;
    while (head != NULL)
    {
        size++;
        head = head->next;
    }
    return size;
}
bool check_is_same_list(Node* head1, Node* head2){

    if(get_size(head1) != get_size(head2)){
        return false;
    }
   while (head1 != NULL && head2 != NULL)
    {
        if(head1->val != head2->val){
            return false;
        }
        
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}
int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        input_node(head1, tail1, val);
    }
    while (cin >> val && val != -1)
    {
        input_node(head2, tail2, val);
    }
    bool isSameList = check_is_same_list(head1, head2);
    if(isSameList){
        cout << "Same";
    }
    else{
        cout << "Not Same";
    }
    return 0;
}