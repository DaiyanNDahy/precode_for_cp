#include "bits/stdc++.h"
using namespace std;

const int m=1000000007;

long long fact[200001],dp[3001],inv_fact[200001];

long long bigmod(int x, int r){

    if(r==0) return 1;

    if(r%2==1) return (bigmod(x,r-1)*x)%m;

    long long y=bigmod(x,r/2);

    y=(y*y)%m;

    return y;
}

void modfactorial(){

fact[0]=1;

inv_fact[0]=bigmod(1,m-2);

for(int i=1;i<=200000;i++) fact[i]=(fact[i-1]*i)%m,inv_fact[i]=bigmod(fact[i],m-2);
}

long long ncr(int n,int r){

if(r>n) return 0;

return ((fact[n]*inv_fact[n-r])%m*inv_fact[r])%m;

}

int main(){
   
   modfactorial();

   
   return 0;
}
