#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t; 
    while (t--)
    {
        int n;  cin >> n;
        vector<int> p(n);
        for(int i = 0; i<n; i++) cin >> p[i];

        deque<int> d;
        d.push_back(p[0]);

        for(int i = 1; i<n; i++){
            if(p[i] < d.front()){
                d.push_front(p[i]);
            }
            else{
                 d.push_back(p[i]);
            }
        }
       
        for(int num : d){
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}