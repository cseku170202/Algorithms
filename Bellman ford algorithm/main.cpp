/// BellmanFord
#include<bits/stdc++.h>

using namespace std;

struct EDGE
{
    int u, v, w;
};

int n, m;
int dist[100];

EDGE E[100];

void BellmanFord(int s)
{
    for (int i = 1; i <= n; i++) dist[i] = 1000000;
    dist[s] = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (dist[E[j].u] + E[j].w < dist[E[j].v]) {
                dist[E[j].v] = dist[E[j].u] + E[j].w;
            }
        }
    }
    for (int j = 0; j < m; j++) {
        if (dist[E[j].u] + E[j].w < dist[E[j].v]) {
                cout << "Negative cycle" << endl;
                return;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << i << " " << dist[i] << endl;
    }
}

int main()
{
    int x, y, z, s;
    cin >> n;
    cin >> m;
    for (int i = 0; i < m; i++) {
       cin >> x >> y >> z;
       E[i].u = x;
       E[i].v = y;
       E[i].w = z;
    }
    cin >> s;
    BellmanFord(s);
    return 0;
}
