#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define INF (1LL<<62)

int parent[100001];
int sz[100001];

bool f[100000];

void make_set(int n){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}

int find_set(int u){
    if(parent[u]==u) return u;
    return parent[u] = find_set(parent[u]);
}

void union_set(int u, int v){
      int a = find_set(u);
      int b = find_set(v);

    if(sz[a]<sz[b]) swap(a, b);
    if(u!=v){
        parent[b] = a;
        sz[a] += sz[b];
    }
}


int main(){
   
  
   return 0;
}