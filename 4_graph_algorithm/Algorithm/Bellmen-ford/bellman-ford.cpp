#include<bits/stdc++.h>
using namespace std;

int dis[1005];

class Edge{
    public:
        int a;
        int b;
        int c;
        Edge(int a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
};

int main(){
    int v, e; cin >> v >> e;
    vector<Edge> adj_list;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list.push_back(Edge(a, b, c));
    }

    for(int i = 0; i<v; i++){
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    for(int i = 0; i<v-1; i++){
        for(auto edge : adj_list){
            int a = edge.a;
            int b = edge.b;
            int c = edge.c;

            if(dis[a] != INT_MAX && dis[a] + c < dis[b]){
                dis[b] = dis[a] + c;
            }
        }
    }

    for(int i = 0; i<v; i++){
        cout << i << " => " << dis[i] << endl;
    }
    
    return 0;
}