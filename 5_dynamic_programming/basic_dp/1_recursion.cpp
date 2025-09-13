// #include<bits/stdc++.h>
// using namespace std;
// void rec(int n){
//     if(n > 5)
//         return;
//     // cout << n << endl; //1 to 5
//     rec(n+1);
//     cout << n << endl; //5 to 1
// }
// int main(){
//     rec(1);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int recSum(int n){
    if(n > 5)
        return 0;
    int sum = recSum(n+1);
    return sum+n;
}
int main(){
    cout << recSum(1) << endl;
    return 0;
}