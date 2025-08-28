#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while (n--)
    {
    stack<char> st;
    string value;
    cin >> value;

    for(char ch: value){
        if(st.empty()){
            st.push(ch);
        }
        else if(st.top() == '0' && ch == '1'){
            st.pop();
        }
        else if(st.top() == '1' && ch == '0'){
            st.pop();
        }
        else{
            st.push(ch);
        }
    }

    if(st.empty()){
        cout << "YES" << endl;;
    }
    else{
        cout << "NO" << endl;
    }
    }
    
    return 0;
}