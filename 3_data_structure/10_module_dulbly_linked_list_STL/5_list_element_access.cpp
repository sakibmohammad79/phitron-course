#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10, 20, 30, 40};
    cout << myList.front() << endl;
    cout << myList.back() << endl;
    cout << *next(myList.begin(), 2) << endl;
    cout << *myList.begin() << endl;
    cout << myList.back() << endl;
   
    return 0;
}