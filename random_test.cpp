#include "bits/stdc++.h"
using namespace std;
#define ll long long

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

inline ll gen_random(ll l, ll r){
    return uniform_int_distribution<ll>(l,r)(rng);
}
int main()
{

    // int n;
    // n=(rand()+10)%20+1;

    // printf("%d\n",n);
    // for(int i=0; i<n; i++)
    //     printf("%d\n",(abs(rand())+100000)%10000);
    printf("%lld\n",gen_random(1,2));

    return 0;
}
