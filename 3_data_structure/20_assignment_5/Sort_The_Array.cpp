#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& a) {
    for (int i = 1; i < a.size(); i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        // Input array
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Step 1: Check if already sorted
        if (isSorted(a)) {
            cout << 0 << endl;
            continue;
        }

        // Step 2: Count blocks of '1's that become '0's
        int blocks = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] == 0 && a[i - 1] == 1) {
                blocks++;
            }
        }

        // If starts with 0 and there is 1 after it
        if (a[0] == 1) {
            blocks++;
        }

        // Step 3: Answer is (blocks + 1) / 2
        cout << (blocks + 1) / 2 << endl;
    }

    return 0;
}