#include "bits/stdc++.h"
using namespace std;

int main(){

int n,m;
scanf("%d%d",&n,&m);

vector< pair<int, long long> >adj[n+1];

while(m--){

    int u,v;
    long long w;
    scanf("%d%d%lld",&u,&v,&w);

    adj[u].push_back({v,w});
    adj[v].push_back({u,w});

}

long long dis[n+1];

for(int i=1;i<=n;i++) dis[i]=LLONG_MAX;

int src=1;
dis[src]=0;

priority_queue< pair<long long,int> >pq;

pq.push({0,1});

while(!pq.empty()){

    auto x=pq.top();

    pq.pop();

    int u=x.second;
    long long d=-x.first;
    
    if(dis[u]<d) continue;

    int sz= adj[u].size();

    for(int i=0;i<sz;i++){

        auto y=adj[u][i];

        int v=y.first;
        long long w=y.second;

        if(dis[v]>d+w){

            dis[v]=d+w;

            pq.push({-dis[v],v});

        }

    }


}

printf("0");

for(int i=2;i<=n;i++) 
 printf(" %lld",dis[i]);

 puts("");

    return 0;
}