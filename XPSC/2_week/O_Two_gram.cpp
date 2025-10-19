#include<bits/stdc++.h>
using namespace std;

bool comparePairsByValue(pair<string, int>& a, pair<string, int>& b) {
    return a.second > b.second; 
}

int main(){
    int n; cin >> n;
    string s; cin >> s;
    map<string, int> m;

    for(int i = 0; i<s.length() -1; i++){
        string key = "";
        key.push_back(s[i]);
        key.push_back(s[i+1]);
        m[key]++;
    }

    vector<pair<string,int>> v;

    for(auto [key, value] : m){
        v.push_back({key, value});
    }

 
    sort(v.begin(), v.end(), comparePairsByValue);

    cout << v[0].first << endl;
    return 0;
}