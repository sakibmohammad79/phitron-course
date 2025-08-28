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
    //   (*this).cls = cls;
       this->cls = cls;
       this->roll = roll;
       this->gpa = gpa;
    };
};



int main(){
    Student sakib("sakib",15, 5, 2.23);
    Student* sohan = new Student("sohan", 12, 6, 4.44);
    cout << sakib.name << " " << sakib.cls << " " << sakib.roll << " " << sakib.gpa << endl;
    cout << sohan->name << " " << sohan->cls << " " << sohan->roll << " " << sohan->gpa << endl;
    return 0;
}