#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int a, b, c; cin >> a >> b >> c;

        int firstDisTime = a-1;
        int secondDisTime = 0;
        
        if(b<c)
            secondDisTime = (c-b)+(c-1);
        else if(b>=c)
            secondDisTime = b-1;

        if(firstDisTime < secondDisTime)
            cout << 1 << endl;
        else if(secondDisTime < firstDisTime)
            cout << 2 << endl;
        else
            cout << 3 << endl; 
    }
    
    return 0;
}