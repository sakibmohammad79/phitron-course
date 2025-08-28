#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<int, int> mp;
    for(int i = 0; i<n; i++){
        int val; cin >> val;
        mp[val]++;
    }
    int t; cin >> t;
    while (t--)
    {
        int command; cin >> command;
        if(command == 0){
            int val; cin >> val;
            mp[val]++;
            cout << mp.begin()->first << endl;
        }
        else if(command == 1){
            if(mp.empty())
                cout << "Empty" << endl;
            else
                cout << mp.begin()->first << endl;
        }
        else if(command == 2){
            if(mp.empty())
                cout << "Empty" << endl;
            else{
                auto it = mp.begin();
                if(it->second == 1)
                    mp.erase(it);
                else
                    it->second--;
                if(mp.empty())
                    cout << "Empty" << endl;
                else 
                    cout << mp.begin()->first << endl;
            }
        }
    }
    return 0;
}