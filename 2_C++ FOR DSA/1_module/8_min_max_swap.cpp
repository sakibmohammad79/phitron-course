// #include<iostream>
// #include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a>> b;
    //min
    int min_value = min(a,b);
    cout << min_value <<endl;
    cout << min({13,53,561,34}) << endl;
    //max
    int max_value = max(a,b);
    cout << max_value <<endl;
    cout << max({23,53,51,523,233}) << endl;

    //swap
    swap(a,b);
    cout << a << " " << b;
}