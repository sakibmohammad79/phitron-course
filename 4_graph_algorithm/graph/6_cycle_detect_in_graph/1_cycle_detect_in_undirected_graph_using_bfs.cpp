#include<bits/stdc++.h>
using namespace std;
bool vis[105];
bool isCycle = false;
vector<vector<int>> adj_list(105, vector<int>());
int parent[105];
void bfs(int src){

    if(src < 0) return;
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        
        for(int child : adj_list[par]){
            if(vis[child] && parent[par] != child){
                isCycle = true;
            }
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                parent[child] = par;
            }
        }
    }
    
}
int main(){
    int v, e;
    cin >> v >> e;
    
    while (e--)
    {
        int a, b; cin >> a >> b;
        if(a >= 0 && a < v && b >= 0 && b < v){
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    isCycle = false;
    for (int i = 0; i < v; i++)
    {
        if(!vis[i])
            bfs(i);
    }

    if(isCycle)
        cout << "Cycle detected" << endl;
    else
        cout << "No cycle" << endl;
    
    return 0;
}