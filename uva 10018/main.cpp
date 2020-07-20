#include <bits/stdc++.h>

using namespace std;
int palindrome(int n)
{
      int a=0;
      while(n!=0)
      {
        a=(a*10)+(n%10);
        n=n/10;
      }
      return a;
}

void reverse_add(int n)
{
    int num,a=0,add=0,p,q,c=0;
    while(n!=0){
       // if(c==1)
       // {
         //   n==0;
       // }
    num=n;
    p=palindrome(n);
   /// a tee reverse number roise
   if(num!=p){
    add=num+p;
   }
    else if(num==p)
    {
        printf("%d\n",p);
        p=0;
        n=0;
        add=0;
        num=0;
        break;
    }
    p=palindrome(add);
    if(p==add)
    {
       printf("%d\n",p);
        p=0;
        n=0;
        add=0;
        num=0;
       break;
    }
    else if(p!=add)
    {
        reverse_add(p+add);
    }
   // coun++;
  }
}

int main()
{
    int t,i,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>n;
      // reverse_add(n);
      // printf("%d\n",receive);
    }
    return 0;
}

/*****int main()
{
    int n,num,a=0;
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        a=(a*10)+(n%10);
        n=n/10;
    }
    if(a==num)
    {
        printf("%d is palindrome",num);
    }
    else
    {
        printf("%d is not palindrome",num);
    }
    return 0;
}*****/

