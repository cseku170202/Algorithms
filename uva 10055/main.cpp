#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c=0;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
       if(a>b)
       {
           c=a-b;
           printf("%d\n",c);
       }
       else
       {
           c=b-a;
           printf("%d\n",c);
       }
    }
    return 0;
}
