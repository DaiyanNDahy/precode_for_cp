#include "bits/stdc++.h"
using namespace std;
bool flag[1000001];
int cnt[1000001],ar[1000001],prime[1000001];
void sieve(int n)
{    
    for(int i=1;i<=n;i++) 
     ar[i]=i;

    for(int i=2;i<=n;i++)
     for(int j=i;j<=n;j+=i){
        
        if(ar[j]%i==0) prime[j]++;
        while(ar[j]%i==0) ar[j]/=i;
    }
    
}
int main()
{   
   
    
    int n=1000000;
    sieve(n);

   
    return 0;
}
