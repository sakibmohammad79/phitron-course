#include<bits/stdc++.h>
using namespace std;

char adj_mat[1005][1005];
bool visited[1005][1005];
vector<pair<int,int>> d = {{-1, 0}, {1,0}, {0, -1}, {0,1}};
int n, m;

bool dfs(int current_x, int current_y, int target_x, int target_y){
    
    if(current_x == target_x && current_y == target_y){
        return true;
    }

    visited[current_x][current_y] = true;

    for (int i = 0; i < 4; i++)
    {
        int new_x = current_x + d[i].first;
        int new_y = current_y + d[i].second;

        if(new_x >= 0 && new_x < n && new_y >= 0 && new_y < m){
            if((adj_mat[new_x][new_y] == '.' || adj_mat[new_x][new_y] == 'B') && !visited[new_x][new_y]){
                if(dfs(new_x, new_y, target_x, target_y)){
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> adj_mat[i][j];
        }
    }
    
    int a_x, a_y, b_x, b_y; 
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(adj_mat[i][j] == 'A'){
                a_x = i;
                a_y = j;
            }
            else if(adj_mat[i][j] == 'B'){
                b_x = i;
                b_y = j;
            }
        }
    }
    
    memset(visited, false, sizeof(visited));

    bool result = dfs(a_x, a_y, b_x, b_y);
    if(result)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        
    return 0;
}