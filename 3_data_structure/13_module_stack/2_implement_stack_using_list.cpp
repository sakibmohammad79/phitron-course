#include<bits/stdc++.h>
using namespace std;
class MyStack {
    public:
        list<int> l;

        void push(int val){
            l.push_back(val);
        }
        void pop(){
            l.pop_back();
        }
        int top(){
            return l.back();
        }
        int size(){
            return l.size();
        }
        bool empty(){
            return l.empty();
        }
};
int main(){
    MyStack list;
    // list.push(10);
    // list.push(30);
    // list.pop();
    // cout << list.top() << " ";
    int n;
    cin >> n;
    int val;
    while (n--)
    {   cin >> val;
        list.push(val);
    }

    while (!list.empty())
    {
        cout << list.top() << " ";
        list.pop();
    }
    return 0;
}