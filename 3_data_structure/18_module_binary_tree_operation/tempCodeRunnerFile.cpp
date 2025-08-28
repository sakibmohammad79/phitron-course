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

Node* node_input(){
    int val;
    cin >> val;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();

        int val1, val2;
        if(val1 != -1) {
            Node* node1 = new Node(val1);
            p->left = node1;
        }
        else{
            p->left = NULL;
        }

        if(val2 != -1) {
            Node* node2 = new Node(val2);
            p->right = node2;
        }
        else{
            p->right = NULL;
        };

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
   return root; 
}
void print_tree_levelorder(Node* root){
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
    Node * root = node_input();
    print_tree_levelorder(root);
    return 0;
}