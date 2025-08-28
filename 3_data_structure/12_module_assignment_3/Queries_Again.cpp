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
int get_size(Node* head){
    if(head == NULL){
        return 0;
    }
    int size = 0;
    while (head != NULL)
    {
        size++;
        head = head->next;
    }
    return size;
}
bool insert_node(Node* &head, Node* &tail, int index,  int val){
   
    if(index < 0 || index > get_size(head)){
        return false;
    }

    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return true;
    }

    if(index == 0){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        if(head->next == NULL){
            tail = head;
        }
        return true;
    }

    Node* temp = head;
    for(int i = 1; i<index; i++){
        if(temp == NULL){
            return false;
        }
        temp = temp->next;
    }

    newNode->next = temp->next;
    if(temp->next != NULL){
        temp->next->prev = newNode;
    }
    else{
        tail = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return true;
}
void print_list_forward(Node* head){
    if(head == NULL){
        return;
    }
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void print_list_backward(Node* tail){
    if(tail == NULL){
        return;
    }
    cout << "R -> ";
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    Node* head = NULL;
    Node* tail = NULL;
    while (n--)
    {
        int index, value;
        cin >> index >> value;
        bool isInsert = insert_node(head, tail, index,  value);
        if(isInsert){
            print_list_forward(head);
            print_list_backward(tail);
        }
        else{
            cout << "Invalid" << endl;
        }
    }
    
    return 0;
}