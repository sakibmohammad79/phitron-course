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

void find_leaf_node(Node* root, vector<int>& v){
    if(root == NULL){
        return;
    }
    if(!root->left && !root->right){
        v.push_back(root->val);
    }
    find_leaf_node(root->left,v);
    find_leaf_node(root->right,v);
}

int main(){
    Node* root = input_tree_node();
    vector<int> v;
    find_leaf_node(root, v);
    sort(v.begin(), v.end(), greater<int>());

    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    
    return 0;
}