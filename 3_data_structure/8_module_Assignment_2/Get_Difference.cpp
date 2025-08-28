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
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void find_node_val_def(Node* head){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        cout << "0";
        return;
    }
    Node * temp = head;
    int max = INT_MIN;
    while (temp != NULL)
    {
        if(max < temp->val){
            max = temp->val;
        }
        temp = temp->next;
    }
  
    int min = INT_MAX;
    while (head != NULL)
    {
        if(min > head->val){
            min = head->val;
        }
        head = head->next;
    }
    int deference = max - min;
    cout << deference;
}

int main(){
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        node_input(head, tail, val);
    }
    
    find_node_val_def(head);
    return 0;
}