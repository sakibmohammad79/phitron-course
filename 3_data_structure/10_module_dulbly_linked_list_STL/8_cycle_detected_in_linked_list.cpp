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
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b;

    Node * slow = head;
    Node * fast = head;
    int isCycle = false;
    while (fast != NULL && fast->next != NULL)
    {
        if(slow == fast){
            isCycle = true;
            break;
        }
        slow = slow->next;
        fast = fast->next->next;
    }


    if(isCycle){
        cout << "Cycle Detected";
    }
    else{
        cout << "No Cycle";
    }
    return 0;
}