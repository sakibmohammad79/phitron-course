#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ajd_list(1005, vector<int>());
vector<bool> visited(1005, false);

void dfs(int src_vertex){
    // cout << src_vertex << " ";
    visited[src_vertex] = true;
    for(int child : ajd_list[src_vertex]){
        if(!visited[child]){
            dfs(child);
        }
    }

}

int main(){
    int v, e; 
    cin >> v >> e;
    

    while (e--)
    {
        int a, b; cin >> a >> b;
        if(a >= 0 && a < v && b>=0 && b < v){
            ajd_list[a].push_back(b);
            ajd_list[b].push_back(a);
        }
    }
    int componentCount = 0;
    for(int i = 0; i<v; i++){
        if(!visited[i]){
            dfs(i);
            componentCount++;
        }
    }
    cout << componentCount << endl;
    
    return 0;
}