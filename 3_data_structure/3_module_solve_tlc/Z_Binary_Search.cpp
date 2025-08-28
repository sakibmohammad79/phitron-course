// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int s, q;
//     cin >> s >> q;
//     vector<int> v(s);
//     for(int i = 0; i<s; i++){
//         cin >> v[i];
//     }

//     while (q--)
//     {
//         bool isFound = false;
//         int val;
//         cin >> val;
//         for(int i = 0; i<s; i++){
//             if(v[i] == val){
//                 isFound = true;
//             }
//         }
//         if(isFound){
//             cout << "found" << endl;
//         }
//         else{
//             cout << "not found" << endl;
//         }
//     }
    
//     return 0;
// }

// this code showing tle error because it's time complexity is hight so we use binary search

#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, q;
    cin >> s >> q;
    vector<int> v(s);
    for(int i = 0; i < s; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while (q--) {
        int val;
        cin >> val;

        int left = 0;
        int right = s - 1;
        bool isFound = false;
        
        while (left <= right) {
            
            int mid = (left + right) / 2;

            if (v[mid] == val) {
                isFound = true;
                break;
            }
            else if (v[mid] > val) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        if (isFound) {
            cout << "found" << endl;
        }
        else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
