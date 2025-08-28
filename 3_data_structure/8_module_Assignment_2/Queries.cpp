#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node * next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }

};
void insert_at_head(Node* &head, Node * &tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node* &head, Node * &tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_at_any_pos(Node * &head, Node * &tail,  int index){
    if(head == NULL){
        return;
    }
    if(index == 0){                 
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL) {
            tail = NULL;
        }  
        return;
    }

    Node * temp = head;
    for(int i = 1; i < index; i++){
        if(temp == NULL || temp->next == NULL){
            return; 
        }
        temp = temp->next;
    }

    if(temp == NULL || temp->next == NULL){
        return; 
    }

    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    if(deleteNode == tail){
        tail = temp;
    }        
    delete deleteNode;
}

void print_linked_list(Node * head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
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
        if(index == 0){
            insert_at_head(head, tail, value);
        }
        else if(index == 1){
            insert_at_tail(head, tail, value);
        }
        else
        {
            delete_at_any_pos(head, tail,  value);
        }
        print_linked_list(head);
    }

    
    return 0;
}