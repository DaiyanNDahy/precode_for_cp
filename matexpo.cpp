#include "bits/stdc++.h"
using namespace std;
#define m 1000000007

int n;

struct matrix{

long long A[50][50];

};

matrix operator*(matrix X, matrix Y){

matrix ans;

for(int i=0;i<n;i++)
 for(int j=0;j<n;j++){

      long long sum=0;

      for(int k=0;k<n;k++)
        sum=(sum+(X.A[i][k]*Y.A[k][j])%m)%m;

      ans.A[i][j]=sum;
 }

 return ans;
}

matrix Answer,I;

matrix bigmod(matrix x, long long r){

    if(r==0) {

      for(int i=0;i<n;i++)
       I.A[i][i]=1;

      return I;
    }

    if(r%2==1) return (bigmod(x,r-1)*x);

    matrix y=bigmod(x,r/2);

    y=y*y;

    return y;
}

int main(){

long long k;

scanf("%d%lld",&n,&k);

matrix can;

for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
   scanf("%lld",&can.A[i][j]);

Answer=bigmod(can,k);

    return 0;
}