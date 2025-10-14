#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    stack<string> st;
    while (n--)
    {
        string name; 
        cin >> name;
        st.push(name);
    }

    queue<string> q;
    unordered_set<string> unique;
    while (!st.empty())
    {
        string name = st.top();
        st.pop();
        if(unique.count(name) == 0){
            unique.insert(name);
            q.push(name);
        }
    }
    while (!q.empty())
    {
       cout << q.front() << endl;
        q.pop();
    }
    return 0;
}