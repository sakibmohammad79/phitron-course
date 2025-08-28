#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "sakib sakib";
    string s1 = "mohammad";
    //string concatinate
    // string fullName = s += s1;
    // cout << fullName << endl;

    //also use append fn
    // string fullName = s.append(s1);
    // cout << fullName << endl;

    //add charachter in the back
    // s.push_back('a');
    // cout << s << endl;

    //remove last charachter
    // s.pop_back();
    // cout << s << endl;

    //string assign another string
    // s.assign("sohan");
    // cout << s << endl;

    //string earse fn
    // s.erase(2, 1);
    // cout << s << endl;

    //string replace fn
    // s.replace(5, 1, "sakib");
    // cout << s << endl;

    //insert string
    s.insert(6, "sakib");
    cout << s << endl;
    return 0;
}