#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; // ===> O(1)
    cin >> n; // ===> O(1)
    for(int i = 1; i<=n -5; i++){ // ===> O(n)
        cout << i << " " << endl;
    }
    return 0; // ===> O(1)
}

// we find worst case so time complexity is: O(n)
//we don't count constant so n-5 or n*5 or n+5 or n/2 is not matter


// variation 2
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; // ===> O(1)
//     cin >> n; // ===> O(1)
//     for(int i = 1; i<=n; i += 2){ // ===> O(n)
//         cout << i << " " << endl;
//     }
//     return 0; // ===> O(1)
//}

//also operation complete n/2, and we remove constant so this code time
//complexity is same O(n)


//variation 3
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; // ===> O(1)
//     cin >> n; // ===> O(1)
//     for(int i = 1; i<=n; i += 2){ // ===> O(n)
//         cout << i << " " << endl;
//     }
//     for(int i = 1; i<=n; i++){ // ===> O(n)
//         cout << i << " " << endl;
//     }
//     return 0; // ===> O(1)
//}

// O(n) + O(n) + 3
// remove constant => O(2n) => O(n) so, time complexity is O(n)