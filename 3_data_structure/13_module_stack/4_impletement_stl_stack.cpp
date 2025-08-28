#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    stack<int> st;
    while (n--)
    {
        int val; cin >> val;
        st.push(val);
    }

    cout << st.size() << endl;

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    

    return 0;
}