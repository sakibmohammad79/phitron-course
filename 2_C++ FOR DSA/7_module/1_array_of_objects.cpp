#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int roll;
        int marks;
};

int main(){
    int n; cin >> n;
    cin.ignore();
    Student info[n];

    //using one line name
    // for(int i = 1; i<=n; i++){
    //     cin >> info[0].name >> info[0].roll >> info[0].marks;
    // }

    // for(int i = 1; i<=n; i++){
    //     cout << info[i].name << " " << info[i].roll  << " " << info[i].marks << endl;
    // }
    for(int i = 0; i<n; i++){
        cin.ignore();
        getline(cin, info[i].name);
        cin >>  info[i].roll >> info[i].marks;
    }

    for(int i = 0; i<=n; i++){
        cout << info[i].name << " " << info[i].roll  << " " << info[i].marks << endl;
    }

    return 0;
}