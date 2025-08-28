#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 3, 3};
    // for(int ele : v){
    //     cout << ele << " ";
    // }
    //vector
    vector<int> v1;
    v1 = v; //option one
    // v1.assign(v.begin(), v.end()); // option two
    // cout << v.size();
    for(int x : v1){
        cout << x << " ";
    }
    cout << endl;
    //add elemnet in the last
    // v1.push_back(10);
    //  for(int element : v1){
    //     cout << element <<" ";
    // }
    //remove elemnet from last

    // v.pop_back();
    // for(int element : v1){
    //     cout << element <<" ";
    //}

    //element insert
    // v1.insert(v1.begin() +2 , 10);
    // for(int x : v1){
    //     cout << x << " ";
    // }
    // cout << endl;
    // vector<int> v3 = {100, 200, 300};
    //v1.insert(v1.begin() + 3, v3.begin(), v3.end());
    // for(int x : v1){
    //     cout << x << " ";
    // }

    // v1.erase(v1.begin() + 3);
    // for(int x : v1){
    //     cout << x << " ";
    // }
    // v1.erase(v1.begin()+1, v1.end() -1);
    // for(int x : v1){
    //     cout << x << " ";
    // }

    //replace
    // replace(v1.begin(), v1.end() -1, 3, 100);
    //  for(int element : v1){
    //     cout << element <<" ";
    // }

    //find
    // auto = vector<int>:: iterator
    auto it = find(v1.begin(), v1.end(), 3);
    if(it == v1.end()){
        cout << "not found\n";
    }
    else{
        cout << "found\n";
    }
    return 0;
}