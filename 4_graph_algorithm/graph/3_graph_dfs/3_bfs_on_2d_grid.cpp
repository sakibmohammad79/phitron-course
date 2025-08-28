#include<bits/stdc++.h>
using namespace std;

int n, m; 
char grid[105][105];
bool visited[105][105];
vector<pair<int,int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int new_si, int new_sj){
    return new_si >= 0 && new_si < n && new_sj >= 0 && new_sj < m;
}

void bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty()) {
        pair<int,int> parent = q.front();
        q.pop();

        int parent_i = parent.first;
        int parent_j = parent.second;

        cout << parent_i << " " << parent_j << endl;

        for(int i = 0; i < 4; i++){
            int new_si = parent_i + d[i].first;
            int new_sj = parent_j + d[i].second;  
            
            if(isValid(new_si, new_sj) && !visited[new_si][new_sj]){  
                q.push({new_si, new_sj});
                visited[new_si][new_sj] = true;
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

    int si, sj;
    cin >> si >> sj;
    bfs(si, sj);
    
    return 0;
}