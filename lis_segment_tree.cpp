#include "bits/stdc++.h"
using namespace std;

long long tree[1200008],u;

int l=1,r,pos;

void update(int at,int L, int R){

  if(L==R) {

    tree[at]=u;

    return;
  }

  int mid=(L+R)/2;

  if(pos<=mid) update(at*2,L,mid);

  else update(at*2+1,mid+1,R);

  tree[at]=max(tree[at*2],tree[at*2+1]);
}

long long query(int at, int L, int R){

  if(r<L||R<l) return 0;

  if(l<=L&&R<=r) return tree[at];

  int mid=(L+R)/2;

  long long x=query(at*2,L,mid);
  long long y=query(at*2+1,mid+1,R);

  return max(x,y);
}

int main(){
      
  int n;

  scanf("%d",&n);
    
  //for each i query upto a[i]-1 and then update upto a[i]
  
  for(int i=0;i<n;i++){
       
       long long a;
       scanf("%lld",&a);
       
       r=a-1;
       
       u=query(1,1,n)+1; //length of the lis ending at index i
       
       pos=a;

       update(1,1,n); 

  }

      //taking maximum of all the lis will give the length of the final lis 
      
  

  return 0;
}