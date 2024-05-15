#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000;

int n, m;
vector<int> g[MAXN];
int vis[MAXN][MAXN];

void dfs(int u, int v) {
    vis[u][v] = 1;
    for (int i = 0; i < g[u].size(); i++) {
        int uu = g[u][i];
        if (!vis[uu][v]) dfs(uu, v);
    }
    for (int i = 0; i < g[v].size(); i++) {
        int vv = g[v][i];
        if (!vis[u][vv]) dfs(u, vv);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            memset(vis, 0, sizeof(vis));
            dfs(i, j);
            cout << vis[j][i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
