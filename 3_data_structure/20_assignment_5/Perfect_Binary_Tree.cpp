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

int node_count = 1;

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
            node_count++;
            Node* myLeft = new Node(val1);
            parent->left = myLeft;
            q.push(myLeft);
        }
        if(val2 != -1){
            node_count++;
            Node* MyRight = new Node(val2);
            parent->right = MyRight;
            q.push(MyRight);
        }
    }
    return root;
}

int find_max_depth(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = find_max_depth(root->left);
    int r = find_max_depth(root->right);
    return max(l,r)+1;
}

int main(){
    Node* root = input_tree_node();
    int max_depth = find_max_depth(root);
    int sum_of_node = pow(2,max_depth) - 1;

    if(node_count == sum_of_node) 
        cout << "YES";
    else
        cout << "NO";

    return 0;
}