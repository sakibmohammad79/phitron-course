#include<bits/stdc++.h>
using namespace std;

int main(){
   int n; cin >> n;
   while (n--)
   {
     stack<char> st;

    string binaryNum;
    cin >> binaryNum;

    for(char ch : binaryNum){
        if(st.empty()){
            st.push(ch);
        }
        else if(ch == '0'){
            st.push(ch);
        }
        else if(st.top() == '0' && ch == '1'){
            st.pop();
        }
        else{
            st.push(ch);
        }
    }

        if(st.empty()){
            cout << "YES"<< endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
   

    return 0;
}