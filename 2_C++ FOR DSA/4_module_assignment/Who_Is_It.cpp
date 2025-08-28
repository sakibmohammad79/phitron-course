#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
       int id, marks;
    string name;
    char sec;
    int best_id = 3, best_marks = -1;
    string best_name;
    char best_sec;
    for(int i = 1; i<=3; i++){
        cin >> id >> name >> sec >> marks;
        if (marks > best_marks || (marks == best_marks && id < best_id)) {
                best_marks = marks;
                best_id = id;
                best_name = name;
                best_sec = sec;
        }

    }
    cout << best_id << " " << best_name << " " << best_sec << " " << best_marks << endl;

    }
    
    return 0;
}