#include<bits/stdc++.h>
using namespace std;
bool cmp (pair<string, int> l, pair<string, int> r) {
    if(l.first < r.first)
        return true;
    else if(l.first > r.first)
        return false;
    else
        return l.second > r.second;
}
int main(){
    int t; cin >> t;
    vector<pair<string, int>> v;
    while (t--)
    {   
        string name; int id;
        cin >> name >> id;
        v.push_back({name, id});
    }
    sort(v.begin(), v.end(), cmp);

    for(pair<string, int> student : v){
        cout << student.first << " " << student.second << endl;
    }
    
    return 0;
}