#include <bits/stdc++.h>
using namespace std;

vector<int> edge_list[1005]; // adjacency list
bool visited_node[1005];

void breadth_first_search(int src_node) {
    if (src_node < 0) return; // safety check
    queue<int> q;
    q.push(src_node);
    visited_node[src_node] = true; // mark starting node visited

    while (!q.empty()) {
        int p = q.front();
        q.pop();

        cout << p << " ";

        for (int connection : edge_list[p]) {
            if (!visited_node[connection]) {
                q.push(connection);
                visited_node[connection] = true; 
            }
        }
    }
}

int main() {
    int v, e;
    cin >> v >> e;

    // store in adjacency list
    while (e--) {
        int a, b;
        cin >> a >> b;
        edge_list[a].push_back(b);
        edge_list[b].push_back(a);
    }

    memset(visited_node, false, sizeof(visited_node));

    breadth_first_search(0);

    return 0;
}
