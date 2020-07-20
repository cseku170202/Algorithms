#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(!(a<b&&a<c)&&!(a>b&&a>c))
        {
            printf("Case %d: %d\n",i+1,a);
        }
        else if(!(b<a&&b<c) && !(b>a&&b>c))
        {
            printf("Case %d: %d\n",i+1,b);
        }
        else{
            printf("Case %d: %d\n",i+1,c);
        }
    }
    return 0;
}
