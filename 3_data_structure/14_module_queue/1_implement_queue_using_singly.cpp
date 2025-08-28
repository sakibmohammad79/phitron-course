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
class MyQueue {
    public: 
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;                                   
    void push(int val){
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;     
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void pop(){
        sz--;
        Node* deleteNode = head;
        head = deleteNode->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
        }
    }
    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        return head == NULL;
    }
};
int main(){
    MyQueue q;
    int n; cin >> n;

    while (n--)
    {
        int val; cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    
    return 0;
}