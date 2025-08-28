#include <iostream>
using namespace std;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    string num;
    cin >> num;

    int digitX = num[X - 1] - '0';  
    int digitY = num[Y - 1] - '0';

    bool isDivisible = false;

    if (digitX != 0 && digitY % digitX == 0) {
        isDivisible = true;
    }
    if (digitY != 0 && digitX % digitY == 0) {
        isDivisible = true;
    }

    if (isDivisible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
