#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    float result = 0;
    while (n--)
    {
        float q, y;
        cin >> q >> y;
        result += q*y;
    }
    cout << fixed << setprecision(3) << result;
    return 0;
}