//call with build(1,1,n)

int tree[n*4];

void build(int at, int L,int R){

    tree[at]=0;

    if(L==R){
        //might need to do something like tree[at]=num[L];

        return;
    }

    int mid=(L+R)/2;

    build(at*2,L,mid);

    build(at*2+1,mid+1,R);

    //tree[at]=tree[at*2]+tree[at*2+1];
}

//call wiht update(1,1,n,pos,u)
void update(int at, int L,int R, int pos, int u){

    //sometimes instead of using if-else
    //int line 14 and 15 you can use 
    //if(pos<L||R<pos) return;

    if(L==R){

       // tree[at]+=u;

        return;
    }

    int mid=(L+R)/2;

    if(pos<=mid) update(at*2, L,mid,pos,u);

    else update(at*2+1,mid+1,R,pos,u);

    //tree[at]=tree[at*2]+tree[at*2+1];
}

//call with query(1,1,n,l,r)
int query(int at, int L, int R, int l, int r){

    if(r<L||R<l) return 0;

    if(l<=L&&R<=r) return tree[at];
    
    int mid=(L+R)/2;

    int x=query(at*2,L,mid,l,r);

    int y=query(at*2+1,mid+1,R,l,r);

    //return x+y;

}