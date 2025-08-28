#include<bits/stdc++.h>
using namespace std;
void print_heap_array(vector<int> v){
    for(int val : v)
        cout << val << " ";
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    int insert_val; cin >> insert_val;
    v.push_back(insert_val);
    int current_idx = v.size() - 1;
    while (current_idx != 0)
    {
        int parent_idx = (current_idx - 1) / 2;
        if(v[parent_idx] < v[current_idx]){
            swap(v[parent_idx], v[current_idx]);
            current_idx = parent_idx;
        }
        else
            break;
    }
    print_heap_array(v);
    return 0;
}