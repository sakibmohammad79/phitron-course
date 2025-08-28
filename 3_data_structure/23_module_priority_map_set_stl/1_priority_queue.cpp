#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    pq.push(60);

    cout << pq.top() << endl; //60
    pq.pop();
    cout << pq.top() << endl; //50

    while (!pq.empty())
    {
        cout << pq.top() << " "; //50 40 30 20 10 
        pq.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(20);
    min_pq.push(30);
    min_pq.push(40);
    min_pq.push(50);
    min_pq.push(60);

     while (!min_pq.empty())
    {
        cout << min_pq.top() << " "; //10 20 30 40 50 60  
        min_pq.pop();
    }
    
    return 0;
}