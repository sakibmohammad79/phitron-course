#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while (t--)
   {
     int n, sum;
    cin >> n >> sum;
    int digit[n];
    for(int i = 0; i<n; i++){
        cin >> digit[i];
    }
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                if (digit[i] + digit[j] + digit[k] == sum) {
                found = true;
                }
            }
        }

    }
    if(found){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

   }
   
    return 0;
}