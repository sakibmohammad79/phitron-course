#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        char arr[n];
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        int count = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(arr[i] == '1'){
                count++;
            }
            }
            if(arr[i] == '0'){
                count += 1;
            }
            else{
                count -= 1;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}