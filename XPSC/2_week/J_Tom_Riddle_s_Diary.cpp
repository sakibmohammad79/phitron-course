#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    unordered_set<string> unique;
    while (n--)
    {
        string name;
        cin >> name;
        if(unique.count(name) == 0){
            unique.insert(name);
            cout << "NO\n";
        }else
            cout << "YES\n";
    }
    return 0;
}