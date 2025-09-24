// #include <bits/stdc++.h>
// using namespace std;

// vector<int> dpLeapy, dpJumpster;

// bool canLeapy(int n) {
//     if (n == 0) return true;
//     if (n < 0) return false;
//     if (dpLeapy[n] != -1) return dpLeapy[n];
//     return dpLeapy[n] = (canLeapy(n - 3) || canLeapy(n - 4));
// }

// bool canJumpster(int n) {
//     if (n == 0) return true;
//     if (n < 0) return false;
//     if (dpJumpster[n] != -1) return dpJumpster[n];
//     return dpJumpster[n] = (canJumpster(n - 3) || canJumpster(n - 5));
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;

//         dpLeapy.assign(n + 1, -1);
//         dpJumpster.assign(n + 1, -1);

//         bool leapy = canLeapy(n);
//         bool jumpster = canJumpster(n);

//         if (leapy && jumpster) cout << "Both\n";
//         else if (leapy) cout << "Leapy\n";
//         else if (jumpster) cout << "Jumpster\n";
//         else cout << "None\n";
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

bool canLeapy(int n) {
    if (n == 1 || n == 2 || n == 5) return false;
    return true;
}

bool canJumpster(int n) {
    if (n == 1 || n == 2 || n == 4 || n == 7) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        bool leapy = canLeapy(n);
        bool jumpster = canJumpster(n);

        if (leapy && jumpster) cout << "Both\n";
        else if (leapy) cout << "Leapy\n";
        else if (jumpster) cout << "Jumpster\n";
        else cout << "None\n";
    }
    return 0;
}
