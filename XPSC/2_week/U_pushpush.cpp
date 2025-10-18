// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin >> n;
//     vector<int> v;
//     for(int i = 0; i<n; i++) {
//         int val; cin >> val;
//         v.push_back(val);
//         reverse(v.begin(), v.end());
//     }

//     for(int num : v){
//         cout << num << " ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    deque<int> b;
   
    for (int i = 0; i < n; i++) {
        if ((n-i) % 2 == 0)
            b.push_front(a[i]); 
        else
            b.push_back(a[i]); 
        
    }

    reverse(b.begin(), b.end());

    for (int x : b) cout << x << " ";
    cout << "\n";
    return 0;
}
