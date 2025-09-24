// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     long long int t;
//     cin >> t;
//     multiset<long long int> s;
//     while (t--)
//     {
//         long long int query, value;
//         cin >> query;
//         if(query == 1){
//             cin >> value;
//             s.insert(value);
//         }
//         if(query == 2){
//             if(s.empty())
//                 cout << "empty\n";
//             else{
//                 long long int minValue = *s.begin();
//                 cout << minValue << endl;
//                 s.erase(minValue);
//             }
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    priority_queue<long long, vector<long long>, greater<long long>> pq; // min-heap
    unordered_map<long long, long long> count; 

    while (t--) {
        int query;
        cin >> query;
        if (query == 1) {
            long long value;
            cin >> value;
            pq.push(value);
            count[value]++;
        } 
        else if (query == 2) {
            while (!pq.empty() && count[pq.top()] == 0) {
                pq.pop();
            }

            if (pq.empty()) {
                cout << "empty\n";
            } else {
                long long smallest = pq.top();
                cout << smallest << "\n";
                count[smallest] = 0;
                pq.pop(); 
            }
        }
    }

    return 0;
}
