#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to build a binary tree from level order input
Node* node_input() {
    int val;
    cin >> val;
    if (val == -1) return NULL;  // No tree
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();
        int val1, val2;
        cin >> val1 >> val2;
        // Left child
        if (val1 != -1) {
            Node* node1 = new Node(val1);
            p->left = node1;
            q.push(node1);
        }
        // Right child
        if (val2 != -1) {
            Node* node2 = new Node(val2);
            p->right = node2;
            q.push(node2);
        }
    }

    return root;
}

// Function to print binary tree in level order
void print_tree_levelorder(Node* root) {
    if (root == NULL) {
        cout << "NO Tree" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        cout << p->val << " ";

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }

    cout << endl;
}

int main() {
    Node* root = node_input();
    print_tree_levelorder(root);
    return 0;
}
