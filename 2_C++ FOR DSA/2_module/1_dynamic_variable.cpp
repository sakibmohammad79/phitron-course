// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int x = 10;
//     //dynamic variable
//     int *p = new int;
//     *p = 100;

//     cout << x << endl << *p;
// }

//prove stack memory => variable automatically delete in stack memory
// #include<bits/stdc++.h>
// using namespace std;
// int *p;

// void fun(){
//     int x = 10;
//     p = &x;
//     cout << "Main func => " << *p << endl;
//     return;

// }
// int main(){

//     fun();
//     cout << "Main fun => " << *p << endl;
//     return 0;
// }


//prove dinamic variable => dynamic variable don't delete automatically
#include<bits/stdc++.h>
using namespace std;

int *p;

void fun() {
    int *  x = new int;
    *x = 100;
    p = x;
    cout << "fun fn => " << *p << endl;
    return; 
}

int main () {
    fun();
    cout << "main fn => " << *p << endl;
    return 0;
}