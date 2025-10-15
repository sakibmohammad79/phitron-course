#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while (n--)
    {
        string pass; cin >> pass;
        int i;
        for(i = 1; i<pass.length(); i++){
            if(pass[i] == pass[i-1]){
                break;
            }
        }
        if(pass[i-1] == 'a'){
            pass.insert(pass.begin()+i, 'b');
        }
        else {
             pass.insert(pass.begin()+i, 'a');
        }
        cout << pass << endl;
    }
    return 0;
}