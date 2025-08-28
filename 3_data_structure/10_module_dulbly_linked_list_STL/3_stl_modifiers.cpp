#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> list1 = { 10, 40, 30, 40, 50, 60};
    // list<int> list2 = {40, 30, 40};
    // list2.assign(list1.begin(), list1.end());
    // list2 = list1;

    // for(int value: list2){
    //     cout << value << " ";
    // }
    // list1.push_front(5);
    // for(int value: list1){
    //     cout << value << " ";
    // }
    // list1.push_back(40);
    // for(int value: list1){
    //     cout << value << " ";
    // }
    // list1.pop_front();
    
    // list1.pop_back();
    
    // find any value
    // cout << *next(list1.begin(), 2);
    // cout << endl;
    //insert element any postion
    // int arr[3] = {10, 20, 30};
    // vector<int>  v = {523,342};
    // list1.insert(next(list1.begin(), 3), list2.begin(), list2.end());
    // list1.insert(next(list1.begin(), 3), arr, arr+3);
    // list1.insert(next(list1.begin(), 3), v.begin(), v.end());
    // for(int value: list1){
    //     cout << value << " ";
    // }

    //eares
    // list1.erase(next(list1.begin(), 2), next(list1.begin(), 4));
    // for(int value: list1){
    //     cout << value << " ";
    // }

    //replace
    // replace(next(list1.begin()), next(list1.end()), 20, 100);
    // for(int value: list1){
    //     cout << value << " ";
    // }

    //find
    auto it = find(list1.begin(), list1.end(), 20);

    if(it == list1.end()){
        cout << "not found";
    }
    else{
        cout << "found";
    }
    return 0;
}