#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj_list(1005, vector<int>());

void print_connection(int sv, int v){
  
    if(sv < 0 || sv >= v){
        cout << -1 << endl;
        return;
    }
    
    if(adj_list[sv].empty()){
        cout << -1 << endl;
        return;
    }
    
    vector<int> connection;
    for(int child : adj_list[sv]){
        connection.push_back(child);
    }
    
    // Sort in descending order
    sort(connection.begin(), connection.end(), greater<int>());
    
    for(int x : connection){
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    int v, e; 
    cin >> v >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        if(a >= 0 && a < v && b >= 0 && b < v){
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
    }
    
    int q;
    cin >> q;

    while(q--){
        int sv;
        cin >> sv;
        print_connection(sv, v);
    }
    
    return 0;
}