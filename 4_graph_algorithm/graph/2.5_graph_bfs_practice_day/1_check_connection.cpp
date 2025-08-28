#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj_list(1005, vector<int>());
bool visited[1005] = {false};

void BFS(int src_vertex){
    if(src_vertex < 0) return;
   
    queue<int> q;
    q.push(src_vertex);
    visited[src_vertex] = true;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for(int child : adj_list[current]){
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
            }
        }
    }
    
}

int main(){
    int v, e; cin >> v >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        if(a >= 0 && a < v && b >= 0 && b < v){
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        } 
    }

    int src_vertex, dest_vertext;
    cin >> src_vertex >> dest_vertext;

    BFS(src_vertex);

    if(visited[dest_vertext])
        cout << "Yes" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}