
/*kruskal
    input
    3     (numbers of node)
    1 2 2 (1 theke 2 te jai 2 weight)
    2 3 2
    3 1 2

    output
    4 (mst)
*/

#include<bits/stdc++.h>

using namespace std;

int parent[102];

struct EDGE
{
    int u, v, w;
};

int FindParent(int node)
{
    if (node == parent[node]) return node;
    return parent[node] = FindParent(parent[node]);
}

bool com(EDGE A, EDGE B)
{
    return A.w < B.w;
}

int main()
{
    for (int i = 1; i <= 100; i++) parent[i] = i;
    EDGE point[100];
    int n, cost;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> point[i].u >> point[i].v >> point[i].w;
    }
    sort(point + 1, point + n + 1, com);
    cost = 0;
    for (int i = 1; i <= n; i++) {
        int a = FindParent(point[i].u);
        int b = FindParent(point[i].v);
        if (a != b) {
            cost += point[i].w;
            parent[a] = b;
        }
    }
    cout << cost << endl;
    return 0;
}
