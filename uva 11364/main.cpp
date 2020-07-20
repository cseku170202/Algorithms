#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,maximum=0,minimum=0,d=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int A[20]={0};
        for(j=0;j<n;j++)
        {
            cin>>A[j];
        }
        maximum=A[0];
        minimum=A[0];
        for(j=0;j<n;j++)
        {
            if(A[j]>maximum)
            {
                maximum=A[j];
            }
            if(A[j]<minimum)
            {
                minimum=A[j];
            }
        }
        d=(maximum-minimum)*2;
        printf("%d\n",d);
    }
    return 0;
}
