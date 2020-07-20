#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,A[10],B[10]={0},j,k,c=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        for(j=0;j<10;j++)
        {
            cin>>A[j];
            B[j]=A[j];
        }

           if(A[0]<A[1])
           {
               sort(A,A+10);
           }
           if(A[0]>A[1])
           {
               sort(A,A+10,greater<int>());
           }
            for(k=0;k<10;k++)
            {
                if(A[k]==B[k])
                {
                    continue;
                }
                else
                {
                     c++;
                     break;
                }
            }
            if(i==0)
            {
                printf("Lumberjacks:\n");
            }
            if(c==0)
            {
                printf("Ordered\n");
            }
            else
            {
                printf("Unordered\n");
            }
            c=0;
    }
    return 0;
}
