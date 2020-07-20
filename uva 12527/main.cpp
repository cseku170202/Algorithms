#include <bits/stdc++.h>
using namespace std;
int different_digit(int n,int m)
{
    int a,i=0,j,k,s,A[100]={0},x=0,h=0,g=0,output=0;
    for(a=n;a<=m;a++)
    {
        x=a;
        while(a!=0)
        {
            s=a%10;
            A[i]=s;
            a=a/10;
            if(i>=1)
            {
                for(k=i-1;k>=0;k--)
                {
                    if(A[i]==A[k])
                    {
                        h++;
                       goto again;
                    }
                }
            }
            if(a==0)
            {
                break;
            }
            i++;
        }
        again:a=x;
        for(g=0;g<=i;g++)
        {
            A[g]=0;
        }
        i=0;
    }
    output=(m-n+1)-h;
    printf("%d\n",output);
}

int main()
{
    int n,m,result=0;
    while(cin>>n>>m)
    {
       different_digit(n,m);
    }
    return 0;
}
