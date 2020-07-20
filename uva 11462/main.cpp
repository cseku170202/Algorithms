#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
       int A[n],i;
       for(i=0;i<n;i++)
       {
          (cin>>A[i]);
       }
       sort(A,A+n);
       {
            for(i=0;i<n;i++)
            {
                if(i!=n-1)
                {
                    printf("%d ",A[i]);
                }
                else
                {
                    printf("%d",A[i]);
                }
             }
             if(n!=0)
             {
                printf("\n");
             }
         }
         if(n==0)
         {
             break;
         }
    }
    return 0;
}
