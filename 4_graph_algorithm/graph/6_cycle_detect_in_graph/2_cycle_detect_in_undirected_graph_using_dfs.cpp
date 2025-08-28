#include<bits/stdc++.h>
using namespace std;

int vis[105];
vector<vector<int>> adj_list(105, vector<int>());
int parent[105];
bool isCycle;
void dfs(int src){
    vis[src] = true;
    for(int child : adj_list[src]){
        if(vis[child] && parent[src] != child){
            isCycle = true;
        }
        if(!vis[child]){
            parent[child] = src;
            dfs(child);
        }
    }
}

int main(){
    int v, e;
    cin >> v >> e;
    while (e--)
    {
        int a,b;
        cin >> a >> b;
        if(a>=0 && a<v && b>=0 && b<v){
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    isCycle = false;
    for(int i = 0; i<v; i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    if(isCycle)
        cout << "Cycle Detected" << endl;
    else
        cout << "No Cycle" << endl;
    return 0;
}