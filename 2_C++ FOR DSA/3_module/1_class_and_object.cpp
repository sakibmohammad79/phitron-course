// #include<bits/stdc++.h>
// using namespace std;
// class Student {
//         public:
//         char name[100];
//         int roll;
//         char sec;
//         double gpa;
//     };

// int main(){
//     Student a;
//     char temp_a[100] = "sakib";
//     strcpy(a.name, temp_a);
//     a.roll = 12;
//     a.sec = 'A';
//     a.gpa = 3.123;
    
//     Student b;
//     char temp_b[100] = "sohan";
//     strcpy(b.name, temp_b);
//     b.roll = 13;
//     b.sec = 'B';
//     b.gpa = 2.123;
    
//     cout << a.name << " " << a.roll << " " << a.sec << " " << a.gpa << endl;
//     cout << b.name << " " << b.roll << " " << b.sec << " " << b.gpa << endl;
//     return 0;
// }

// get input
#include<bits/stdc++.h>
using namespace std;
class Student {
        public:
        char name[100];
        int roll;
        char sec;
        double gpa;
    };

int main(){

    Student a , b;
    //input
    cin.getline(a.name, 100); //input full name
    cin >> a.roll >> a.sec >> a.gpa;
    cin.ignore(); //ignore enter
    cin.getline(b.name, 100);
    cin >> b.roll >> b.sec >> b.gpa;
    //print
    cout << a.name << " " << a.roll << " " << a.sec << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.sec << " " << b.gpa << endl;
    return 0;
}