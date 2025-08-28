#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int roll;
    string name;
    char sec;

    Student(int roll, string name, char sec) {
        this->roll = roll;
        this->name = name;
        this->sec = sec;
    }

    void hello() {
        cout << "Hello " << name << ", welcome!" << endl;
    }

    void printInfo() {
        cout << "Roll: " << roll << ", Name: " << name << ", Section: " << sec << endl;
    }
};

int main() {
    Student sakib(12, "Sakib Ahmed", 'A');
    sakib.hello();
    sakib.printInfo();
    Student sohan(13, "sohan Ahmed", 'B');
    sohan.hello();
    sohan.printInfo();
    return 0;
}
