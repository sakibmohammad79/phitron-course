#include<bits/stdc++.h>
using namespace std;
class MyStack {
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val);
        }
        void pop(){
            v.pop_back();
        }
        int top(){
            return v.back();
        }
        int size(){
            return v.size();
        }
        bool empty(){
            return v.empty();
        }
};

int main(){
    MyStack stack;

    // stack.push(10);
    // stack.push(20);
    // // cout << stack.top();
    // while (!stack.empty())
    // {
    //     cout << stack.top() << " ";
    //     stack.pop();
    // }

    // if(!stack.empty()){ //stack.empty() == false
    //     cout << stack.top();
    // }

    // if(stack.empty() == false){
    //     stack.pop();
    // }


    //user input
    int n;
    cin >> n;
    int val;
    while (n--)
    {   cin >> val;
        stack.push(val);
    }

    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
    
    
    return 0;
}