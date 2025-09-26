#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int consicutive = 0;
        int empty = 0;
        for(char c : s){
            if(c == '.'){
                empty++;
                consicutive++;
                if(consicutive == 3){
                    break;
                }
            }
            else{
                consicutive = 0;
            }
        }
        
        if(consicutive == 3){
            cout << 2 << endl;
        }
        else{
            cout << empty << endl;
        }
    }
    
    return 0;
}