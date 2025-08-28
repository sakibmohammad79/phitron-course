#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        int totalScreen = ceil(b / 2.0); // screen for large icon
        int usedSpace = b * 4;
        int availableSpace = (totalScreen * 15) - usedSpace; //space for small icon
        if (a <= availableSpace) 
            cout << totalScreen << endl;
        else {
            int remain = a - availableSpace;
            int extraScreen = ceil(remain / 15.0);
            cout << totalScreen + extraScreen << endl;
        }
    }
    return 0;
}
