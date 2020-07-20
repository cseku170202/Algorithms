#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,sum=0;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        sum=0;
        while(n!=0)
        {
            s=n%10;
            sum=sum+s;
            n=n/10;
            if(sum>=10 && n==0)
            {
                n=sum;
                sum=0;
            }
            if(sum<=9 && n==0)
            {
                break;
            }
         }
       printf("%d\n",sum);
    }
    return 0;
}
