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
void insert_node(Node* &head, Node* &tail, int val){
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
bool check_palindrom(Node* head, Node* tail){
    if(head == NULL || tail == NULL){
        return false;
    }
    bool isPalindrom = true;
   
    for (Node* i = head, *j = tail; i != j && i->prev != j; i = i->next, j=j->prev)
    {
        if(i->val != j->val){
            isPalindrom = false;
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
        insert_node(head, tail, val);
    }

    bool isPlaindrom = check_palindrom(head, tail);
    if(isPlaindrom){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    return 0;
}