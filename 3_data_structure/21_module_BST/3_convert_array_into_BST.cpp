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
Node* convert_array_to_bst(int arr[], int l_idx, int r_idx){
    if(l_idx>r_idx) return NULL;
    int mid = (l_idx+r_idx)/2;
    Node* root = new Node(arr[mid]);
    Node* leftRoot = convert_array_to_bst(arr, l_idx, mid-1);
    Node* rightRoot = convert_array_to_bst(arr, mid+1, r_idx);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
void print_tree(Node* root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();
        cout << p->val << " ";
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    Node* root = convert_array_to_bst(arr, 0, n-1);
    print_tree(root);
    return 0;
}