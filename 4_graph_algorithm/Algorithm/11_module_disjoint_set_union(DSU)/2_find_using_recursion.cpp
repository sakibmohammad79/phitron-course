#include<bits/stdc++.h>
using namespace std;

int par[1005];

int find(int node){
    if(par[node] == -1){
        return node;
    }
    
    int parent = find(par[node]);
    return parent;
}

int main(){

    memset(par, -1, sizeof(par));

    par[0] = 1;
    par[1] = -1;
    par[2] = 1;
    par[3] = 1;
    par[4] = 5;
    par[5] = 3;

    int findResult = find(4);
    cout << findResult << endl;

    
    return 0;
}