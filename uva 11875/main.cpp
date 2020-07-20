#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,j,k,p,a,b,c=0,d=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int A[n];
        for(j=0;j<n;j++)
        {
            cin>>A[j];
        }
        if( A[0]>A[1] || A[0]<A[1] )
        {
            p=(n/2);
            for(a=p+1;a<n;a++)
            {
                c++;
            }
            for(b=p-1;b>=0;b--)
            {
                d++;
            }
            if(c==d)
            {
                printf("Case %d: %d\n",i+1,A[p]);
            }
        }
        c=0;
        d=0;
    }
    return 0;
}
