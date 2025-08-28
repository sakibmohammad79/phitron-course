#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    cout<< s<< endl;
    stringstream stream(s);
    string word;
    // stream >> word;
    // cout<<word <<endl;
    // stream >> word;
    // cout<<word <<endl;
    // stream >> word;
    // cout<<word <<endl;
    while (stream >> word)
    {
        cout << word << endl;
    }
    
    return 0;
}