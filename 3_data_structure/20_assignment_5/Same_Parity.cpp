#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    cin >> t;

    while (t--) {
        int n;
        cin >> n; 

        int arr[n];
        int even = 0, odd = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 0) {
                even++;  
            } else {
                odd++;   
            }
        }

        if ((even % 2 == 0 && odd % 2 == 0) || (even % 2 == 1 && odd % 2 == 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
