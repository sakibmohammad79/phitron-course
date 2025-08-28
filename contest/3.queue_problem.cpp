#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    queue<string> q;
    while (n--)
    {
        string command; cin >> command;
        if(command == "ARRIVE"){
            string name; cin >> name;
            q.push(name);
        }
        else if(command == "SERVE"){
            if(q.empty())
                cout << "No patients"<< endl;
            else 
                q.pop();
        }
        else if(command == "FIRST"){
            if(q.empty())
                cout << "No patients"<< endl;
            else 
                cout << q.front() << endl;
        }
        else if (command == "LAST") {
            if (q.empty())
                cout << "No patients" << endl;
            else 
                cout << q.back() << endl;
        }
        else if(command == "COUNT"){
            cout << q.size() << endl;
        }
        else if(command == "SHOW"){
            if (q.empty())
                cout << "No patients" << endl;
            else {
                queue<string> temp = q;
                while (!temp.empty()) {
                    cout << temp.front() << " ";
                    temp.pop();
                }
                cout << endl;
            }
            
        }
    }
    
    return 0;
}