#include "bits/stdc++.h"
using namespace std;
bool check(int x){

}
int main()
{


    int lo=1, hi=1e9,mid;
    while(lo<hi)
    {
        mid=(lo+hi)/2;
        if(check(mid)) hi=mid;
        else lo=mid+1;
    }
    if(lo*lo==sum) puts("Yes");
    else puts("No");

return 0;
}
