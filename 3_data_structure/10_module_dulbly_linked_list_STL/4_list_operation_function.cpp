#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10, 90, 30, 40, 50, 60, 90};
    myList.sort(); //ascending
    // myList.sort(greater<int>());// descending
    // myList.remove(20);
    // for(int val: myList){
    //     cout << val << " ";
    // }
    myList.unique();
    // myList.reverse();
    for(int val: myList){
        cout << val << " ";
    }
    return 0;
}