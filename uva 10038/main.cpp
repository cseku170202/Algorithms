#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,s=0,j,c=0,k=0,p,x=0;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        p=n-1;
        int A[n]={0};
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }
        if(n==1)
        {
            printf("Jolly\n");
            continue;
        }
        int B[n-1]={0};
        for(j=0;j<n-1;j++)
        {
            s=A[j+1]-A[j];
            if(s<0)
            {
                s=s*(-1);
            }
            B[k]=s;
            k++;
            if(s>=n || s==0)
            {
                c++;
                break;
            }
        }
        sort(B,B+p);
        for(x=0;x<p;x++)
        {
            if(B[x+1]==B[x])
                c++;
        }
        if(c>0)
        {
            printf("Not jolly\n");
        }
        if(c==0)
        {
            printf("Jolly\n");
        }
        c=0;
        s=0;
        k=0;
    }
}
