#include <bits/stdc++.h>

using namespace std;

void Heap_Up(int A[],int i)
{
    int parentLocation,temp=0;
    if(i>1)
    {
        parentLocation=i/2;
        if(A[i]>A[parentLocation])
        {
            temp=A[i];
            A[i]=A[parentLocation];
            A[parentLocation]=temp;
            Heap_Up(A,parentLocation);
        }
    }
}
int main()
{
    int n,k,i;
    cin>>n;
    int A[n+1];
    for(k=1;k<=n;k++)
    {
        cin>>A[k];
    }
    for(k=1;k<=n;k++)
    {
        Heap_Up(A,k);
    }
    for(k=1;k<=n;k++)
    {
        printf("%d ",A[k]);
    }
    return 0;
}
