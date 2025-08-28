#include<bits/stdc++.h>
using namespace std;

int n, m; 
char grid[105][105];
bool visited[105][105];
int level[105][105];
vector<pair<int,int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int new_si, int new_sj){
    return new_si >= 0 && new_si < n && new_sj >= 0 && new_sj < m;
}

void bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty()) {
        pair<int,int> parent = q.front();
        q.pop();

        int parent_i = parent.first;
        int parent_j = parent.second;

       

        for(int i = 0; i < 4; i++){
            int new_si = parent_i + d[i].first;
            int new_sj = parent_j + d[i].second;  
            
            if(isValid(new_si, new_sj) && !visited[new_si][new_sj]){  
                q.push({new_si, new_sj});
                visited[new_si][new_sj] = true;
                level[new_si][new_sj] = level[parent_i][parent_j] + 1;
            }
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    bfs(si, sj);

    int shortest_path_count = level[di][dj];
    cout << shortest_path_count << endl;

    return 0;
}