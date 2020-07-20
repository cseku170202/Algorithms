#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,m,num;
    int c;
    while(cin>>n && n!=0)
    {
        m=0;
        c=0;
        num=fabs(n);
        for(i=2;i*i<=num;i++)
        {
            while(n%i==0)
            {
                if(m!=i)
                {
                    c++;
                }
                m=i;
                n=n/i;
            }
        }
        if(n!=1 && n!=-1 && n!=num)
        {
            m=fabs(n);
            c++;
        }
        if(c>1)
        {
            printf("%lli\n",m);
        }
        else
        {
            printf("%d\n",-1);
        }
    }
    return 0;
}
