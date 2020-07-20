#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,j,mile=0,s=0,k,c=0,p=0,Juice=0,a=0,b=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int A[n];
        for(j=0;j<n;j++)
        {
            cin>>A[j];
        }

        for(j=0;j<n;j++)
        {
            s=A[j];
            if(s<=29)
            {
                mile=mile+10;
            }
            if(s>=30)
            {
               for(k=29;k<s;k=k+30)
               {
                   continue;
               }
               a=k;
               for(k=29;k<=a;k=k+30)
               {
                  mile=mile+10;
               }
            }

            if(s<=59)
            {
                Juice=Juice+15;
            }
            if(s>=60)
            {
                for(p=59;p<s;p=p+60)
                {
                   continue;
                }
                b=p;
                for(p=59;p<=b;p=p+60)
                {
                   Juice=Juice+15;
                }
            }
            a=0;
            b=0;
        }
        if(mile<Juice)
        {
            printf("Case %d: Mile %d\n",i+1,mile);
        }
        if(Juice<mile)
        {
            printf("Case %d: Juice %d\n",i+1,Juice);
        }
        if(mile==Juice)
        {
            printf("Case %d: Mile Juice %d\n",i+1,mile);
        }
        mile=0;
        Juice=0;
    }
    return 0;
}
