#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool isFound = false;
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == 's' && s[i+1] == 's'){
            isFound = true;
            break;
        }
    }
    
    if(isFound)
        cout << "hiss\n";
    else 
        cout << "no hiss\n";
    return 0;
}