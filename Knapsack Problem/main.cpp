#include<bits/stdc++.h>

using namespace std;
int maximum(int a, int b)
{
    return (a > b)? a : b;
}

int knapSack(int W, int wt[], int val[], int n)
{
    int i=0, w=0;
    int K_table[n+1][W+1];

    for (i=0;i<=n;i++)
    {
        for (w=0;w<=W;w++)
        {
            if (i==0 || w==0)
            {
                K_table[i][w] = 0;
            }
            else if (wt[i-1] <= w)
            {
                K_table[i][w] = maximum(val[i-1] + K_table[i-1][w-wt[i-1]],  K_table[i-1][w]);
            }
            else
            {
                K_table[i][w] = K_table[i-1][w];
            }
        }
    }


    int carry = K_table[n][W];

    int A[n],k=0;
    int element =0;
    while(n>0 && w>0)
    {
        ///last value 2 tar same hole item 1 kore komaisi
        if(K_table[n][W] == K_table[n-1][W])
        {
            n--;
        }
        else if(K_table[n][W] != K_table[n-1][W])
        {
            A[k] = n;
            k++;
            element++;
            w = w - wt[n];
            n--;
        }
    }

    //printf("Items : %d",element);

    for(int j=0;j<element;j++)
    {
        printf("%d ",A[j]);
    }

    return carry;
}

int main()
{
    printf("Enter The Number of items : ");
    int n; // number of items
    scanf("%d",&n);
    int val[n];
    int wt[n];
    for(int i=0;i<n;i++)
    {
        printf("For item %d : \n",i+1);
        printf("weight : ");
        scanf("%d",&wt[i]);
        printf("value  : ");
        scanf("%d",&val[i]);
        printf("\n");
    }
    int  W;
    printf("Enter weight : ");
    scanf("%d",&W);

    printf("\n%d", knapSack(W, wt, val, n));
    return 0;
}
