#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, k;
    cin >> x >> y >> k;
    int sub = abs(x - y);
    
    if (sub <= k) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
