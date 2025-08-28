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
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

void print_max_node(Node* head){
    
    int max = INT_MIN;
    while (head != NULL)
    {
        if(head->val > max){
            max = head->val; 
        }
        head = head->next;
    }

    cout << "Max value is : " << max;
    
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
  
    int val;
    while (cin >> val && val != -1)
    {
        node_input(head, tail, val);
    }

    print_max_node(head);
    
    return 0;
}