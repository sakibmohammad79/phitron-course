#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n ; cin >> n;
        string b; cin >> b;
        
        set<char> unique;
        for(auto c : b){
            unique.insert(c);
        }

        vector<char> v(unique.begin(), unique.end());
        unordered_map<char, char> mp;

        int sz = v.size();
        for(int i = 0; i<sz; i++){
            mp[v[i]] = v[sz - i - 1];
            mp[v[sz - i - 1]] = v[i];
        }

        for(char c : b){
            cout << mp[c];
        }
        cout << endl;
    }
    
    return 0;
}