#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    //size()
    cout << v.size() << endl;
    //max_size
    cout << v.max_size() << endl;
    // vector capacity
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl; // 1
    v.push_back(10);
    cout << v.capacity() << endl; // 2
    v.push_back(10);
    cout << v.capacity() << endl; // 4
    v.push_back(10);
    cout << v.capacity() << endl; // 4
    v.push_back(10);
    cout << v.capacity() << endl; // 8

    //vector empty
    if(v.empty()){
        cout << "empty\n";
    }
    else{
        cout << "not empty\n";
    }
    v.resize(20, 100);
    cout << v.size() << endl; //20
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    v.clear();
    cout << v.size() << endl; //0
    //but element no remove just size remove
    cout << v[3] << endl; //10

    return 0;
}