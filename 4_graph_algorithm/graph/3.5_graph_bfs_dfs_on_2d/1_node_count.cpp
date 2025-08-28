#include<bits/stdc++.h>
using namespace std;

int v, e;
vector<vector<int>> adj_list; 
vector<bool> visited;

void dfs(int sv){
    visited[sv] = true;
    for(int child : adj_list[sv]){
        if(!visited[child]){
            dfs(child);
        }
    }
}

int main(){
    cin >> v >> e;

    adj_list.assign(v, {});      // v সাইজের adjacency list
    visited.assign(v, false);    // v সাইজের visited array

    while (e--){
        int a, b;
        cin >> a >> b;
        if(a>=0 && a<v && b>=0 && b<v){
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
    }

    int sv; cin >> sv; // source vertex
    dfs(sv);

    int count = 0;
    for(int i = 0; i < v; i++){
        if(visited[i]){
            if(i != sv)
                count++;
        }
    }

    cout << count << "\n";
    return 0;
}
