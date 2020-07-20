#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,s,c=0,ci=0;
    while(cin>>a>>b)
    {
        c=0;
        ci=0;
        if(a==0 && b==0)
        {
            break;
        }
        while(a!=0||b!=0)
        {
          s=a%10+b%10+ci;
          a=a/10;
          b=b/10;
          if(s>=10)
          {
              c++;
          }
          ci=s/10;
        }
        if(c==0)
        {
            printf("No carry operation.\n");
        }
        else if(c==1)
        {
            printf("%d carry operation.\n",c);
        }
        else
        {
            printf("%d carry operations.\n",c);
        }
    }
    return 0;
}
