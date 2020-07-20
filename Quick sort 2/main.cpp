#include <bits/stdc++.h>

using namespace std;

int Partition(int A[],int p,int r)
{
    int x,i,j,temp;
    x=A[p];
    i=p-1;
    j=r+1;
    while(1)
    {
        do
        {
            j--;
        }while(!(A[j]<=x));

        do
        {
            i++;
        }while(!(A[i>=x]));

        if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        else{
            return j;
        }
    }
}


void Quicksort(int A[],int p,int r)
{
    int q;
    if (p<r)
    {
        q=Partition(A,p,r);
        Quicksort(A,p,q);
        Quicksort(A,q+1,r);
    }
}


int main()
{
    int A[40088],n=40088,i,j;
    for(i=40088;i>=0;i--)
    {
        A[i]=i;
    }
    Quicksort(A,1,n);
    for(j=1;j<=n;j++)
    {
        printf("%d ",A[j]);
    }
    return 0;
}
