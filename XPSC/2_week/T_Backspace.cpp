#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    stack<char> st;

    for(char c : s){
        if(!st.empty() && c == '<'){
            st.pop();
        }
        else{

            st.push(c);
        }
    }

    deque<char> q;
    while (!st.empty())
    {
        q.push_back(st.top());
        st.pop();
    }
    
    while (!q.empty())
    {
        cout << q.back();
        q.pop_back();
    }
    
    return 0;
}