#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;
    int n; cin >> n;
    while (n--)
    {
        string num; cin >> num;
        if(num == "0"){
            string name;
            cin >> name;
            q.push(name);
        }
        else if(!q.empty() && num == "1"){
            cout << q.front() << endl;
            q.pop();
        }
        else{
            cout << "Invalid" << endl;
        }
    }
    
    return 0;
}