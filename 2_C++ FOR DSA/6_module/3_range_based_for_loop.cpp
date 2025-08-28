// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;

//     for(char ch : s){
//         cout << ch << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int digit[10];

    for(int i = 0; i<10; i++){
        cin >> digit[i];
    }

    for(int num : digit){
        cout << num << " ";
    }
    return 0;
}