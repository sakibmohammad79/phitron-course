#include<bits/stdc++.h>
using namespace std;
int weight[1005];
int val[1005];
int dp[1005][1005];
int knapsack(int i, int max_weight){
    if(max_weight <= 0 || i < 0) 
        return 0;
    if(dp[i][max_weight] != -1){
        return dp[i][max_weight];
    }
    if(max_weight >= weight[i]){
        int option1 = knapsack(i, max_weight - weight[i]) + val[i];
        int option2 = knapsack(i-1, max_weight);
        dp[i][max_weight] = max(option1, option2);
        return dp[i][max_weight];
    }
    else {
        dp[i][max_weight] = knapsack(i-1, max_weight);
        return dp[i][max_weight];
    }
}
int main(){
    int n; cin >> n;
    for(int i = 0; i<n; i++)
        cin >> val[i];
    for(int i = 0; i<n; i++)
        cin >> weight[i];

    int max_weight;
    cin >> max_weight;

    for(int i = 0; i<=n; i++)
        for(int j = 0; j<=max_weight; j++)
            dp[i][j] = -1;

    cout << knapsack(n-1, max_weight);
    
    return 0;
}