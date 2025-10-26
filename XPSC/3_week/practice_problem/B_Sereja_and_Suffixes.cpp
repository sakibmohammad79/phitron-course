#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t; 
    cin >> n >> t;
    vector<int> a(n+1);
    for(int i = 1; i<=n; i++)
        cin >> a[i];
    vector<int> ans(n+1);
    set<int> s;
    for(int i = n; i>0 ; i--){
        s.insert(a[i]);
        ans[i] = (s.size());
    }

    while (t--)
    {
        int pos; cin >> pos;
        cout << ans[pos] << endl;
    }
    
    return 0;
}