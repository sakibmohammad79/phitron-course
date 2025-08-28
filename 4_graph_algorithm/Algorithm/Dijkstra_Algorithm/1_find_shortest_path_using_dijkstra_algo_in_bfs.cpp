#include<bits/stdc++.h>
using namespace std;
int dis[105];
vector<vector<pair<int,int>>> adj_list(105);
void dijkstra(int src){
    dis[src] = 0;
    queue<pair<int,int>>  q;
    q.push({src, 0});
    
    while (!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();

        int p_node = p.first;
        int dis_of_p = p.second;

        for(auto child : adj_list[p_node]){
            int child_node = child.first;
            int dis_of_child = child.second;

            if(dis_of_p + dis_of_child < dis[child_node]){
                dis[child_node] =  dis_of_p + dis_of_child;
                q.push({child_node, dis[child_node]});
            }
        }
    }
    
}
int main(){
    int v, e;
    cin >> v >> e;
    while (e--)
    {
        int a,b,d;
        cin >> a >> b >> d;
        adj_list[a].push_back({b, d});
        adj_list[b].push_back({a, d});
    }
    for(int i = 0; i<v; i++){
        dis[i] = INT_MAX;
    }
    dijkstra(0);
    for(int i = 0; i<v; i++){
        cout << dis[i] << " ";
    }
    return 0;
}