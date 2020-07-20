#include <bits/stdc++.h>
using namespace std;
int main()
{
   int i,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     int x,y,z,s;
     cin>>x>>y>>z;
     s=z*((2*x)-y)/(x+y);
     printf("%d\n",s);
   }
   return 0;
}
