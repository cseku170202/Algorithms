#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,farmer,j,k;
    double area,animals,friendliness,sum=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>farmer;
       for(j=0;j<farmer;j++)
       {
           cin>>area>>animals>>friendliness;
           if(animals!=0)
           {
               sum=sum+((area/animals)*friendliness)*animals;
           }
       }
       k=sum;
       printf("%lld\n",k);
       sum=0;
    }
    return 0;
}
