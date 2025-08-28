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

Node* input_tree_node(){
    int val;
    cin>> val;
    if(val == -1)
        return NULL;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* parent = q.front();
        q.pop();
        int val1, val2;
        cin >> val1 >> val2;
        if(val1 != -1){
            Node* myLeft = new Node(val1);
            parent->left = myLeft;
            q.push(myLeft);
        }
        if(val2 != -1){
            Node* MyRight = new Node(val2);
            parent->right = MyRight;
            q.push(MyRight);
        }
    }
    return root;
}
int sum = 0;
void sum_without_leaf(Node* root){
    if(root == NULL){
        return;
    }
    if(!root->left && !root->right){
        return;
    }
    sum += root->val;
    sum_without_leaf(root->left);
    sum_without_leaf(root->right);

}

int main(){
    Node* root = input_tree_node();
    sum_without_leaf(root);
    cout << sum;
    return 0;
}