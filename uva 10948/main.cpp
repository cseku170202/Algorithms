#include <bits/stdc++.h>

using namespace std;
void difference(int num[],int i,int sub[],int j)
{

}
void summation(int A[],int p,int n)
{
    int a,temp,r,b,c,d,diff=0,count,num[20]={0},sub[10],i=0,j=0;
    for(a=0;a<p;a++)
    {
         if(a==0)
         {
            temp=A[0];
            if(temp+temp==n)
            {
                printf("%d+%d",temp,temp);
            }
            for(r=1;r<p;r++)
            {
                if(temp+A[r]==n){
                     diff=temp-A[r];
                     diff=abs(diff);
                     sub[j]=diff;
                     j++;
                     num[i]=temp;
                     num[i+1]=A[r];
                     i++;
                     difference(num,i,sub,j);
                   printf("%d+%d\n",temp,A[r]);
                }

                else if(A[r]+A[r]==n){
                    printf("%d+%d\n",A[r],A[r]);
                }
            }
          }

          else if(a==p-1)
          {
              temp=A[p-1];
              if(temp+temp==n)
              {
                  printf("%d+%d\n",temp,temp);
              }
              for(b=p-2;b>=0;b--)
              {
                  if(temp+A[b]==n)
                    printf("%d+%d\n",A[b],temp);

                  else if(A[r]+A[r]==n)
                    printf("%d+%d\n",A[r],A[r]);
              }
          }
          else if(a>0 && a<p)
          {
              temp=A[a];
              if(temp+temp==n)
              {
                  printf("%d+%d\n",temp,temp);
              }
              for(c=a-1,d=a+1;c>=0&&d<p;c--,d++)
              {
                 if(temp+A[c]==n)
                    printf("%d+%d\n",temp,A[c]);
                  if(temp+A[d]==n)
                     printf("%d+%d\n",A[d],temp);
              }
          }
    }
}



void Prime(int n)
{
    int i,j,s,p=0,A[100]={0},a,b,temp=0,r,sum=0;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            s=i%j;
            if(s==0)
            break;
        }
        if(s!=0)
        {
            A[p]=i;
            p++;
        }

    }
    summation(A,p,n);
}


int main()
{
    int n;
    while(cin>>n)
    {
        Prime(n);
    }
    return 0;
}
