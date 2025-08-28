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
    Student info[n];
    for(int i = 0; i<n; i++){
        cin >> info[i].name >> info[i].roll >> info[i].marks;
    }

    //create new object
    Student min_mark_info;
    min_mark_info.marks = INT_MAX;

    for(int i = 0; i<n; i++){
        if(min_mark_info.marks > info[i].marks){
            min_mark_info = info[i]; 
        }
    }

    cout << min_mark_info.name << " " << min_mark_info.roll << " " << min_mark_info.marks << endl;
    
    return 0;
}