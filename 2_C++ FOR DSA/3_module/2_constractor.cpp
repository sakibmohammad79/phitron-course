#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    char name[100];
    int cls;
    int roll;
    double gpa;

    Student(const char * n, int c, int r, double g){
        strcpy(name, n);
        cls = c;
        roll = r;
        gpa = g;
    };
};
int main(){
    Student sakib("sakib",13, 5, 2.23);
    Student sohan("sohan",12, 6, 4.23);

    cout << sakib.name << " " << sakib.cls << " " << sakib.roll << " " << sakib.gpa << endl;
    cout << sohan.name << " " << sohan.cls << " " << sohan.roll << " " << sohan.gpa << endl;
    return 0;
}