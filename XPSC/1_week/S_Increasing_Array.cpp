#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<long long> a(n); 
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long count = 0;
    for(int i = 0; i < n - 1; i++){
        if(a[i] > a[i + 1]){
            count += a[i] - a[i + 1];
            a[i + 1] = a[i]; 
        }
    }
    cout << count << endl;
    return 0;
}
