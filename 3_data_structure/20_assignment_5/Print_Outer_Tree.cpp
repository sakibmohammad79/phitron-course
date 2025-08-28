#include <bits/stdc++.h>
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

bool isLeaf(Node* root){
    return (root->left == NULL && root->right == NULL);
}

void printLeftBoundary(Node* root){
    if(root == NULL){
        return;
    }
    if(root->left){
        printLeftBoundary(root->left);
    }
    else {
        printLeftBoundary(root->right);
    }
    cout << root->val <<  " ";
}



void printRightBoundary(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->val <<  " ";
    if(root->right){
        printRightBoundary(root->right);
    }
    else {
        printRightBoundary(root->left);
    }
}

int main(){
    Node* root = input_tree_node();
    printLeftBoundary(root->left);
    cout << root->val << " ";
    printRightBoundary(root->right);
    return 0;
}
