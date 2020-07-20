#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int B,P,M,R,y=1,i;
    while(cin>>B>>P>>M)
    {
       i=1;
       while(i<=P)
       {
           y=B*y;
           i++;
       }
       R=y%M;
       printf("%lld\n",R);
       B=0;
       P=0;
       M=0;
       R=0;
       y=1;
    }
    return 0;
}
