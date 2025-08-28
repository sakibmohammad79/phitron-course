// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int num[n];                     // Fixed-size array of 5 integers

//     for(int i = 0; i < n; i++){
//         cin >> num[i];             // Input: reads 5 integers
//     }

//     reverse(num, num + n);         // Reverses the array in place

//     for(int i = 0; i < n; i++){
//         cout << num[i] << " ";     // Prints the reversed array
//     }

//     return 0;
// }

//string reverse
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}
