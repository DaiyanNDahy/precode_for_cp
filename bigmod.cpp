#include "bits/stdc++.h"
using namespace std;

const int m=1000000007;

long long bigmod(long long x, long long r){

    if(r==0) return 1;

    if(r%2==1) return (bigmod(x,r-1)*x)%m;

    long long y=bigmod(x,r/2);

    y=(y*y)%m;

    return y;
}
