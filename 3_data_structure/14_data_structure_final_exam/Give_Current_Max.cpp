#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;

        Student(string name, int roll, int marks){
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};
class cmp{
    public:
        bool operator()(Student l, Student r){
            if(l.marks < r.marks)
                return true;
            else if(l.marks > r.marks)
                return false;
            else
                return l.roll > r.roll;
        }
};
int main(){
    priority_queue<Student, vector<Student>, cmp> pq;
    int n; cin >> n;
    while (n--)
    {
        string name; int roll, marks;
        cin >> name >> roll >> marks;
        Student student_info(name, roll, marks);
        pq.push(student_info);
    }
    int t; cin >> t;
    while (t--)
    {   
        int command; cin >> command;
        if(command == 0){
            //insert new student
            string name; int roll, marks;
            cin >> name >> roll >> marks;
            Student student_info(name, roll, marks);
            pq.push(student_info);
            //print top student
            Student topStudent = pq.top();
            cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
        }
        else if(command == 1){
            if(pq.empty())
                cout << "Empty" << endl;
            else {
                Student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
    }
}
        else{
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty()){
                    Student topStudent = pq.top();
                    cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
                }
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        } 
    }
    return 0;
}