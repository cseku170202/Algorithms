#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,big,i,m,c=0,small;
    while(cin>>a>>b)
    {
        if(a>b)
        {
            big=a;
            small=b;
        }
        else{
            big=b;
            small=a;
        }
        for(i=1;i<=big;i++)
        {
            m=i*i;
            if(m>=small && m<=big)
            {
                c++;
            }
        }
        if(a==0 && b==0)
        {
            break;
        }
        else
        {
           printf("%d\n",c);
        }
        c=0;
    }
    return 0;
}
