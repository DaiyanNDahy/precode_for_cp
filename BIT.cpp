int tree[100001],n;

//1-indexing

int read(int idx){

    int sum=0;

    while(idx>0){

        sum+=tree[idx];

        idx-=idx&-idx;
    }

    return sum;
}

void update(int idx, int val){

    while(idx<=n){
       
       tree[idx]+=val;

       idx+=idx&-idx;
    }
}