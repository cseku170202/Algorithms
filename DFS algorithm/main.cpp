
/*
   dfs
   3 (number of node)
   1 2
   2 3
   1 3
*/

#include<bits/stdc++.h>

using namespace std;

vector <int> node[100];
int color[100];
int parent[100];
int cnt = 0;

void dfs(int u)
{
    color[u] = 1;
    for (int i = 0; i < node[u].size(); i++) {
        int v = node[u][i];
        if (color[v] == 0) {
            parent[v] = u;
            dfs(v);
        }
        color[v] = 2;
    }
}

int main()
{
    memset(color, 0, sizeof(color));
    memset(parent, 0, sizeof(color));
    int n, u, v, i, srch;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> u >> v;
        if (i == 0) srch = u;
        node[u].push_back(v);
        node[v].push_back(u);
    }
    dfs(srch);
    return 0;
}
