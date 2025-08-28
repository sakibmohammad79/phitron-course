#include<bits/stdc++.h>
using namespace std;

char adj_mat[1005][1005];
bool visited[1005][1005];
vector<pair<int,int>> d = {{-1, 0}, {1,0}, {0, -1}, {0,1}};
int n, m;

void dfs(int current_x, int current_y){
    visited[current_x][current_y] = true;
    for (int i = 0; i < 4; i++)
    {
        int new_x = current_x + d[i].first;
        int new_y = current_y + d[i].second;

        if(new_x >= 0 && new_x < n && new_y >= 0 && new_y < m){
            if(adj_mat[new_x][new_y] == '.' && !visited[new_x][new_y]){
                dfs(new_x, new_y);
            }
        }
    }
   
}

int main(){
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> adj_mat[i][j];
        }
    }

    memset(visited, false, sizeof(visited));
    
    int apartmentCount = 0; 
    int a_x, a_y;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(adj_mat[i][j] == '.'){
                a_x = i;
                a_y = j;
                if(!visited[i][j]){
                    dfs(a_x, a_y);
                    apartmentCount++;
                }

            }
            
        }
    }
   
    cout << apartmentCount << endl;
        
    return 0;
}