#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a>b && a>c && (a*a==b*b+c*c))
        {
            printf("right\n");
        }
        else if(b>a && b>c && (b*b==a*a+c*c))
        {
            printf("right\n");
        }
        else if(c>a && c>b && (c*c==a*a+b*b))
        {
            printf("right\n");
        }
        else if(a==0 && b==0 && c==0)
        {
            break;
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
