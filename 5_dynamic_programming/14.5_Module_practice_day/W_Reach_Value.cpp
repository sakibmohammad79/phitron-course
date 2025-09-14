#include<bits/stdc++.h>
using namespace std;

bool canReach(long long int current, long long int n){
    if(current == n)
        return true;
    if(current > n)
        return false;
    return canReach(current * 10, n) || canReach(current * 20, n);
}

int main(){
    int t; cin >> t;
    while (t--)
    {
        long long int n; cin >> n;
        bool isReach = canReach(1, n);
        if(isReach){
            cout << "YES" << endl;
        }
        else 
            cout << "NO" << endl;
    }
    
    return 0;
}