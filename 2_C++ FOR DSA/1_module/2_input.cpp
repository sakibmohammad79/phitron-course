#include<iostream>
using namespace std;

int main(){
    int x;
    double d;
    char a;

    //input
    cin >> x >> d >> a;
    //output
    cout << x << endl << d << endl << a << endl;

    //how to print ascci value
    //option 1
    // int ascii = a;
    // cout << ascii << endl;

    //options 2 typecast

    cout << (int)a << endl; // a => 97
    cout << (char)x << endl; // 65 => A
}