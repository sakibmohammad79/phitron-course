#include<bits/stdc++.h>
using namespace std;
class Student{
    public: 
        string name;
        int roll;
        int marks;
};
int main(){
    int n;
    cin >> n;
    Student info[n];

    for(int i = 0; i<n; i++){
        cin >> info[i].name >> info[i].roll >> info[i].marks;
    }

    Student max_marks_student;
    max_marks_student.marks = INT_MIN;

    for(int i = 0; i<n; i++){
        if(max_marks_student.marks < info[i].marks){
            max_marks_student = info[i];
        }
    }

    cout << max_marks_student.name << " " << max_marks_student.roll << " " << max_marks_student.marks << endl;
    return 0;
}