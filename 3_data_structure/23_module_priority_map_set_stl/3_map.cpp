#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mp;
    mp["sakib"] = 1;
    mp["akib"] = 2;
    mp["rakib"] = 3;

    // cout << mp["akib"] << endl;  //2
    // cout << mp["tamim"] << endl; // 0
    if(mp.count("hamim")){
        cout << "Ache" << endl;
    }
    else
        cout << "Nai" << endl;
        
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}