#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v1(n), v2(n), v3(n);
        for(int i = 0; i < n; i++) cin >> v1[i]; 
        for(int i = 0; i < n; i++) cin >> v2[i]; 
        for(int i = 0; i < n; i++) cin >> v3[i]; 

        // frequency map
        map<string,int> freq;
        for(auto w: v1) freq[w]++;
        for(auto w: v2) freq[w]++;
        for(auto w: v3) freq[w]++;

        int score1=0, score2=0, score3=0;

        // calculate score for player 1
        for(auto &w: v1) {
            if(freq[w]==1) score1 += 3;
            else if(freq[w]==2) score1 += 1;
        }

        // calculate score for player 2
        for(auto &w: v2) {
            if(freq[w]==1) score2 += 3;
            else if(freq[w]==2) score2 += 1;
        }

        // calculate score for player 3
        for(auto &w: v3) {
            if(freq[w]==1) score3 += 3;
            else if(freq[w]==2) score3 += 1;
        }

        cout << score1 << " " << score2 << " " << score3 << "\n";
    }
    return 0;
}
