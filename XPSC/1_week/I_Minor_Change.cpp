#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string t; cin >> t;
    int count = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i] != t[i]){
            count++;
        }
    }
    cout << count;
    return 0;
}