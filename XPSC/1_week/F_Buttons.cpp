#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int result = 0;
    if(x == y){
        cout << x+y;
    }
    else if(x > y){
        cout << x+(x-1);
    }
    else if(y>x){
        cout << y+(y-1);
    }
    return 0;
}