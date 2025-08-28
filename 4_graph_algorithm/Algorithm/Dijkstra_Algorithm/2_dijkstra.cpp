#include<bits/stdc++.h>
using namespace std;
int dis[105];
vector<pair<int,int>> adj_list[105];

void dijkstra(int src){
    dis[src] = 0;
    queue<pair<int,int>> q;
    q.push({src, 0});

    while (!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();

        int p_node = p.first;
        int p_dis = p.second;

        for(auto child : adj_list[p_node]){
            int child_node = child.first;
            int child_dis = child.second;

            if(p_dis + child_dis < dis[child_node]){
                dis[child_node] = p_dis + child_dis;
                q.push({child_node, dis[child_node]});
            }
        }
    }
    
}

int main(){
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }

    for(int i = 0; i<n; i++){
        dis[i] = INT_MAX;
    }

    dijkstra(0);

    for(int i = 0; i<n; i++){
        cout << dis[i] << " ";
    }
    
    return 0;
}