#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        bool possible = true;
        bool canSwap = true; // এখন পর্যন্ত a==b আছে কি না

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                if (!canSwap) {
                    possible = false;
                    break;
                }
            }
            // prefix এ a==b হলে swap করা সম্ভব
            if (a[i] != b[i]) canSwap = false;
            if (a[i] == b[i] && a[i] == '1') canSwap = true;
        }

        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0;
}
