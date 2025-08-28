#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    int x;
    for(int i = 1; i<=q; i++){
        bool isHas = false;
        cin >> x;
        for(int j = 0; j<n; j++){
            if(a[j] == x){
                isHas = true;
            }
        }
        if(isHas){
        cout << "found\n";
        }
        else{
        cout << "not found\n";
        }
    }
    
    return 0;
}