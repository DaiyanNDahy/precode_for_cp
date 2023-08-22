#include "bits/stdc++.h"
using namespace std;

vector<int> adj[100];
int vis[100];

//call it by dfs(s,sentinel)
//before calling make vis[] all zero

void dfs(int at, int prev){

    if(vis[at]) return; //if(previously visited) 
    
    vis[at]=1;

    for(int v:adj[at])
     if(v!=prev) dfs(v,u);
}

int main(){

    return 0;
}