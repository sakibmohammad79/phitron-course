#include <bits/stdc++.h>
using namespace std;

int par[1005];
int group_size[1005];

int find(int node) {
    if (par[node] == -1) return node;
    return par[node] = find(par[node]); 
}

void dsu_union(int node1, int node2) {
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (leader1 == leader2) return;

    if (group_size[leader1] >= group_size[leader2]) {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    } else {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        par[i] = -1;
        group_size[i] = 1;
    }

    vector<pair<int,int>> rmvEdg;
    vector<pair<int,int>> connection;

    // read edges
    for (int i = 1; i <= n-1; i++) {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);
        if (leaderA == leaderB) {
            rmvEdg.push_back({a, b}); 
        } else {
            dsu_union(a, b);
        }
    }

  
    for (int i = 2; i <= n; i++) {   
        int leaderA = find(1);
        int leaderB = find(i);
        if (leaderA != leaderB) {
            connection.push_back({1, i});
            dsu_union(1, i);
        }
    }

    cout << rmvEdg.size() << "\n";
    for (int i = 0; i < (int)rmvEdg.size(); i++) {
        cout << rmvEdg[i].first << " " << rmvEdg[i].second << " "
             << connection[i].first << " " << connection[i].second << "\n";
    }

    return 0;
}
