#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,p=0,c=0,j=0,k,m=0;
     while(cin>>n)
     {
          if(n<0)
          {
              break;
          }
          j++;
          if(n==1)
          {
              printf("Case %d: 0\n",j);
          }
          if(n!=1)
          {
              for(k=2;;k=k*2)
              {
                  if(k>=n)
                  {
                      m=k;
                      break;
                  }
              }
              for(k=2;k<=m;k=k*2)
              {
                  c++;
              }
              printf("Case %d: %d\n",j,c);
              c=0;
           }
     }
    return 0;
}
