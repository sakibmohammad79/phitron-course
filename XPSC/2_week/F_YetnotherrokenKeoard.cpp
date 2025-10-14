// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         vector<char> st; 
        
//         for (char c : s) {
//             if (c == 'b') {
//                 for (int i = st.size() - 1; i >= 0; i--) {
//                     if (islower(st[i])) {
//                         st.erase(st.begin() + i);
//                         break;
//                     }
//                 }
//             } 
//             else if (c == 'B') {
//                 for (int i = st.size() - 1; i >= 0; i--) {
//                     if (isupper(st[i])) {
//                         st.erase(st.begin() + i);
//                         break;
//                     }
//                 }
//             } 
//             else {
//                 st.push_back(c);
//             }
//         }

//         for (char c : st) cout << c;
//         cout << '\n';
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        vector<pair<int, char>> upper, lower;

        for (int i = 0; i < (int)s.size(); i++) {
            char c = s[i];

            if (c == 'b') {
                if (!lower.empty()) lower.pop_back();
            } 
            else if (c == 'B') {
                if (!upper.empty()) upper.pop_back();
            } 
            else {
                if (islower(c)) lower.push_back({i, c});
                else upper.push_back({i, c});
            }
        }


        vector<pair<int, char>> merged;
        for(auto l : lower){
            merged.push_back({l.first, l.second});
        }
        for(auto u : upper){
            merged.push_back({u.first, u.second});
        }

        sort(merged.begin(), merged.end()); 

        for (auto &p : merged) cout << p.second;
        cout << '\n';
    }

    return 0;
}
