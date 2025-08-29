#include<bits/stdc++.h>
using namespace std;

int n, m;
int vis[105][105];
int level[105][105];

bool isValid(int ci, int cj){
    return ci>=0 && ci<n && cj>=0 && cj<m;
}

vector<pair<int,int>> d = {
    {-2, 1}, {-2, -1}, {-1, 2}, {1, 2},
    {2, 1}, {2, -1}, {-1, -2}, {1, -2}
};

void bfs(int ki, int kj){
    vis[ki][kj] = true;
    level[ki][kj] = 0;
    queue<pair<int,int>> q;
    q.push({ki,kj});

    while (!q.empty()) {
        pair<int,int> p = q.front();
        q.pop();
        int p_i = p.first; 
        int p_j = p.second;
        for(int i = 0; i<8; i++){
            int ci = p_i + d[i].first;
            int cj = p_j + d[i].second;
            if(isValid(ci,cj) && !vis[ci][cj]){
                vis[ci][cj] = true;
                q.push({ci,cj});
                level[ci][cj] = level[p_i][p_j] + 1;
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        int ki, kj; cin >> ki >> kj;
        int qi, qj; cin >> qi >> qj;
        bfs(ki,kj);
        if(level[qi][qj] == -1)
            cout << -1 << endl;
        else
            cout << level[qi][qj] << endl;
    }
    return 0;
}
