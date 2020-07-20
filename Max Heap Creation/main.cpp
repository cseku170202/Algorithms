#include <bits/stdc++.h>

using namespace std;

void Max_Heapify(int A[],int i,int n)
{
    int l,r,largest=0,temp;
    l=2*i;
    r=2*i+1;
    if(l<=n)
    {
           if(r>n)
           {
             largest=l;
           }
           else if(A[l]>A[r])
           {
            largest=l;
           }
           else if(A[r]>A[l])
           {
            largest=r;
           }

        if(A[largest]>A[i])
        {
            temp=A[i];
            A[i]=A[largest];
            A[largest]=temp;
            Max_Heapify(A,largest,n);
        }
    }
}


int main()
{
    printf("Enter The array size:");
    int n,i,j;
    cin>>n;
    int A[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(i=n/2;i>=1;i--)
    {
        Max_Heapify(A,i,n);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
