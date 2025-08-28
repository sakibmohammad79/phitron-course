#include<bits/stdc++.h>
using namespace std;

int main(){
    int v, e; cin >> v >> e;
    vector<pair<int,int>> edge_list;
    while (e--)
    {
        int a, b; cin >> a >> b;
        if((a >= 0 && a < v) && (b >= 0 && b < v)){
            edge_list.push_back({a,b});
        }
    }

    //print
    for(auto edge : edge_list){
        cout << edge.first << " " << edge.second << endl;
    }
    
    return 0;
}