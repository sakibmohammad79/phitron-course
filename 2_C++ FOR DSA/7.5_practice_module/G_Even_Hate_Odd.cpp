#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int odd_count = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 != 0)
                odd_count++;
        }

        if (n % 2 != 0) {
            cout << -1 << endl;  // impossible if array length is odd
        } else {
            int need = n / 2;
            // How many need to be changed to make odd_count == even_count
            cout << abs(odd_count - need) << endl;
        }
    }
    return 0;
}
