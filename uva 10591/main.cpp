#include <bits/stdc++.h>

using namespace std;

int main()
{
     int t,i,a,s,sum=0,b;
    cin>>t;
    for(i=0;i<t;i++)
    {
        sum=0;
        cin>>a;
        b=a;
        if(a<10){
        a=a*a;
        }
        while(a>=1)
        {
            s=a%10;
            sum=sum+(s*s);
            a=a/10;
            if(sum==1 && a==0)
            {
                break;
            }
            if(a==0 && (sum>1 && sum<=9))
            {
                break;
            }
            if(a==0)
            {
                a=sum;
                sum=0;
            }
        }
        if(sum==1)
        {
            printf("Case #%d: %d is a Happy number.\n",i+1,b);
        }
        else{
           printf("Case #%d: %d is an Unhappy number.\n",i+1,b);
        }
    }
    return 0;
}
