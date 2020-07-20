#include <bits/stdc++.h>
using namespace std;
long long int palindrome(long long int n)
{
      long long int a=0;
      while(n!=0)
      {
         a=(a*10)+(n%10);
         n=n/10;
      }
      return a;
}

int main()
{
    long long int t,i,n;
    long long int num,a=0,add=0,p,q,c=0,coun=0,s=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>n;
       again:while(n!=0)
       {
          num=n;
          p=palindrome(n);
          if(num==p && coun==0)
          {
             s=num+p;
             if(s>=1 && s<=9)
             {
                 printf("%lld %lld\n",c+1,s);
                   p=0;
                   n=0;
                  add=0;
                  num=0;
                  break;
             }

             if(s>=10)
             {
                 coun++;
                 n=s;
                 goto again;
              }
          }
          if(num!=p){
              add=num+p;
              coun++;
          }
          else if(num==p && coun>0)
          {
             printf("%lld %lld\n",coun,p);
             p=0;
             n=0;
             add=0;
             num=0;
             break;
           }

           p=palindrome(add);
           if(p==add && coun>0)
           {
              printf("%lld %lld\n",coun,p);
              p=0;
              n=0;
              add=0;
              num=0;
              break;
           }
           else if(p!=add)
           {
               n=p+add;
               coun++;
              goto again;
           }
        }
        coun=0;
    }
   return 0;
}


