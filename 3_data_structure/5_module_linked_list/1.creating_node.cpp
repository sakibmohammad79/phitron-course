#include<bits/stdc++.h>
using namespace std;
class Node {
    public: 
        int val;
        Node* next;
    
        //constructor
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

int main(){
    // Node a, b, c;
    // a.val = 10;
    // b.val = 20;
    // c.val = 30;
    // a.next = &b;
    // b.next = &c;
    // c.next = NULL;

    Node a(10), b(20), c(60);
    a.next = &b;
    b.next = &c;

    // cout << a.val << " " << b.val << " " << c.val;

    cout << a.val << endl;
    cout << a.next->val << endl; //(*a.next).val => a.next->val
    cout << a.next->next->val << endl; 
    return 0;
}