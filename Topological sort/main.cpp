
/*
  topological sort
*/
#include<bits/stdc++.h>

using namespace std;

vector <int> node[200];
int color[200];
stack <int> st;

void dfs(int u)
{
    int i, v;
    color[u] = 1;
    for (i = 0; i < node[u].size(); i++) {
        v = node[u][i];
        if (color[v] == 0) {
            dfs(v);
        }
    }
    st.push(u);
    color[u] = 2;
}

int main()
{
    memset(color, 0, sizeof(color));
    int n, u, v, i, cnt = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> u >> v;
        node[u].push_back(v);
    }
    for (i = 1; i <= n; i++) {
        if (color[i] == 0) {
            dfs(i);
        }
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
