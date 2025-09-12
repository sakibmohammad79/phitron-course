#include<bits/stdc++.h>
using namespace std;

int n;
int vis[105][105];
int dis[105][105];
char grid[105][105];

vector<pair<int,int>> direction = {{-1, 0}, {1,0}, {0, -1}, {0, 1}};
bool isValid(int ci, int cj){
    return ci >= 0 && ci < n && cj >= 0 && cj < n;
}

void bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    dis[si][sj] = 0;
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();
        int par_i = p.first;
        int par_j = p.second;
        for(int i = 0; i<4; i++){
            int ci = par_i + direction[i].first;
            int cj = par_j + direction[i].second;

            if(isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != 'T'){
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par_i][par_j] + 1;
            }

        }
    }
    
}

int main(){
    cin >> n;
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    int si, sj, di, dj;
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(grid[i][j] == 'S'){
                si = i; sj = j;
            }
            if(grid[i][j] == 'E'){
                di = i; dj = j;
            } 
        }
    }
    bfs(si, sj);
    cout << dis[di][dj] << endl;
    return 0;
}