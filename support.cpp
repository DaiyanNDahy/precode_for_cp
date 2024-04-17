#include "bits/stdc++.h"
using namespace std;

int main(){   
   
   int t;
   scanf("%d",&t);
   while(t--){
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n]={0},start=0;
    for(int i=1;i<=n;i+=2){
        a[start]=i;
        a[start+k]=i+1;
        while(a[start]) start++;
    }
    for(int i=0;i<n;i++)
     printf("%d ",a[i]);
    puts("");
   }
   return 0;
}
