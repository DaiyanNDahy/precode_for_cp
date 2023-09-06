#include "bits/stdc++.h"
using namespace std;

long long ncr[31][31];

int main(){
   
   ncr[0][0]=1;

   int limncr=30;

   for(int i=1;i<=limncr;i++)
    for(int j=0;j<=limncr;j++){
     
     if(j>i) ncr[i][j]=0;

     else if(j==i||j==0) ncr[i][j]=1;

     else ncr[i][j]=ncr[i-1][j-1]+ncr[i-1][j];
   
   }
   

 
   return 0;
}