#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,sum=0,p;
    while(cin>>n)
    {
        if(n<0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                sum=sum+2;
            }
            if(i>0)
            {
                sum=sum+(i+1);
            }
        }
        if(n>0)
        {
             printf("%lld\n",sum);
        }
        if(n==0)
        {
            sum=1;
            printf("%lld\n",sum);
        }
        sum=0;
    }
    return 0;
}
