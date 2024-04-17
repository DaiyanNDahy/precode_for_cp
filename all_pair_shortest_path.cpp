#include "bits/stdc++.h"
using namespace std;
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,w,p,a,b;
    cin>>n>>w>>p;
    long long dist[n+1][n+1],c;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            dist[i][j]=(i==j?0:1e17);
    while(w--)
    {
        cin>>a>>b>>c;
        dist[a][b]=c;
        dist[b][a]=c;
    }
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            for(int k=1; k<=n; k++)
                dist[j][k]=min(dist[j][k],dist[j][i]+dist[i][k]);
    while(p--)
    {
        cin>>a>>b;
        cout<<dist[a][b]<<'\n';
    }
    return 0;
}
