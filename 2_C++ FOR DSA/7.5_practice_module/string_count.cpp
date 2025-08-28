#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, a;
    getline(cin, s); 
    cin >> a;        

    stringstream stream(s);
    string word;

    int count = 0;
    while (stream >> word) {
        if (word == a) {
            count++;
        }
    }

    cout << count;
    return 0;
}
