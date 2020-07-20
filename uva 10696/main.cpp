#include <bits/stdc++.h>

using namespace std;
int f91(int N)
{
    if(N==0)
        break;
    if(N<=100)
        return  f91(f91(N + 11));
  //  if(N>=101)
     //   return  N − 10;
}
int main()
{
    int n,p;
    while(cin>>n)
    {
       p=f91(n);
       printf("%d\n",p);
    }
    return 0;
}
