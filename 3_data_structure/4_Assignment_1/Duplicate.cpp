#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    bool duplicateFound = false;
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    for(int i = 0; i<n; i++){
        for (int j = i+1; j < n; j++)
        {
            if(v[i] == v[j]){
                duplicateFound = true;
                break;;
            }
        }
        if(duplicateFound){
            break;
        }
    }
    if(duplicateFound){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}