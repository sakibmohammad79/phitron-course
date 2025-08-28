#include<bits/stdc++.h>
using namespace std;

int* dynamic_array () {
    int * a = new int[5];

    for(int i = 0; i<5; i++){
        cin >> a[i];
    }

    return a;
}

int main(){
   int * a =  dynamic_array();
   for(int i = 0; i<5; i++){
        cout << a[i] << " ";
    }
}