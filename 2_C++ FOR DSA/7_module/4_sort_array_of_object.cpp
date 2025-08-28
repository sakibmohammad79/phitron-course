#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
        string name;
        int roll;
        int marks;
};
bool cmp(Student l, Student r){

    // if(l.marks < r.marks){
    //     return true;
    // }
    // e;se if(l.marks > r.marks){
    //     return false;
    // }
    // else{
    //     if(l.roll < r.roll){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    // }

    // sortcaut one
    // if(l.marks < r.marks){
    //     return true;
    // }
    // else if(l.marks > r.marks){
    //     return false;
    // }
    // else{
    //     return l.roll < r.roll
    // }

    // sortcaut two
    // if(l.marks < r.marks){
    //     return true;
    // }
    // else if(l.marks > r.marks){
    //     return false;
    // }
    // else{
    //     return l.roll < r.roll;
    // }

    // sortcaut three
    // if(l.marks == r.marks){
    //     return l.roll < r.roll;
    // }
    // else {
    //     return l.marks < r.marks;
    // }
    // sortcaut four
    
    return (l.marks == r.marks) ?  l.roll < r.roll : l.marks > r.marks;
};


int main(){
    int n;
    cin >> n;
    Student info[n];
    for(int i = 0; i<n; i++){
        cin >> info[i].name >> info[i].roll >> info[i].marks;
    }

    sort(info, info+n, cmp);
     for(int i = 0; i<n; i++){
        cout << info[i].name << " " << info[i].roll << " " << info[i].marks << " " << endl;
    }
    return 0;
}