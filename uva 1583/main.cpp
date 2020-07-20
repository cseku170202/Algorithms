#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i=0,j,n,a,s,sum=0,p,temp=0,b=0,arr[5]={0},sindex=0,te,c=0,minimum=0,k,d;
    cin>>t;
    k=0;
    while(k<t)
    {
        cin>>n;
        a=1;
        again:while(a<=n)
        {
            while(a!=0)
            {
                b++;
                if(b==1)
                {
                   temp=a;
                }

                s=a%10;
                sum=sum+s;
                a=a/10;
                if(a==0)
                {
                    break;
                }
            }
            p=sum+temp;

            if(p==n)
            {
               arr[i]=temp;
               i++;
               a=temp;
               b=0;
               sum=0;
               a++;
               goto again;
            }
            a=temp;
            b=0;
            sum=0;
            a++;
            if(arr[0]==0)
            {
                i=0;
            }
        }
        minimum=arr[0];
        for(j=0;j<i;j++)
        {
           if(arr[j]<minimum)
           {
               minimum=arr[j];
           }
        }
        printf("%d\n",minimum);
        minimum=0;
        for(d=0;d<i;d++)
        {
            arr[d]=0;
        }
    }
    k++;
    return 0;
}
