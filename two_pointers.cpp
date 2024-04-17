#include "bits/stdc++.h"
using namespace std;

//if some property being true for a set means it is true for the subsets and also when moving a pointer the property can be recalculated using the previous iteration, then two pointers can be used

void add()
{


}

void remove()
{


}

bool check()
{

}

int main()
{


    int n;
    scanf("%d%d",&n,&k);
    vector<int>a(n);

    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    int j=0;
    long long ans=0;

    for(int i=0; i<n; i++)
    {

        add();//add the necessary parameters for forward  pointer
        while(j<=i&&check())
            remove(),j++;//from the starting

        //update the ans
    }

    cout<<ans<<endl;
    return 0;

}
