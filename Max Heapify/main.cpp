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
        else if(A[l]<A[r])
        {
            largest=r;
        }
        else if(A[l]>A[r]){
            largest=l;
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
    int n,i,k,p=0;
    printf("Enter The size of the Heap:");
    cin>>n;
    int A[n+1];

    for(k=1;k<=n;k++)
    {
        cin>>A[k];
    }

    for(k=1;k<=n;k++)
    {
        Max_Heapify(A,k,n);
    }

    for(k=1;k<=n;k++)
    {
        printf("%d ",A[k]);
    }
    return 0;
}
