#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1005][1005];
int vis[1005][1005];
pair<int,int> parent[1005][1005];

vector<pair<int,int>> directions = {{0,1}, {0,-1}, {-1,0}, {1,0}};

bool isValid(int row, int col) {
    return row >= 0 && row < n && col >= 0 && col < m;
}

void bfs(int si,int sj){
    vis[si][sj] = true;
    queue<pair<int,int>> q;
    q.push({si, sj});

    while (!q.empty()) {
        auto p = q.front();
        q.pop();

        int p_i = p.first;
        int p_j = p.second;

        for(int i = 0; i<4; i++){
            int ci = p_i + directions[i].first;
            int cj = p_j + directions[i].second;
            if(isValid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D')){
                q.push({ci,cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {p_i, p_j};
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> grid[i][j];
        }
    }

    memset(vis, 0, sizeof(vis));
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            parent[i][j] = {-1, -1};

    int si, sj, di, dj;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(grid[i][j] == 'R'){
                 si = i; sj = j; }
            else if(grid[i][j] == 'D'){
                 di = i; dj = j; }
        }
    }

    bfs(si, sj);

   
    if (!vis[di][dj]) {
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                cout << grid[i][j];
            }
            cout << "\n";
        }
        return 0;
    }

    int node_i = di, node_j = dj;
    while (!(node_i == si && node_j == sj)) {
        if(grid[node_i][node_j] != 'D')
            grid[node_i][node_j] = 'X';
        auto par = parent[node_i][node_j];
        node_i = par.first;
        node_j = par.second;
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << grid[i][j];
        }
        cout << "\n";
    }

    return 0;
}
