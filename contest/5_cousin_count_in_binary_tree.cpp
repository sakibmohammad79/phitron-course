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
    cin >> val;
    if(val == -1) return NULL; 
    
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();
        int left, right; 
        cin >> left >> right;
        
        if(left != -1){
            Node* leftRoot = new Node(left);
            p->left = leftRoot;
            q.push(leftRoot);
        }
        if(right != -1){
            Node* rightRoot = new Node(right);
            p->right = rightRoot;
            q.push(rightRoot);
        }
    }
    
    return root;  
}

void find_cousins(Node* root) {
    if (!root) return;
    
    queue<pair<Node*, Node*>> q; 
    q.push({root, nullptr});
    
    while (!q.empty()) {
        int level_size = q.size();
        vector<pair<Node*, Node*>> current_level;
        
        for (int i = 0; i < level_size; i++) {
            auto curr = q.front();
            q.pop();
            Node* node = curr.first;
            Node* parent = curr.second;
            
            current_level.push_back({node, parent});
            
            if (node->left) q.push({node->left, node});
            if (node->right) q.push({node->right, node});
        }
        
        for (int i = 0; i < current_level.size(); i++) {
            Node* current_node = current_level[i].first;
            Node* current_parent = current_level[i].second;
            
            int cousin_count = 0;
            
            for (int j = 0; j < current_level.size(); j++) {
                if (i != j) { 
                    Node* other_parent = current_level[j].second;
                  
                    if (current_parent != other_parent) {
                        cousin_count++;
                    }
                }
            }
            current_node->val = cousin_count;
        }
    }
}

void print_level_order(Node* root) {
    if (!root) return;
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        
        cout << current->val << " ";
        
        if (current->left) q.push(current->left);
        if (current->right) q.push(current->right);
    }
}

int main(){
    Node* root = input_tree_node();
    find_cousins(root);
    print_level_order(root);
    
    return 0;
}