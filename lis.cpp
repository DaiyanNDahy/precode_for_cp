#include "bits/stdc++.h"
using namespace std;

int main()
{



    vector<int>v;
    int n,num,lucky=0;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&num);

        auto iv=lower_bound(v.begin(),v.end(),num);
        //lower_bound for strictly increasing//else upper_bound
        if(v.end()==iv) v.push_back(num);

        //the pushing index refers to the length of the lis ending at that position
        else v[iv-v.begin()]=num;

        //v.size() is the length of lis but v is not the lis
        // lis ending at an index<=i

    }




    return 0;
}
