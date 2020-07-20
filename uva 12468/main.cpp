#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,minimum,c,d,e,f;
    while(cin>>a>>b)
    {
        if(a>0 && b>0 && a!=99 && b!=99)
        {
            c=a-b;
            if(c<0)
            {
                c=c*(-1);
            }
            if(a<b)
            {
                d=a+1+(99-b);
            }
            else
            {
                d=(99-a)+1+b;
            }
            if(d<0)
            {
                d=d*(-1);
            }
            if(c<d)
            {
                printf("%d\n",c);
            }
            else
            {
                printf("%d\n",d);
            }
        }
        else if((a==0 && b==99)|| (a==99 && b==0))
        {
            minimum=1;
            printf("%d\n",minimum);
        }
        else if(a==99 && (b>0&& b<99))
        {
            e=1+b;
            f=1+(99-b);
            if(e<0)
            {
                e=e*(-1);
            }
            if(f<0)
            {
                f=f*(-1);
            }
            if(e<f)
            {
                printf("%d\n",e);
            }
            else{
                printf("%d\n",f);
            }
        }
        else if((a>0&&a<=50) && b==0)
        {
            minimum=a-b;
            printf("%d\n",minimum);
        }
        else if(a>50 && b==0)
        {
            minimum=99-a+1;
            printf("%d\n",minimum);
        }
        else if(a==0 && (b>0 && b<=50))
        {
            minimum=b-a;
            printf("%d\n",minimum);
        }
        else if(a==0 && b>50)
        {
            minimum=99-b+1;
            printf("%d\n",minimum);
        }
        else if(a==b && a!=-1 && b!=-1)
        {
            minimum=0;
            printf("%d\n",minimum);
        }
        else if((a<50)&& b==99)
        {
            minimum=(a-0)+1;
            printf("%d\n",minimum);
        }
        else if((a>=50)&& b==99)
        {
            minimum=b-a;
            printf("%d\n",minimum);
        }
        else if(a==-1 && b==-1)
        {
            break;
        }
    }
    return 0;
}
