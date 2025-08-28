// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; 
//     cin >> n;
//     int digit[n];
//     for(int i = 0; i<n; i++){
//         cin >> digit[i];
//     }
//     for(int i = 0, j = n-1; i<j; i++, j--){
//         int temp = digit[i];
//         digit[i] = digit[j];
//         digit[j] = temp;
//     }
//     for(int i = 0; i<n; i++){
//         cout << digit[i] << " ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int digit[n];
    for(int i = 0; i<n; i++){
        cin >> digit[i];
    }

    for(int i = 0, j = n-1; i<j; i++, j--){
        swap(digit[i], digit[j]);
    }
    for(int i = 0; i<n; i++){
        cout << digit[i] << " ";
    }
    return 0;
}