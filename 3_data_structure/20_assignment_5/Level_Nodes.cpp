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

void print_level_node(Node* root, int n){
    if(root == NULL){
        return;
    }
    queue<pair<Node*,int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node*, int> p = q.front();
        q.pop();

        Node* node = p.first;
        int level = p.second;

        if(level == n){
            cout << node->val << " ";
        }

        if(node->left) q.push({node->left, level + 1});
        if(node->right) q.push({node->right, level + 1});
    }
    
}

int max_height(Node* root){
    if (root == NULL)
        return 0;
    int left = max_height(root->left);
    int right = max_height(root->right);
    return max(left, right) + 1;
}

int main(){
    Node* root = input_tree_node();
    int n; cin >> n;
    int height = max_height(root);
    if (n >= height) {
        cout << "Invalid" << endl;
    } else {
        print_level_node(root, n);
    }
    return 0;
}