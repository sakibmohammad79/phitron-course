#include<bits/stdc++.h>
using namespace std;
void input_heap(vector<int> &v, int val){
    v.push_back(val);
    int current_idx = v.size() -1;
    while (current_idx != 0)
    {
        int parent_idx = (current_idx - 1)/2;
        if(v[parent_idx] > v[current_idx]){
            swap(v[parent_idx], v[current_idx]);
            current_idx = parent_idx;
        }
        else 
            break;
    }
    
}

void delete_max_heap(vector<int> &v){
    v[0] = v.back();
    v.pop_back();

    int current_idx = 0;
    while (true)
    {
        int left_idx = (current_idx * 2) + 1;
        int right_idx = (current_idx * 2) + 2;

        int left_val = INT_MIN; int right_val = INT_MIN;

        if(left_idx < v.size())
            left_val = v[left_idx];
        if(right_idx < v.size())
            right_val = v[right_idx];
    
        if(v[left_idx] <= v[right_idx] && v[left_idx] < v[current_idx]){
            swap(v[left_idx], v[current_idx]);
            current_idx = left_idx;
        }
        else if(v[right_idx] < v[left_idx] && v[right_idx] < v[current_idx]){
            swap(v[right_idx], v[current_idx]);
            current_idx = right_idx;
        }
        else
            break;
    }  
}

void print_heap(vector<int> v){
    for(int val : v)
        cout << val << " ";
}
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i<n; i++){
        int val; cin >> val;
        input_heap(v, val);
    }
    print_heap(v); 
    cout << endl;
    delete_max_heap(v);
    print_heap(v);
    return 0;
}