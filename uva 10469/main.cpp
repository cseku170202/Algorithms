#include <bits/stdc++.h>

using namespace std;

int binary(int n)
{
    int a[50]={0};
    int i=0,k=0;
    if(n<0)
    {
        return 0;
    }
    int s=0;
    int p=0;
    while(n>=0)
    {
        s=n%2;
        for(i=p;i<50;)
        {
            a[i]=s;
            p++;
            break;
        }
        n=n/2;
        if(n==0)
         break;
     }
     int b[p];
     for(i=p-1;i>=0;i--)
     {
        b[k]=a[i];
        k++;
     }
     std::stringstream ss;
     for (unsigned i=0;i<p;++i)
     ss<<b[i];

     int result;
     ss>>result;
     return result;

}

int binary_sum(int x,int y)
{
    int sum=0,c=0;
    while(x>=0 && y>=0)
    {
        x=x%10;
        y=y%10;
        if(x==0 && y==0)
        {
            sum=sum+(x+y)+c;
            c=0;
        }
        if((x==0 && y==1)|| (y==0 && x==1))
        {
            sum=sum+(x+y);
        }
        if(x==1 && y==1)
        {
            sum=sum+c;
        }
    }
}

int main()
{
    int a,b,x,y;
    while(cin>>a>>b)
    {
        x=binary(a);
        y=binary(b);
       // printf("%d %d",x,y);

    }
    return 0;
}
