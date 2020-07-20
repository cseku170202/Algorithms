#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int person,budget,hotel,week;
    long long int bill,cost=0,h=0,c=0,result[10]={0},k=0,p=0,t=0,s=0,pre=0,q=0,total,l;

     int i,j;
       while(cin>>person>>budget>>hotel>>week)
       {
        long long int B[15],BED[15*4];
        long long int bed[4];
        if(hotel==0)
        {
            printf("stay home\n");
            break;
        }
        if(hotel>=1)
        {
            again:for(i=0;i<hotel;i++)
             {
                  cin>>bill;
                  B[q]=bill;
                  total=bill*person;
                  if(total>budget)
                  {
                      for(j=0;j<week;j++)
                      {
                          cin>>bed[j];
                      }
                      h++;
                      goto again;
                  }

                  if(total<=budget)
                  {
                     for(j=0;j<week;j++)
                     {
                         cin>>bed[j];
                         if(j<=week-2)
                         {
                             continue;
                         }
                         if(j==week-1)
                         {
                             for(l=0;l<week;l++)
                             {
                                 if(bed[l]>=person)
                                 {
                                     c++;
                                 }
                                 if(c==week)
                                 {
                                     result[k]=total;
                                     k++;
                                 }
                             }
                         }
                       /***if((budget>=(bill*person))&&(bed[j]>=person)&& (j<week-1))
                         {
                            continue;
                         }
                         else if((budget>=(bill*person))&&(bed[j]>=person)&& (j<week))
                         {
                            result[k]=bill*person;
                            k++;
                         }
                         BED[p]=bed[j];
                         p++;
                         ***/
                     }
                  }
                  q++;
              }
              h=0;
        }
        if(k>1 && h!=0)
        {
            sort(result,result+k);
            printf("%d\n",result[0]);
        }
        else if(k==1 && h!=0)
        {
            printf("%d\n",result[0]);
        }
        else if(k==0 && h!=0)
        {
            printf("stay home\n");
        }

    }
   return 0;
}
       // sort(B,B+hotel,greater<long long int>());

      /*** for(i=0;i<hotel;i++)
       {
            cost=B[i]*person;
            k=0;
            if(budget>=cost && i==0)
            {
                for(j=0;j<hotel;j++)
                {
                    if(BED[j]>=person)
                    {
                        result[k]=cost;
                        k++;
                    }

                }
            }
            if(budget>=cost && i>=1)
            {
                s=i*week+week;
                pre=s-1;
                for(j=i*week;j<s;j++)
                {
                    if(BED[j]>=person)
                    {
                        if(pre<=s){
                            continue;
                        }
                        else{
                            result[k]=cost;
                            k++;
                        }
                    }
                }
            }
            sort(result,result+10);
            printf("%lld\n",result[0]);

        }
    }
    return 0;
}***/
