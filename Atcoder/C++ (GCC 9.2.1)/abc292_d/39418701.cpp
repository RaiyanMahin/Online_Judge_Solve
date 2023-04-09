#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAXN = 2e5;

vector<int> adj[MAXN + 1];
bool visited[MAXN + 1];

void dfs(int u, int& vertices, int& edges) {
    visited[u] = true;
    vertices++;
    edges += adj[u].size();

    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v, vertices, edges);
        }
    }
}

bool is_valid_component(int u) {
    int vertices = 0, edges = 0;
    dfs(u, vertices, edges);

    return vertices == edges / 2;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool valid = true;
    for (int u = 1; u <= n; u++) {
        if (!visited[u]) {
            if (!is_valid_component(u)) {
                valid = false;
                break;
            }
        }
    }

    cout << (valid ? "Yes" : "No") << endl;

    return 0;
}
