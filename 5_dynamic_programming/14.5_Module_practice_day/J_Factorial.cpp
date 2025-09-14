#include<bits/stdc++.h>
using namespace std;

int factorial (int n){
    if(n==1 || n==0)
        return 1;
    int fact = factorial(n-1);
    return n*fact;
}

int main(){
    int num; cin >> num;
    int result = factorial(num);
    cout << result;
    return 0;
}