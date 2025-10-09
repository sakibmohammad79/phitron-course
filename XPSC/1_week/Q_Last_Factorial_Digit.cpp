#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        if(num >= 5){
            cout << 0 << endl;
        }
        else{
            int fact = 1;
            for(int i = 1; i<=num; i++){
                fact *= i;
            } 
            cout << fact % 10 << endl;  
        }
    }
    return 0;
}