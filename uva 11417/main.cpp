#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
     int x;
     if(a<b)
     {
         x=a;
     }
     else
     {
         x=b;
     }
     again:if(a%x==0&&b%x==0)
     return x;
     else
     {
         x--;
         goto again;
     }
}
int main()
{
    int N,i,j,G;
    while(cin>>N)
    {
       if(N==0)
       {
           break;
       }
       G=0;
       for(i=1;i<N;i++)
       {
            for(j=i+1;j<=N;j++)
            {
               G+=GCD(i,j);
            }
       }
      printf("%d\n",G);
    }
    return 0;
}
