#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,c=0,j,k,p;
    float avg,sum=0.000,result;
    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>n;
       int A[1000]={0};
       for(p=0;p<n;p++)
       {
           cin>>A[p];
       }
       for(k=0;k<n;k++)
       {
          sum=sum+A[k];
       }
       avg=sum/n;
       for(j=0;j<n;j++)
       {
           if(A[j]>avg)
           {
              c++;
           }
       }
       result=(float)(c*100)/n;
       printf("%0.3f",result);
       cout<<"%"<<endl;
       c=0;
       sum=0.000;
    }
    return 0;
}
