#include "bits/stdc++.h"
using namespace std;

int main(){
    
    int n=100000;

    for(int i=2;i<=n;i++){

        int x=i;

        printf("%d:",i);
        for(int j=2;j*j<=x;j++){
             
             if(x%j==0) printf(" %d",j);

             while(x%j==0) x/=j;
        }

        if(x>1) printf(" %d",x);

        puts("");
    }
    return 0;
}