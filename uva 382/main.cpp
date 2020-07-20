#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,s=1,d=0;
    vector <int > v;
    while(cin >> n)
    {
       /* if(d==0)
        {
            d=1;
            printf("");
        } */
        if(n!=0)
        {
            v.push_back(n);
            continue;
        }
        else
        {
            break;
        }
    }
        printf("PERFECTION OUTPUT\n");
        s=1;
       while(v.empty()==0)
       {
           s=1;
           n=v.front();
           if(n==1)
           {
               s=0;
           }
            for(i=2;i<=sqrt(n);i++)
           {
              if(n%i==0 && i!=(n/i))
              {
                s=s+i+n/i;
              }
              else if(n%i==0 && i==(n/i))
              {
                  s=s+i;
              }
           }
           if(n<=9)
           {
               printf("    %d  ",n);
           }
           else if(n>=10&&n<=99)
           {
               printf("   %d  ",n);
           }
           else if(n>=100&&n<=999)
           {
               printf("  %d  ",n);
           }
           else if(n>=1000&&n<=9999)
           {
               printf(" %d  ",n);
           }
           else
           {
               printf("%d  ",n);
           }
        if(s==n)
        {
            printf("PERFECT\n");
        }
        else if(s>n)
        {
            printf("ABUNDANT\n");
        }
        else
        {
            printf("DEFICIENT\n");
        }
        v.erase(v.begin()+0);
       }

       printf("END OF OUTPUT\n");

    return 0;
}
