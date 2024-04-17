#include "bits/stdc++.h"
using namespace std;

long long phi[1000001],mark[1000001];
void sievephi(int n){
    int i,j;
    mark[1]=1;
    for(i=1;i<=n;i++) phi[i]=i;
    for(i=2;i<=n;i++)
      if(!mark[i])
        for(j=i;j<=n;j+=i){
            mark[j]=1;
            phi[j]=phi[j]/i*(i-1);
        }
}
int main(){
    sievephi(1000000);
    long long n,m;
    scanf("%lld%lld",&n,&m);
    printf("%lld %lld %lld\n",m*phi[n]-phi[n]*phi[m],n*phi[m]-phi[n]*phi[m],phi[n]*phi[m]);
}