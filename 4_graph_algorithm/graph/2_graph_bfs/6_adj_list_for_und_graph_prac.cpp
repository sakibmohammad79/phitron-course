#include<bits/stdc++.h>
using namespace std;

int main(){
    int v, e; 
    cin >> v >> e;
    
    vector<vector<int>> adj_list(v);
    
    while (e--){
        int a, b; 
        cin >> a >> b;
        
        if((a >= 0 && a < v) && (b >= 0 && b < v)){
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);  // Undirected graph
        }
    }
    
    // Print adjacency list
    for(int i = 0; i < v; i++){
        cout << "Node " << i << ": ";
        for(int neighbor : adj_list[i]){
            cout << neighbor << " ";
        }
        cout << endl;
    }
    
    return 0;
}