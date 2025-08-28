#include<bits/stdc++.h>
using namespace std;

int v, e;
vector<vector<int>> adj_list; 
vector<bool> visited;

int dfs(int sv){
    visited[sv] = true;
    int cnt = 1; // sv নিজেই count হবে
    for(int child : adj_list[sv]){
        if(!visited[child]){
            cnt += dfs(child);
        }
    }
    return cnt;
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

    vector<int> comp_sizes;

    for(int i = 0; i < v; i++){
        if(!visited[i]){
            int size = dfs(i);     // এই component এর node সংখ্যা
            comp_sizes.push_back(size);
        }
    }

    // output
    sort(comp_sizes.begin(), comp_sizes.end());
    for(int sz : comp_sizes){
        cout << sz << " ";
    }


    return 0;
}
