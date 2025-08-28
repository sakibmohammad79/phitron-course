#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    cout << s[0] << endl;
    //access last elemnet
    cout << s[s.size() - 1] << endl;
    //access first element using fn
    cout << s.front() << endl;
    //access last element using fn
    cout << s.back() << endl;
    return 0;
}