// #include <bits/stdc++.h>
// using namespace std;

// bool canReach(int current, int n){
//     if(current == n) return true;     
//     if(current > n) return false;      
//     return canReach(current + 3, n) || canReach(current * 2, n);  
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int num;
//         cin >> num;
//         bool result = canReach(1, num);
//         if(result)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// unordered_map<int, bool> dp; 

// bool canReach(int current, int n) {
//     if(current == n) return true;
//     if(current > n) return false;

//     if(dp.count(current)) return dp[current];

//     bool reach = canReach(current + 3, n) || canReach(current * 2, n);
//     return dp[current] = reach;
// }

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int num;
//         cin >> num;
//         dp.clear();
//         if(canReach(1, num))
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

bool canReach(int n) {
    vector<bool> dp(n + 1);
    dp[1] = true; 
    for(int i = 1; i <= n; i++) {
        if(!dp[i]) continue; 
        if(i + 3 <= n) dp[i + 3] = true;
        if(i * 2 <= n) dp[i * 2] = true;
    }
    return dp[n];
}

int main() {
    int t, num;
    cin >> t;
    while(t--) {
        cin >> num;
        if(canReach(num))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

