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


void find_most_frequent_node(Node* root) {
    if (!root) return;
    
    queue<Node*> q;
    q.push(root);

    map<int, int> freq;
    
    while (!q.empty()) {
        Node* p = q.front();
        q.pop();
        
        if (!p->left && !p->right) {
            freq[p->val]++;
        }
        
        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
    int maxFreq = 0;
    int ans = INT_MAX;
    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            ans = it.first;
        } else if (it.second == maxFreq && it.first < ans) {
            ans = it.first;
        }
    }
    cout << ans << endl;
    

}

int main(){
    Node* root = input_tree_node();
    find_most_frequent_node(root);
    
    return 0;
}