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
            sz--;
            Node* deleteNode = tail;
            tail = deleteNode->prev;
            delete deleteNode;
            if(tail == NULL){
                head = NULL;
                return;
            }
            tail->next = NULL;
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
int main(){
    MyStack st;
    MyStack st2;
    int n; cin >> n;
    while (n--)
    {
        int val; cin >> val;
        st.push(val);
    }
    int n2; cin>> n2;
    while (n2--)
    {
        int val; cin >> val;
        st2.push(val);
    }

    if(st.size() != st2.size()){
        cout << "NO";
        return 0;
    }
    bool isSame = true;
    while (!st.empty() && !st.empty())
    {
        if(st.top() != st2.top()){
            isSame = false;
            break;
        }
        st.pop();
        st2.pop();
    }
    
    if(isSame){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    return 0;
}