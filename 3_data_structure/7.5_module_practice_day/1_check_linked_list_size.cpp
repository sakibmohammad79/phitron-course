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

int get_size(Node * head){
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}

int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

  
    int val;
    while (cin >> val && val != -1)
    {
        node_input(head1, tail1, val);
    }

    while (cin >> val && val != -1)
    {
        node_input(head2, tail2, val);
    }
    
    int size1 = get_size(head1);
    int size2 = get_size(head2);
    
    if(size1 == size2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}