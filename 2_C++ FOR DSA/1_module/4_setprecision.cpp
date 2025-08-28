#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double d= 12.2343623;
    // cout << d << endl;
    
    //print . er por 6 value
    cout << fixed << setprecision(6) << d;
}