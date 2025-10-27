#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    multiset<int> s;
    for(int i = 1; i<=n; i++){
        int val;
        cin >> val;
        s.insert(val);
    }
    int count = 0;
    for(int i = 1; i<=n; i++){
        auto lowerBound = s.lower_bound(i) ;
        if(lowerBound != s.end()){
            count++;
            s.erase(lowerBound); 
            s.insert(0);
        }
    }
    cout << count;
    return 0;
}