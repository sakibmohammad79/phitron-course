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

class MyStack {
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
        newNode->prev = tail;
        tail = newNode; 
    }
    void pop(){
        if(head == NULL){
            return;
        }
        sz--;
        Node* deleteNode = tail;
        tail = deleteNode->prev;
        delete deleteNode;
        if(tail == NULL){
            head == NULL;
            return;
        }
        tail->next == NULL;
    }
    int top(){
        return tail->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        return head == NULL;
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
        newNode->prev = tail;
        tail = newNode; 
    }
    void pop(){
        if(head == NULL){
            return;
        }
        sz--;
        Node* deleteNode = head;
        head = deleteNode->next;
        delete deleteNode;
        if(head == NULL){
            tail == NULL;
            return;
        }
        head->prev == NULL;
    }
    int front(){
        return head->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        return head == NULL;
    }
};

int main(){
    MyStack st;
    MyQueue q;

    int n, n1; cin >> n >> n1;
    while (n--)
    {
        int val; cin >> val;
        st.push(val);
    }
    while (n1--)
    {
        int val; cin >> val;
        q.push(val);
    }

    if(st.size() != q.size()){
         cout << "NO";
         return 0;
    }

     bool isSame = true;

    while (!st.empty() && !q.empty())
    {
        if(st.top() != q.front()){
            isSame = false;
            break;
        }
        st.pop(); q.pop();
    }

    if(isSame)
        cout << "YES";
    else
        cout << "NO";
        
    return 0;
}