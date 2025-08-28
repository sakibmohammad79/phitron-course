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

void delete_at_any_position(Node* &head, int index){
    if(head == NULL || index <= 0){
        return;
    }
    Node* temp = head;
    for(int i = 1; i<index; i++){
        if(temp->next == NULL){
            return;
        }
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    deleteNode->next->prev = temp;
    delete deleteNode;
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
    delete_at_any_position(head, 1);

  
    print_linked_list(head);

    return 0;
}