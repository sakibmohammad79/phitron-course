#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int freq[26] = {0};
    for(char c : s){
        freq[c-'a']++;
    }
    
    int charValue = 0;
    bool isFound = false;

    for(int num : freq){
        if(num == 0){
            isFound = true;
            break;
        }
        charValue++;
    }

    if(isFound)
       cout << char(charValue + 'a');
    else
        cout << "None";
    
    return 0;
}