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
bool search_node(Node* root, int search_val){
    if(root == NULL) return false;
    if(root->val == search_val) return true;
    if(root->val > search_val)
        return search_node(root->left, search_val);
    else 
        return search_node(root->right, search_val);
}
int main(){
    Node* root = input_tree();
    int search_val; cin >> search_val;
    if(search_node(root, search_val))
        cout << "Found" << endl;
    else       
        cout << "Not Found" << endl;
    return 0;
}