#include<bits/stdc++.h>
using namespace std;

char grid[105][105];  // Fixed typo: gird -> grid
vector<vector<bool>> visited(105, vector<bool>(105));
vector<pair<int,int>> connection = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;  // Global variables for boundary check

bool isValid(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int si, int sj) {
    cout << si << " " << sj << endl;
    visited[si][sj] = true;

    for(int i = 0; i < 4; i++) {
        // Create new variables instead of modifying original
        int new_x, new_y;
        new_x = si + connection[i].first;
        new_y = sj + connection[i].second;
        
        // cout << "Checking: " << new_x << " " << new_y << endl;
        if(isValid(new_x, new_y) && !visited[new_x][new_y]){
            dfs(new_x, new_y);
        }
    }
}

int main() {
    cin >> n >> m;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];  // Fixed: gird -> grid
        }
    }
    
    int si, sj; 
    cin >> si >> sj;
    
    dfs(si, sj);
    
    return 0;
}