#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int roll;
        int marks;
};

bool cmp (Student a, Student b){
    if(a.marks == b.marks){
        return a.roll < b.roll;
    }
    else{
        return a.marks > b.marks;
    }
}

int main(){
    int n;
    cin >> n;
    Student info[n];

    for(int i = 0; i<n; i++){
        cin >> info[i].name >> info[i].roll >> info[i].marks;
    }

    sort(info, info+n, cmp);

    for(int i = 0; i<n; i++){
        cout << info[i].name  << " " << info[i].roll << " " << info[i].marks << endl;
    }
    return 0;
}