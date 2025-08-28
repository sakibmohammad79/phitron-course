#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    char name[100];
    int cls;
    int roll;
    double gpa;

    Student(const char * name, int cls, int roll, double gpa){
       strcpy(this->name, name);
    //    (*this).cls = cls;
       this->cls = cls;
       this->roll = roll;
       this->gpa = gpa;
    };
};

Student student_fun() {
    Student sohan("sohan",12, 6, 4.23);
    return sohan;
}

int main(){
    Student sakib("sakib",15, 5, 2.23);
    Student sohan = student_fun();
    cout << sakib.name << " " << sakib.cls << " " << sakib.roll << " " << sakib.gpa << endl;
    cout << sohan.name << " " << sohan.cls << " " << sohan.roll << " " << sohan.gpa << endl;
    return 0;
}