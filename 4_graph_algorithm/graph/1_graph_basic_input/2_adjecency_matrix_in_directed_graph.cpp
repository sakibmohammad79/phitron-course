#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];
    // for(int r = 0; r<n; r++){
    //     for(int c = 0; c<n; c++){
    //         adj_mat[r][c] = 0;
    //     }
    // }
    // set 0 for all 
    memset(adj_mat, 0, sizeof(adj_mat));
    // set 1 for [][] all same node 
    for(int r = 0; r<n; r++){
        for(int c = 0; c<n; c++){
            if(r == c)
                adj_mat[r][c] = 1;
        }
    }

    for(int i = 0; i<e; i++){
        int a, b; cin >> a >> b;
        adj_mat[a][b] = 1;
    
    }

    //print
    for(int r = 0; r<n; r++){
        for(int c = 0; c<n; c++){
           cout<< adj_mat[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}