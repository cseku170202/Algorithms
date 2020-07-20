#include <stdio.h>
#include <stdlib.h>
void countsort(int a[],int n,int max);
int main()
{
    int n=100000,i,max=0;
    //printf("Enter total number of elements:");
    //scanf("%d",&n);
    int arr[100000];

   // printf("Enter the numbers:");
    for(i=100000;i>=0;i--)
    {
        //scanf("%d",&arr[i]);
        arr[i]=i;
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    countsort(arr,n,max);

    return 0;
}


void countsort(int a[],int n,int max)
{
    int count[100000]={0};
    int i,j;

    for(i=0;i<n;i++)
    {
        count[a[i]]=count[a[i]]+1;
    }

   // printf("Sorted array:");
    for(i=0;i<max;i++)
    {
        for(j=1;j<=count[i];j++)
        {
            printf("%d ",i);
        }
    }
}
