#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set<int> s;
    while (n--)
    {
        int val; cin >> val;
        s.insert(val);
    }
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << endl;
    }

    cout << s.count(2) << endl; //1
    if(s.count(4)){
        cout << "Ache!" << endl;
    }
    else {
        cout << "Nai" << endl;
    }
    return 0;
}