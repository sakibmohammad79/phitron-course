#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    queue<int> q;
    int n1; cin >> n1;
    while (n1--)
    {
        int val; cin >> val;
        st.push(val);
    }
    int n2; cin >> n2;
    while (n2--)
    {
        int val; cin >> val;
        q.push(val);
    }

    if(st.size() != q.size()){
        cout << "NO";
        return 0;
    }
    bool isSame = true;
    while (!st.empty() && !q.empty())
    {
        if(st.top() != q.front()){
            isSame = false;
            break;
        }
        st.pop(); q.pop();
    }
    if(isSame){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    return 0;
}