// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         long long sum = 0;
//         int mx = 0;
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             sum += a[i];
//             mx = max(mx, a[i]);
//         }
//         long long ans = max(mx, (sum + 1) / 2); // ceiling division
//         cout << ans << "";
//     }
//     return 0;
// }