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
    int n,i,k,p=0,t,u,m=0,c;

    n=100000;
    u=100000;
    c=100000;
    int A[100000+1];

    for(k=100000;k>=0;k--)
    {
        A[k]=k;
    }

   /*** for(k=1;k<=n;k++)
    {
        m++;
        if(m<=n)
        {

           B[c]=A[1];
           A[1]=A[c];
           for(t=1;t<=n;t++)
           {
              Max_Heapify(A,t,c-1);
           }
           c--;
        }
    }***/

    for(i=n;i>=1;i--)
    {
        t=A[1];
        A[1]=A[i];
        A[i]=t;
        Max_Heapify(A,1,i-1);
    }

    for(k=1;k<=u;k++)
    {
        printf("%d ",A[k]);
    }
    return 0;
}

