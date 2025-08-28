#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int digit[n];
    int maxValue = INT_MIN;
    for(int i = 0; i<n; i++){
        cin>>digit[i];
        maxValue = max(maxValue, digit[i]);
    }
    cout << maxValue;
    return 0;
}