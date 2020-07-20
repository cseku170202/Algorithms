#include <stdio.h>
#include <stdlib.h>

void merge_sort(int A[],int first,int last)
{
    int mid;
    if(first<last)
    {
      mid=(first+last)/2;
      merge_sort(A,first,mid);
      merge_sort(A,mid+1,last);
      Merge(A,first,mid,last);
    }
}

void Merge(int A[],int first,int mid,int last)
{
    int T[last];
    int i,j,k,b;
    i=first;
    j=mid+1;
    k=first;

    while(i<=mid && j<=last)
    {
        if(A[i]<=A[j])
        {
            T[k]=A[i];
            i++;
            k++;
        }
        else{
            T[k]=A[j];
            j++;
            k++;
        }
    }

    if(i>mid)
    {
        for(b=j;b<=last;b++)
        {
            T[k]=A[b];
            k++;
        }
    }
    else{
        for(b=i;b<=mid;b++)
        {
            T[k]=A[b];
            k++;
        }
    }
}


int main()
{
    int n,i;
    n=100000;
    int A[n];
    for(i=100000;i>0;i--)
    {
        A[i]=i;
    }

    merge_sort(A,0,n-1);

    for(i=0;i<n;i++)
    {
        printf(" %d",A[i]);
    }
    return 0;
}
