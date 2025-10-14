#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n;
        string s;
        cin >> s;
        int left = -1; int right = -1;
        for(int i = 0; i<n; i++){
            if(s[i] == 'B'){
                if(left == -1){
                    left = i;
                }
                    right = i;
            }
        }
        cout << (right-left)+1 << endl;
    }
    return 0;
}