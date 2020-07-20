#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int A[n]={0};
        for(j=0;j<n;j++)
        {
            cin>>A[j];
        }
        sort(A,A+n);
        printf("Case %d: %d\n",i+1,A[n-1]);
    }
    return 0;
}
