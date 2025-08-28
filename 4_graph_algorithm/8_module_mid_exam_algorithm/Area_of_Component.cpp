#include <bits/stdc++.h>
using namespace std;

int n, m; 
int vis[1005][1005];
vector<pair<int,int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int ci, int cj) {
    return ci >= 0 && ci < n && cj >= 0 && cj < m;
}
int areaSize;

void dfs(int si, int sj, vector<vector<char>>& grid) {
    vis[si][sj] = true;
    areaSize++;
    for (int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.') {
            dfs(ci, cj, grid);
        }
    }
}

int main() {
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    vector<int> areaCount;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && grid[i][j] == '.') {
                areaSize = 0;
                dfs(i, j, grid);
                areaCount.push_back(areaSize);
            }
        }
    }

    if(areaCount.empty())
        cout << -1 << endl;
    else
        cout << *min_element(areaCount.begin(), areaCount.end()) << endl;

    return 0;
}
