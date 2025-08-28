#include <bits/stdc++.h>
using namespace std;
int n, m;
int vis[1005][1005];
bool isSame = false;
vector<pair<int,int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int ci, int cj) {
    return ci >= 0 && ci < n && cj >= 0 && cj < m;
}
void dfs(int si, int sj, int di, int dj, vector<vector<char>>& grid) {
    vis[si][sj] = true;
    if (si == di && sj == dj) {
        isSame = true;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.') {
            dfs(ci, cj, di, dj, grid);
        }
    }
}
int main() {
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    int si, sj; cin >> si >> sj;
    int di, dj; cin >> di >> dj;
    if (grid[si][sj] == '-' || grid[di][dj] == '-') {
        cout << "NO" << endl; 
        return 0;
    }
    dfs(si, sj, di, dj, grid);
    if(isSame)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
