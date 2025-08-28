// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin >> n;
//     for(int i = 1; i <= sqrt(n); i++){
//         cout << i << endl;
//     }
//     return 0;
// }
// find divisor using raw way
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin >> n;
//     for(int i = 1; i <= n; i++){
//         if(n%i == 0){
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

//find divisor using sqrt
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            cout << i << " " << n/i << " ";
        }
    }
    return 0;
}