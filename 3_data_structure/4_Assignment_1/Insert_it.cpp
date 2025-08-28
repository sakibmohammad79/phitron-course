#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    int q;
    cin >> q;
    vector<int> v1(q);
    for(int i = 0; i<q; i++){
        cin >> v1[i];
    }

    int index; 
    cin >> index;

    v.insert(v.begin() + index, v1.begin(), v1.end());

    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}