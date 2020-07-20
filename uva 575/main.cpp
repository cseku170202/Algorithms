#include <bits/stdc++.h>

using namespace std;

long long int Two_Power(long long int x,long long int n)
{
    long long int i;
    long long int y,count;
    y=1;
    count=1;
    for(count=1;count<=n;count++)
    {
     y=x*y;
    }
    return y;
}



int main()
{
    long long int n,a,power=0,x,sum=0;
    while(cin>>n)
    {
        while(n!=0)
        {
            power++;
            a=n%10;
            x=Two_Power(2,power);
            sum=sum+a*(x-1);
            n=n/10;
            if(n==0)
            {
              break;
            }
        }
        printf("%lld\n",sum);
        sum=0;
        power=0;
    }
    return 0;
}
