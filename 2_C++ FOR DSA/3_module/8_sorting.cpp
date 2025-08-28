#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int digit[n];

    for(int i = 0; i<n; i++){
        cin>>digit[i];
    }
    //sorting
    // sort(digit, digit+n); // acs

    sort(digit , digit + n, greater<int>());



    for(int i = 0; i<n; i++){
        cout<<digit[i] << " ";
    }
    return 0;
}