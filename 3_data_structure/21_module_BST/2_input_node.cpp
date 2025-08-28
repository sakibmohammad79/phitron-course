#include<bits/stdc++.h>
using namespace std;
class Node{
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
Node* input_tree(){
    int val; cin >> val;
    if(val == -1) return NULL;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        int val1, val2; cin >> val1 >> val2;
        if(val1 != -1){
            Node* newLeft = new Node(val1);
            p->left = newLeft;
            q.push(newLeft);
        }

        if(val2 != -1){
            Node* newRight = new Node(val2);
            p->right = newRight;
            q.push(newRight);
        }
    }
    return root;
}

void input_node(Node* &root, int val){
    if(root == NULL){
        root = new Node(val);
        return;
    }
    if(val < root->val){
        if(!root->left)
            root->left = new Node(val);
        else
            input_node(root->left,val);
    }
    else{
        if(!root->right)
            root->right = new Node(val);
        else
            input_node(root->right,val);
    }
}

void print_tree(Node* root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();
        cout << p->val << " ";
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    
}

int main(){
    Node* root = input_tree();
    int input_val; cin >> input_val;
    input_node(root, input_val);
    print_tree(root);
    return 0;
}