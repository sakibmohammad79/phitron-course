// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     for(int i = n; i>0; i--){
//         fact *= i;
//     }
//     return fact;
// }
// int main(){
//     int fact = factorial(5);
//     cout << fact << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n == 1)
        return 1;
    int fact = factorial(n-1);
    return fact * n;
}
int main(){
    int fact = factorial(5);
    cout << fact << endl;
    return 0;
}