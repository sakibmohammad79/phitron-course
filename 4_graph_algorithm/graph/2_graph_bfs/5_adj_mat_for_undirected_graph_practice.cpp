#include<bits/stdc++.h>
using namespace std;

int main(){
    int v, e;
    cin >> v >> e;
    
    // Initialize adjacency matrix with all zeros
    vector<vector<int>> adj_mat(v, vector<int>(v, 0));
    
    // Optional: Set diagonal to 1 only if you need self-loops
    // for(int i = 0; i < v; i++){
    //     adj_mat[i][i] = 1;
    // }
    
    while(e--){
        int a, b;
        cin >> a >> b;
        
        // Add bounds checking
        if(a >= 0 && a < v && b >= 0 && b < v){
            adj_mat[a][b] = 1;
            adj_mat[b][a] = 1;  // For undirected graph
        }
    }

    // Print the adjacency matrix
    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}