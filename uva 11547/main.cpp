#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,a,s,c=0,r;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        a=(((((n*567)/9)+7492)*235)/47)-498;
        if(a<0)
        {
            a=a*(-1);
        }
        while(a!=0)
        {
           c++;
           s=a%10;
           if(c==2)
           {
              r=s;
              break;
           }
           a=a/10;
        }
        printf("%d\n",r);
        c=0;
        r=0;
    }
    return 0;
}
