#include<bits/stdc++.h>
using namespace std;

int main(){
    //vector initialize 
    vector<int> v; //time one
    vector<int> v1(10); // size 10
    vector<int> v3(10, 5); //declare 10 size vector and value is 5 for all element
    cout << v3.size() << endl;
    for(int i = 0; i<v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << endl;

    //copy elemnet
    vector<int> v4(v3);
    for(int i = 0; i<v4.size(); i++){
        cout << v4[i] << " ";
    }
    cout << endl;
    //array elemnet copy
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v5(a, a+5);
    for(int i = 0; i<v5.size(); i++){
        cout << v5[i] << " ";
    }
    cout << endl;
    //vector inilitialze with value
    vector<int> v6 = {2, 32 ,53 ,53,12};
    for(int i = 0; i<v6.size(); i++){
        cout << v6[i] << " ";
    }
    return 0;
}