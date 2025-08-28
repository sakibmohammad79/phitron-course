#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream stream(s);
    string word;
    bool isTrue = false;
    while (stream >> word)
    {
        if(word == "Jessica"){
            isTrue = true;
        }
    }
    
    if(isTrue){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}