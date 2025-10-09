// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;

//     string newString = "";

//     for(char c : s){
//         if(isupper(c)){
//             newString += c;
//         }
//     }
//     cout << newString;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (i == 0 || s[i - 1] == '-') {
            cout << s[i];
        }
    }
    cout << endl;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     cout << s[0];
//     for (int i = 0; i < s.size(); i++) {
        
//         if (s[i] == '-') {
//             cout << s[i + 1];
//         }
//     }
//     cout << endl;
//     return 0;
// }
