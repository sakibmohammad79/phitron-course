#include<bits/stdc++.h>
using namespace std;
class Edge {
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

int v, e;
long long dis[100005]; 
vector<Edge> adj_list;

bool bellman_ford(){  
    for(int i = 0; i < v-1; i++){
        for(auto [a,b,c] : adj_list){
           if(dis[a] != LLONG_MAX && dis[a] + c < dis[b]){  
                dis[b] = dis[a] + c;
           }
        }
    }

    for(auto [a,b,c] : adj_list){
           if(dis[a] != LLONG_MAX && dis[a] + c < dis[b]){
                return true; 
           }
    }
    return false;  
}

int main(){
    cin >> v >> e;
    while (e--) {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list.push_back(Edge(a,b,c));
    }
    for(int i = 1; i <= v; i++){  
        dis[i] = LLONG_MAX;
    }
    
    int src;
    cin >> src;
    dis[src] = 0;

    bool isCycle = bellman_ford();

    if(isCycle){
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }
    
    int t;
    cin >> t;
    
    while (t--) {  
        int des; 
        cin >> des;
        
        if(dis[des] == LLONG_MAX){
            cout << "Not Possible" << endl;
        }
        else{
            cout << dis[des] << endl;
        }
    }
    
    return 0;
}