#include<bits/stdc++.h>
using namespace std;
int main(){
    int v, e; 
    cin >> v >> e;
    vector<vector<int>> adj_mat(v, vector<int>(v, 0));
    for(int i = 0; i<v; i++){
        for(int j = 0; j<v; j++){
            if(i==j)
                adj_mat[i][j] = 1;
        }
    }
    while (e--)
    {
        int a, b; 
        cin >> a >> b;
        if(a >=0 && a<v && b>=0 && b<v){
            adj_mat[a][b] = 1;
        }
    }
    int t; 
    cin >> t;
    while (t--)
    {
        int a, b; cin >> a >> b;
        if(a >= 0 && a < v && b >= 0 && b < v && adj_mat[a][b] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}