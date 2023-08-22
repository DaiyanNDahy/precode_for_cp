#include <bits/stdc++.h>
using namespace std;

//adj[a].push_back(b);
//for an edge from a to b.

vector<int>adj[100];

int visited[100];//0 if not visited , 1 if visited

//s is the starting vertex
// n is the number of vertices (0 ... n-1)

void bfs(int s, int n){

    for(int i=0;i<n;i++) vis[i]=0;

    queue<int>Q;

    Q.push(s);
    visited[s]=1;

    while(!Q.empty()){
       
        int u=Q.front();
        Q.pop();

        for(int i=0;i<adj[u].size();i++)
         if(!visited[adj[u][i]]){

            int v=adj[u][i];
            visited[v]=1;
            
            Q.push(v);
         }
    }
}