#include<bits/stdc++.h>

using namespace std;

vector <int> adj_list[1000];
int cost[1000][1000];
int dist[1000];

void Dijkstra(int srce)
{
    int u,v,i;
    queue <int> q;
    q.push(srce);
    dist[srce]=0;
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        for (i=0;i<adj_list[u].size();i++)
        {
            v = adj_list[u][i];
            if (dist[u]+cost[u][v]<dist[v])
            {
                dist[v]=dist[u]+cost[u][v];
                q.push(v);
            }
        }
    }
}

int main()
{
    for (int i=0;i<=1000;i++)
    {
        dist[i] = INT_MAX;
    }
    int n,u,v,i,w,src,N;
    printf("Enter the total number of nodes : ");
    cin >> N;
    printf("Enter the total number of edges : ");
    cin >> n;
    printf("Enter the cost between two virtices sequencially :\n");
    for (i=0;i<n;i++)
    {
        cin >> u >> v >> w;
        adj_list[u].push_back(v);
        cost[u][v] = w;
    }
    printf("Enter the source vertex : ");
    cin >> src;
    Dijkstra(src);
    printf("\n");
    printf("The minimum distance from the source vertex :%d\n",src);
    for (i=1;i<=N;i++)
    {
        //cout << i << " -> " << dist[i] << endl;
        printf("%d -> %d = %d\n",src,i,dist[i]);
    }
    return 0;
}
