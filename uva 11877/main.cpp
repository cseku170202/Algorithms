#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,s,p,q,c=0,sum;
    while(cin>>a)
    {
        if(a==3)
        {
            printf("1\n");
        }
        else if(a<3)
        {
            printf("0\n");
        }
        else if(a>3)
        {
           s=a/3;
           sum=s;
           if(s>=3)
           {
               c++;
               sum=sum+c;
               q=s-3;
           }
           p=a%3;
           sum=s+p;
        }
    }
    return 0;
}
