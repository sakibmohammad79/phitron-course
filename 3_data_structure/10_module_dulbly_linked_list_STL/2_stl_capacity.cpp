#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10, 20, 30, 40, 50};
    cout << myList.size() << endl; //list size
    cout << myList.max_size() << endl;
    // myList.clear(); //remove all value
    // cout << myList.size() << endl;
    bool isEmpty = myList.empty();
    if(isEmpty){
        cout << "Empty!";
    }
    else{
        cout << "Not Empty!";
    }
    cout << endl;

    myList.resize(2);

    for(int value : myList){
        cout << value << " ";
    }
    return 0;
}