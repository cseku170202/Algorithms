#include <bits/stdc++.h>
using namespace std;
int power_sum(int x,int n)
{
    int i,sum=0;
    int y,count;
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
    int t,i,n,num,a,j=0,b,s=0,sum=0,number;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        num=n;
        number=n;
        while(n!=0)
        {
            a=n%10;
            j++;
            n=n/10;
            if(n==0)
            {
                break;
            }
        }
        s=j;
        while(num!=0)
        {
            b=num%10;
            num=num/10;
            sum=sum+power_sum(b,s);
            if(num==0)
            {
                break;
            }
        }
        if(number==sum)
        {
            printf("Armstrong\n");
        }
        if(number!=sum)
        {
            printf("Not Armstrong\n");
        }
        sum=0;
        s=0;
        j=0;
    }
    return 0;
}
