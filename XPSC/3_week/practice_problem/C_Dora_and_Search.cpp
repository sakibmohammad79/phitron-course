#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int f = 0, e = n - 1;

        multiset<int> ms(v.begin(), v.end());

        while (f < e) {
            int mn = *ms.begin();
            int mx = *prev(ms.end());

            if (v[f] == mn || v[f] == mx) {
                ms.erase(ms.find(v[f]));
                f++;
            } 
            else if (v[e] == mn || v[e] == mx) {
                ms.erase(ms.find(v[e]));
                e--;
            } 
            else {
                break;
            }
        }

        if (f >= e) cout << -1 << "\n";
        else cout << f + 1 << " " << e + 1 << "\n";
    }

    return 0;
}
