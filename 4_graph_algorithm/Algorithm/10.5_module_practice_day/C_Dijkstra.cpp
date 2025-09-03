#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, e;
    cin >> n >> e;
    
    vector<vector<pair<int,int>>> adj_list(n + 1);
    
    for(int i = 0; i < e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].emplace_back(b, c);
        adj_list[b].emplace_back(a, c);
    }

    vector<long long> dis(n + 1, LLONG_MAX);
    vector<int> parent(n + 1, -1);
    vector<bool> visited(n + 1, false);
    
    // Dijkstra's algorithm
    dis[1] = 0;
    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> q;
    q.push({0LL, 1});

    while (!q.empty()) {
        long long p_dis = q.top().first;
        int p_node = q.top().second;
        q.pop();

        // Skip if already processed
        if(visited[p_node]) continue;
        visited[p_node] = true;
        
        // Early termination when target reached
        if(p_node == n) break;

        // Process all neighbors
        for(int i = 0; i < adj_list[p_node].size(); i++) {
            int child_node = adj_list[p_node][i].first;
            int child_dis = adj_list[p_node][i].second;

            // Only relax if we found a shorter path
            if(dis[p_node] + child_dis < dis[child_node]) {
                dis[child_node] = dis[p_node] + child_dis;
                parent[child_node] = p_node;
                q.push({dis[child_node], child_node});
            }
        }
    }

    // Check if path exists
    if(dis[n] == LLONG_MAX) {
        cout << -1 << "\n";
        return 0;
    }

    // Path reconstruction 
    vector<int> path;
    path.reserve(n); 
    
    int current = n;
    while(current != -1) {
        path.push_back(current);
        current = parent[current];
    }

    // Output path in correct order
    for(int i = path.size() - 1; i >= 0; i--) {
        cout << path[i];
        if(i > 0) cout << " ";
    }
    cout << "\n";
    
    return 0;
}