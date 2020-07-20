#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,j,high=0,low=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int A[n];
        for(j=0;j<n;j++)
        {
            cin>>A[j];
        }
        for(j=0;j<n-1;j++)
        {
            if(A[j+1]==A[j])
            {
                continue;
            }
            else if(A[j+1]>A[j])
            {
                high++;
            }
            else if(A[j+1]<A[j]){
                low++;
            }
        }
        printf("Case %d: %d %d\n",i+1,high,low);
        high=0;
        low=0;
    }
    return 0;
}
