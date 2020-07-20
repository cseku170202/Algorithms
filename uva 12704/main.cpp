#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,x,y,r;
    float shortest=0.00,longest=0.00,s;
    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>x>>y>>r;
       s=sqrt((x*x)+(y*y));
       shortest=r-s;
       longest=r+s;
       printf("%0.2f",shortest);
       printf(" %0.2f\n",longest);
    }
    return 0;
}
