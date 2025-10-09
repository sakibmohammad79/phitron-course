#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin >> n;
    long long int sum = 0;
    for(int i = 1; i<=n; i++){
        sum+=i;
    }

    long long int valueSum = 0;
    long long int value[n-1];
    for(long long int i = 0; i<n-1; i++){
        cin >> value[i];
        valueSum += value[i];
    }


    cout << sum - valueSum << endl;
    return 0;
}