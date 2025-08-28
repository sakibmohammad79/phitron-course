// #include<bits/stdc++.h>
// using namespace std;

// void fun(int* p){
//     int y = 200;
//     p = &y;
//     cout << "in fun =>" << &p << endl;
// }

// int main(){
//     int x = 10;
//     int*p = &x;
//     fun(p);
//     cout << "in main =>" << &p << endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

void fun(int* &p){
    p = NULL;
    cout << "in fun =>" << &p << endl; //in fun =>0x61fe40 in main =>0x61fe40
}

int main(){
    int x = 10;
    int*p = &x;
    fun(p);
    cout << "in main =>" << &p << endl;
    cout << "in main =>" << p << endl;
    return 0;
}