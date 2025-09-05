#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;   
vector<int> adj_list[N];
bool vis[N];

void dfs(int src) {
    vis[src] = true;
    for (int child : adj_list[src]) {
        if (!vis[child]) dfs(child);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int v, e; 
    cin >> v >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;          
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    vector<int> rep;

    for (int i = 1; i <= v; i++) {  
        if (!vis[i]) {
            dfs(i);
            rep.push_back(i);
        }
    }

    cout << rep.size() - 1 << "\n";
    for (int i = 0; i < (int)rep.size() - 1; i++) {
        cout << rep[i] << " " << rep[i + 1] << "\n";
    }

    return 0;
}
