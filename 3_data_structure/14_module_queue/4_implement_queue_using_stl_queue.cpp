#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;

    int n; cin >> n;
    while (n--)
    {
        int val; cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}