#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int squareCount = 0;
        for (int i = 1; i <= n; i++) {
            squareCount += i * i;
        }
        cout << squareCount << endl;
    }
    return 0;
}
