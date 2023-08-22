#include "bits/stdc++.h"
using namespace std;

vector<int>primes;

bool mark[100000000];

void sieve(int n){

   for(int i=3;i*i<n;i+=2)
    if(!mark[i-1])
    for(int j=i*i;j<n;j+=i+i)
       mark[j-1]=1;

    primes.push_back(2);

    for(int i=3;i<n;i+=2)
     if(!mark[i-1]) primes.push_back(i);
}

int main(){
    
    sieve(100000000);
    
    
    return 0;
}