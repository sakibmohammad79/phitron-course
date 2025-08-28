#include<bits/stdc++.h>
using namespace std;

int main(){
    // list<int> myList; //list initialize
    // list<int> myList(10); //initialize with size 

    list<int> myList(10, 8); //initialize with size and value
    // cout << *myList.begin() << endl;

    //print all value
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    //use range based for loop
    for(int value: myList){
        cout<< value << " ";
    }
    cout << endl;
    // int arr[3] = {10, 20, 30};
    vector<int> v = {10, 20, 40};
    // list<int> yourList(myList);
    // list<int> yourList(arr, arr+3);
    list<int> yourList(v.begin(), v.end());
    for(int value: yourList){
        cout<< value << " ";
    }
    return 0;
}