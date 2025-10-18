#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
 
    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int oddCount = 0;
  
    
    for (auto p : freq) {
        if (p.second % 2 == 1) {
            oddCount++;
         
        }
    }
    
    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    
 
    string firstHalf = "";
    string middle = "";
    
    for (auto p : freq) {
        char c = p.first;
        int count = p.second;

        for (int i = 0; i < count / 2; i++) {
            firstHalf += c;
        }

        if (count % 2 == 1) {
            middle += c;
        }
    }
    
    string secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());
    
    cout << firstHalf + middle + secondHalf << "\n";
    
    return 0;
}