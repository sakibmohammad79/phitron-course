#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;

    // cin >> s; //not work when stay space; //ignore new line
    // cin.getline(s, 100) //not work for string data type

    //we use 
    cin.ignore(); //ignore new line
    getline(cin, s);  //it's work with space also;
    cout << s << endl;
    return 0;
}