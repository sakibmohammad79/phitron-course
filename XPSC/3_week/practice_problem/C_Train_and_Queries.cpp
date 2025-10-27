#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--)
    {
        int n, q; cin >> n >> q;
        map<int, set<int>> ml;
        for(int i = 0; i<n; i++){
            int val ; cin >> val;
            ml[val].insert(i);
        }
        while (q--)
        {
            int l, r; cin >> l >> r;
            if(ml.find(l) == ml.end() || ml.find(r) == ml.end()){
                cout << "NO\n";
            }
            else{
                if(*ml[l].begin()<*ml[r].rbegin()){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
        }
    }
    return 0;
}