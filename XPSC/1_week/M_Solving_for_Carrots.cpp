#include <iostream>
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        string temp;
        getline(cin, temp);
    }

    cout << p;
}
