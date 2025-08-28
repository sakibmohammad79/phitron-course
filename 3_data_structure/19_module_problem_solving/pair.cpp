#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p;
    p = make_pair(10, 20);
    cout << p.first << " " << p.second << endl;

    pair<string, int> p1;
    // p1 = make_pair("Hi", 20);
    p1 = {"Hi", 20};
    cout << p1.first << " " << p1.second << endl;

    
    //input
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0 ; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    for(int i = 0; i<n; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    
    return 0;
}