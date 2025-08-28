#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1 ; i<=n; i *= 2){ // just 10 operation
        cout << i << endl;
    }

    return 0;
}

// i = 1 2 4 8 16 32 64 128 256 512
// 2power0 2power1 2power2 2power3 2power4 2power5......2powerk
//power number = operation number
//2powerk = 1000 (n er value)
// log2 power 2powerk = log2 1000   (n = 1000)
//k log2 power 2 = log2 1000
//k.1 = log 1000 (remove constant 2)
// so, k = log 1000 it's means logN
// final result is k = logN;

//log1000 = 9.2345345 menase 10 operation

// example 1
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1 ; i<=n; i /=3){ // O(logN) log3 1000 = just 7 operation
//         cout << i << endl;
//     }

//     return 0;
// }

// example 2
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
        // int k = 2;
//     for(int i = 1 ; i<=n; i++){ // O(N)
//         cout << i << endl;
            // i= i*k; // O(logN) // so time complexity is O(log2N)
//     }
//     return 0;
// }