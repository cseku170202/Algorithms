
/*
  bfs
  3 (total number of node)
  3 (total number of edge)
  1 2
  2 3
  1 3
  output:
  1 0 (level)
  2 1
  3 1
*/


#include<bits/stdc++.h>

using namespace std;

int level[100];
int visit[100];
int prev[200];
vector <int> node[100];

void bfs(int srch)
{
    queue <int> q;
    int u, v, i;
    level[srch] = 0;
    visit[srch] = 1;
    q.push(srch);
    while (!q.empty()) {
        u = q.front();
        q.pop();
        for (i = 0; i < node[u].size(); i++) {

            v = node[u][i];
            if (visit[v] == 1 && prev[u] != v) {
                cout << "YES" << endl;
            }
            if (visit[v] == 0) {
                visit[v] = 1;
                prev[u] = v;
                level[v] = level[u] + 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    memset(level, 0, sizeof(level));
    memset(visit, 0, sizeof(level));

    queue <int> q;
    int n, u, v, i, j, srch, k, mx, N;
    cin >> N;///number of node
    cin >> n;///number of edge
    for (i = 1; i <= n; i++)
    {
        cin >> u >> v;
        node[u].push_back(v);
        node[v].push_back(u);
    }
    cin >> srch;///source
    bfs(srch);
    for (i = 1; i <= N; i++) {
        cout << i << " " << level[i] << endl;
    }
    return 0;
}
