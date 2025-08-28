#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj_list(1005, vector<int>());
vector<bool> visited(1005, false);
vector<int> parent(1005, -1);

void breath_first_search(int src_v){
    if(src_v < 0) return;
    queue<int> q;
    q.push(src_v);
    visited[src_v] = true;
    // parent[src_v] = -1; no need

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for(int child : adj_list[current]){
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
                parent[child] = current;
            }
        }
    }
    
}

int main(){
    int v, e; cin >> v >> e;
    
    while (e--)
    {
        int a, b; cin >> a >> b;
        if(a >= 0 && a < v && b >= 0 && b < v){
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
    }
    int src_v, dest_v; cin >> src_v >> dest_v;
    breath_first_search(src_v);
    // cout<< parent[src_v];
    // for(int i; i<v; i++){
    //     cout << i << " " << "parent => " << parent[i] << endl; 
    // }
    vector<int> path;
    int node = dest_v;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());
    for(int v : path){
        cout << v << " ";
    }
    
    return 0;
}