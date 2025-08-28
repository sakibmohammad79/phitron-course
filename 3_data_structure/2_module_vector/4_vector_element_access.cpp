#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    //first element
    cout << v[0] << endl;
    cout << v.front() << endl;

    //last element
    cout << v[v.size() -1] << endl;
    cout << v.back() << endl;

    // using at
    cout << v.at(3) << endl;
    return 0;
}