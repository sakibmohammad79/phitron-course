#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<pair<ll,ll>> adj_list[100005];
ll dis[100005];
ll par[100005];

void dijkstra(ll src, ll n){
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    dis[src] = 0;
    pq.push({0, src});
    while (!pq.empty())
    {
        auto [par_dis, par_node] = pq.top();
        pq.pop();

        if (par_dis > dis[par_node]) continue; 

        for(auto [child_node, child_dis] : adj_list[par_node]){
            if(par_dis + child_dis < dis[child_node]){
                dis[child_node] = par_dis + child_dis;
                pq.push({dis[child_node], child_node});
                par[child_node] = par_node;
            }
        }
    }
}

int main(){
    ll n, e;
    cin >> n >> e;

    while (e--){
        ll a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    for(int i = 1; i <= n; i++){
        dis[i] = LLONG_MAX;
        par[i] = -1;
    }

    dijkstra(1, n);

    if(dis[n] == LLONG_MAX){
        cout << -1 << endl;
    }
    else {
        vector<ll> path;
        ll node = n;
        while (node != -1){
            path.push_back(node);
            node = par[node];
        }

        reverse(path.begin(), path.end());

        for(ll val : path)     
            cout << val << " ";
        cout << endl;
    }
    return 0;
}
