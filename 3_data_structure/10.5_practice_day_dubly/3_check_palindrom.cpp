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
bool check_palindrom(Node* &head, Node* &tail){
    bool isPalindrom = true;
    for(Node* i = head, *j = tail; i != j && i->prev != j; i = i->next, j= j->prev){
        if(i->val != j->val){
            isPalindrom = false;
            break;
        }
    }
    return isPalindrom;
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        input_node(head, tail, val);
    }
    
    bool palindrom = check_palindrom(head, tail);
    if(palindrom){
        cout << "Palindrom";
    }
    else{
        cout << "Not Palindrom";
    }
    return 0;
}