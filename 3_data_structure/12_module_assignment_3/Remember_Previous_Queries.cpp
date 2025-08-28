#include<bits/stdc++.h>
using namespace std;

void insert_at_head(list<int>& myList, int val){
    myList.push_front(val);
}
void insert_at_tail(list<int>& myList, int val){
    myList.push_back(val);
}
int get_size(list<int> myList){
    if(myList.empty()){
        return 0;
    }
    return myList.size();
}

bool delete_at_any_pos(list<int>& myList, int index) {
    if (myList.empty() || index < 0 || index >= myList.size()) {
        return false;
    }
    int pos = 0;
    for (auto it = myList.begin(); it != myList.end(); it++ ) {
        if (pos == index) {
            myList.erase(it);
            return true;
        }
        pos++;
    }
    return false;
}

void print_forward(const list<int>& myList) {
    cout << "L -> ";
    if (myList.empty()) {
        cout << endl;
        return;
    }
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;
}
void print_backward(const list<int>& myList) {
    cout << "R -> ";
    if (myList.empty()) {
        cout << endl;
        return;
    }

    auto it = myList.end();
    --it;
    while (true) {
        cout << *it << " ";
        if (it == myList.begin()) {
            break;
        };
        --it;
    }

    cout << endl;
}


int main(){
    int n; cin >> n;
    list<int> myList;

    while (n--)
    {
        int index, value;
        cin >> index >> value;
        if(index == 0){
            insert_at_head(myList, value);
        }
        else if(index == 1){
            insert_at_tail(myList, value);
          
        }
        else if(index == 2){
           delete_at_any_pos(myList, value);
        }
        print_forward(myList);
        print_backward(myList);
    }
    
}