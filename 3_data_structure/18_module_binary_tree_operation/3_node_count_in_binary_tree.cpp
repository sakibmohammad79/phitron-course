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
Node* tree_node_input(){
    int val; cin >> val;
    if(val == -1) return NULL;
    queue<Node*> q;
    Node* root = new Node(val);
    q.push(root);

    while (!q.empty()){
        Node* p = q.front();
        q.pop();

        int l, r; cin >> l >> r;

        if(l != -1){
            Node* myLeft = new Node(l);
            p->left = myLeft;
            q.push(myLeft);
        }

        if(r != -1){
            Node* myRight = new Node(r);
            p->right = myRight;
            q.push(myRight);
        }
    }
    return root;
}

void print_tree_node(Node* root){
    if(root == NULL) {
        cout << "No Tree!";
        return;
    };
    
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

int node_cout(Node* root){
    
    if(root == NULL) return 0;

    int l = node_cout(root->left);
    int r = node_cout(root->right);
    return l+r+1;
}

int main(){
    Node* root = tree_node_input();
    print_tree_node(root);
    cout << endl;
    int nodeCount = node_cout(root);
    cout << nodeCount;
    return 0;
}