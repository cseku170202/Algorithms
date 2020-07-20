#include <iostream>

using namespace std;

int main()
{
    int n;
    n=100000;
    int A[n+1],i,j,key_value;

    for(i=100000;i>=0;i--)
    {
        A[i]=i;
    }

    for(j=2;j<=n;j++)
    {
       key_value=A[j];
       i=j-1;
       while(i>0 && A[i]>key_value)
       {
           A[i+1]=A[i];
           i=i-1;
       }
       A[i+1]=key_value;
    }

    for(i=1;i<=n;i++)
    {
        cout<<" ";
        cout<<A[i];
    }
    return 0;
}
