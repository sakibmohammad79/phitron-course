#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, mex;
    cin >> n >> mex;
    int a[n];
    for(int i = 0; i<n; i++)
        cin >> a[i];

    int operations = 0;

    for(int i = 0; i<mex; i++){
        bool found = false;
        for(int j = 0; j<n; j++){
            if(a[j] == i){
                found = true;
                break;
            }
        }
        if(!found)
             operations++;
    }

    for(int i = 0; i<n; i++){
        if(a[i] == mex)
            operations += 1;
    }

    cout << operations;

    return 0;
}