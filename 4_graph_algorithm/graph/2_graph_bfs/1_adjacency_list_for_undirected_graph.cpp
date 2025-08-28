#include<bits/stdc++.h>
using namespace std;

int main(){
    int v, e; cin >> v >> e;
    vector<int> adj_list[v];
    while (e--)
    {
        int a, b; cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // undirected graph
    }

    //print
    for(int i = 0; i<v; i++){
        cout << "index of " << i << " => "; 
        for(int x: adj_list[i]){
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}