// #include<bits/stdc++.h>
// using namespace std;

// int dis[105];
// vector<pair<int,int>> adj_list[105];

// void dijkstra(int src){
//     dis[src] = 0;
//     priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
//     pq.push({0, src});
//     while (!pq.empty())
//     {
//         pair<int,int> parent = pq.top();
//         pq.pop();

//         int parent_node = parent.second;
//         int parent_dis = parent.first;

//         for(auto child : adj_list[parent_node]){
//             int child_node = child.second;
//             int child_dis = child.first;
//             if(parent_dis + child_dis < dis[child_node]){
//                 dis[child_node] = parent_dis + child_dis;
//                 pq.push({dis[child_node], child_node});
//             }
//         }
//     }
    
// }
// int main(){
//     int n, e; cin >> n >> e;
//     while (e--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         adj_list[a].push_back({c, b});
//         adj_list[b].push_back({c, a});
//     }

//     for(int i = 0; i<n; i++){
//         dis[i] = INT_MAX;
//     }

//     dijkstra(0);

//     for(int i = 0; i<n; i++){
//         cout << dis[i] << " ";
//     }
    
//     return 0;
// }

//using cmp for maintain priority queue
#include<bits/stdc++.h>
using namespace std;
int dis[105];
vector<pair<int,int>> adj_list[105]; // (neighbor, weight)
// struct cmp {
//     bool operator()(pair<int,int>& a, pair<int,int>& b) {
//         return a.first > b.first;  // ছোট distance আগে আসবে
//     }
// };
// cmp use korte hobe na karon {dis, node} ebabe rakteci queue te
void dijkstra(int src, int n){
    for(int i=0; i<n; i++) dis[i] = INT_MAX;
    dis[src] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, src}); // (distance, node)
    while (!pq.empty()){
        auto parent = pq.top();
        pq.pop();
        int parent_node = parent.second;
        int parent_dis = parent.first;

        if(parent_dis > dis[parent_node]) continue; 
        
        for(auto child : adj_list[parent_node]){
            int child_node = child.first;
            int child_dis = child.second;
            if(parent_dis + child_dis < dis[child_node]){
                dis[child_node] = parent_dis + child_dis;
                pq.push({dis[child_node], child_node});
            }
        }
    }
}

int main(){
    int n, e; cin >> n >> e;
    while (e--){
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    dijkstra(0, n);
    for(int i = 0; i<n; i++){
        cout << dis[i] << " ";
    }
    return 0;
}
