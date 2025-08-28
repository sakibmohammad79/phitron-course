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

bool insert_at_any_pos(Node* &head, Node* &tail, int index, int val){
   
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


void print_linked_list_forward(Node * head){
    if(head == NULL){
        return;
    }
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
    
}
void print_linked_list_backword(Node * tail){
    if(tail == NULL){
        return;
    }
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int t;
    cin >> t;
    while (t--)
    {
        int index, value;
        cin >> index >> value;
        bool isInsert = insert_at_any_pos(head, tail, index, value);
        if(isInsert){
            print_linked_list_forward(head);
    
            print_linked_list_backword(tail);
        }
        else{
            cout << "Invalid" << endl;
        }
    }
    
    
    return 0;
}