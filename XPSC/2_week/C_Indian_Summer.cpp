#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set<pair<string, string>> st;
    for(int i = 0; i<n; i++){
        string str1, str2;
        cin >> str1 >> str2;
        st.insert({str1, str2});
    }
    cout << st.size() << endl;
    return 0;
}