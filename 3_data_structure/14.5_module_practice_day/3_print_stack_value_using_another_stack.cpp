#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> original;
    stack<int> temp;
    int n; cin >> n;
    while (n--)
    {
        int val; cin >> val;
        original.push(val);
    }

    while(!original.empty()){
        temp.push(original.top());
        original.pop();
    }

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    
    return 0;
}