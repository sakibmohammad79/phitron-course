#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
    
        set<int> seen;
        int answer = n;
        
        for (int i = n - 1; i >= 0; i--) {
            if (seen.count(a[i])) {
                answer = i + 1;
                break;
            }
            seen.insert(a[i]);
        }
        
        if (seen.size() == n) {
            answer = 0;
        }
        
        cout << answer << "\n";
    }
    
    return 0;
}