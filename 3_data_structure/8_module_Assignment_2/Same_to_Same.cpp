#include<bits/stdc++.h>
using namespace std;
class Node {
    public: 
    int val;
    Node* next;
    Node(int val){
        this->next = NULL;
        this->val = val;
    }
};

void node_input(Node* &head, Node* &tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;

}

int get_size(Node* head){
    
    
    int size = 0;
    while (head!=NULL)
    {
        size++;
        head = head->next;
    }
    return size;
}

int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int val;
    while (cin>>val && val != -1)
    {
         node_input(head1, tail1, val);
    }
    while (cin>>val && val != -1)
    {
        node_input(head2, tail2, val);
    }
    int size1 = get_size(head1);
    int size2 = get_size(head2);

    if(size1 != size2){
        cout << "NO";
        return 0;
    }

    while (head1 != NULL && head2 != NULL)
    {
        if(head1->val != head2->val){
            cout << "NO";
            return 0;
        }
        head1 = head1->next;
        head2 = head2->next;
        
    }
    cout << "YES";
    
    return 0;
}