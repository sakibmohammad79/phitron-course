// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     queue<int> q;
//     int n;
//     cin >> n;

//     // Step 1: Input original queue
//     for (int i = 0; i < n; ++i) {
//         int val;
//         cin >> val;
//         q.push(val);
//     }

//     // Step 2: Copy queue to stack to reverse
//     stack<int> st;
//     while (!q.empty()) {
//         st.push(q.front());
//         q.pop();
//     }

//     // Step 3: Copy stack to new queue to get reversed order
//     queue<int> reversedQ;
//     while (!st.empty()) {
//         reversedQ.push(st.top());
//         st.pop();
//     }

//     // Step 4: Print the reversed queue
//     while (!reversedQ.empty()) {
//         cout << reversedQ.front() << " ";
//         reversedQ.pop();
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int>& q){
    if(q.empty()){
        return;
    }
    
    int front = q.front();
    q.pop();

    reverseQueue(q);

    q.push(front);
}
int main() {
    queue<int> q;
    int n;
    cin >> n;

    
    while (n--) {
        int val;
        cin >> val;
        q.push(val);
    }

    reverseQueue(q);

    while (!q.empty())
    {
        cout<< q.front() << " ";
        q.pop();
    }
    
    return 0;
}
