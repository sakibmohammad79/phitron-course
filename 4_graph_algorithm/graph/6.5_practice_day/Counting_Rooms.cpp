#include<bits/stdc++.h>
using namespace std;
int n, m;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
bool isValid(int ci, int cj){
    return ci >= 0 && ci < n && cj >= 0 && cj < m;
}
void bfs(int si, int sj){
    vis[si][sj] = true;
    queue<pair<int,int>> q;
    q.push({si, sj});
    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();
        for(int i = 0; i<4; i++){
            int ci = p.first + d[i].first;
            int cj = p.second + d[i].second;
            if(isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.'){
                q.push({ci,cj});
                vis[ci][cj] = true;
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
    memset(vis, false, sizeof(vis));
    int count = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(grid[i][j] == '.'){
                if(!vis[i][j]){
                    bfs(i,j);
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}