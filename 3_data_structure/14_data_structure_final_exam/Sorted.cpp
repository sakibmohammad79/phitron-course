#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        list<int> l;
        while (n--)
        {
            int val; cin >> val;
            l.push_back(val);
        }
        set<int> st;
        while (!l.empty())
        {
            st.insert(l.front());
            l.pop_front();
        }
        for(auto it = st.begin(); it != st.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}