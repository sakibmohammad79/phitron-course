#include<bits/stdc++.h>
using namespace std;

char adj_mat[1005][1005];
bool visited[1005][1005];
vector<pair<int,int>> directions = {{-1, 0}, {1,0}, {0, -1}, {0,1}};
int n, m;

int dfs(int current_x, int current_y){
    visited[current_x][current_y] = true;
    int roomCount = 1; 
    
    for (int i = 0; i < 4; i++)
    {
        int new_x = current_x + directions[i].first;
        int new_y = current_y + directions[i].second;

        if(new_x >= 0 && new_x < n && new_y >= 0 && new_y < m){
            if(adj_mat[new_x][new_y] == '.' && !visited[new_x][new_y]){
                roomCount += dfs(new_x, new_y);
            }
        }
    }
   return roomCount;
}

int main(){
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> adj_mat[i][j];
        }
    }
    
    memset(visited, false, sizeof(visited)); 
    vector<int> apartmentSizes;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(adj_mat[i][j] == '.' && !visited[i][j]){
                int size = dfs(i, j); 
                apartmentSizes.push_back(size);
            }
        }
    }

    sort(apartmentSizes.begin(), apartmentSizes.end());
    
  
    if(apartmentSizes.empty()){
        cout << 0 << endl; 
    } else {
        for(int size : apartmentSizes){
            cout << size << " ";
        }
        cout << endl;
    }
        
    return 0;
}