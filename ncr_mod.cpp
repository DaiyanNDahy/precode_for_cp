#include "bits/stdc++.h"
using namespace std;

const int m=1000000007;

long long fact[2001];

long long bigmod(long long x, long long r){

    if(r==0) return 1;

    if(r%2==1) return (bigmod(x,r-1)*x)%m;

    long long y=bigmod(x,r/2);

    y=(y*y)%m;

    return y;
}

void modfactorial(){

fact[0]=1;

for(int i=1;i<=2000;i++) fact[i]=(fact[i-1]*i)%m;

}

long long ncr(long long n,long long r){

if(r>n) return 0;

return ((fact[n]*bigmod(fact[n-r],m-2))%m*bigmod(fact[r],m-2))%m;

}