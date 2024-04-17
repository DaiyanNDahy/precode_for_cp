#include "bits/stdc++.h"
using namespace std;

struct edge
{
    int u,v,w;
};

int main()
{


    int n,m,k;
    scanf("%d%d",&n,&m);
    vector< edge>E(m);
    int dist[101];

    for(int i=0; i<m; i++)
        cin>>E[i].u>>E[i].v>>E[i].w;

    for(int i=1; i<=n; i++)
        dist[i]=1e9;

    dist[1]=0;

    for(int i=1; i<n; i++)
    {

        for(edge e: E)
            dist[e.v]=min(dist[e.v],dist[e.u]+e.w);
    }


    printf("0");
    for(int i=2; i<=n; i++)
        printf(" %d",dist[i]==1e9?30000:dist[i]);

    printf("\n");

    return 0;
}
