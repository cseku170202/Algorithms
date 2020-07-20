#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,n;
    while(cin>>n)
    {
        long long int a=0,b=1,c=0;
        for(i=2;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
       if(n==1)
       {
           printf("The Fibonacci number for 1 is 1\n");
       }
       if(n!=1){
            printf("The Fibonacci number for %lld is %lld\n",n,c);
       }
    }
    return 0;
}
