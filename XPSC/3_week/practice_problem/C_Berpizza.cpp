// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t; cin >> t;
//     set<pair<int, int>> s;
//     multiset<pair<int,int>> ms;
//     vector<int> v;
//     int index = 1;
//     while (t--)
//     {
//         int type; cin >> type;
//         if(type == 1){
//             int money; cin >> money;
//             s.insert({index, money});
//             ms.insert({money, -index});
//             index++;
//         }
//         else if(type == 2){
//             int pos = s.begin()->first; int money = s.begin()->second;
//             v.push_back(pos);
//             s.erase(s.begin());
//             ms.erase({money, -pos});
//         }
//         else{
//             int pos = -ms.rbegin()->second; int money = ms.rbegin()->first;
//             v.push_back(pos);
//             ms.erase({--ms.end()});
//             s.erase({pos, money});
//         }
//     }
//     for(auto val : v){
//         cout << val << " ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int index = 1;
    set<pair<int,int>> s;               // (index , money)
    multiset<pair<int,int>> ms;         // (money, -index)
    vector<int> v;

    while (t--) {
        int type;
        cin >> type;

        if(type == 1){
            int money;
            cin >> money;
            s.insert({index, money});
            ms.insert({money, -index});
            index++;
        }
        else if(type == 2){
            auto it = s.begin();
            int pos = it->first, money = it->second;
            v.push_back(pos);

            ms.erase(ms.find({money, -pos}));
            s.erase(it);
        }
        else{
            auto it = prev(ms.end());
            int money = it->first, pos = -it->second;
            v.push_back(pos);

            s.erase(s.find({pos, money}));
            ms.erase(it);
        }
    }

    for(auto x : v) cout << x << " ";
    return 0;
}
