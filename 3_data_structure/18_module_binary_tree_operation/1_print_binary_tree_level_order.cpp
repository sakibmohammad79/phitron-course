#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node* left;
        Node* right;

        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void print_level_order(Node* root){
    if(root == NULL){
        cout << "NO Tree" << endl;
        return;
    }
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        //1 ber kore ana
        Node* p = q.front();
        q.pop();
        //2 kaj kora
        cout << p->val << " ";
        //3 children push
        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
    
}

int main(){
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;

    print_level_order(root);

    return 0;
}