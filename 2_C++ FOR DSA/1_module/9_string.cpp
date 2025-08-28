#include<iostream>
using namespace std;

int main () {
    //without space
    char s[100];
    cin >> s;
    cout << s << endl;
    //ignore enter
    cin.ignore();
    //with space
    char name[100];
    cin.getline(name, 100);
    cout << name << endl;
}