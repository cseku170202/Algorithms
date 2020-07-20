#include <bits/stdc++.h>
using namespace std;
int average(int CT1,int CT2,int CT3)
{
    int avg;
    int A[3];
    A[0]=CT1;
    A[1]=CT2;
    A[2]=CT3;
    sort(A,A+3);
    avg=(A[1]+A[2])/2;
    return avg;
}

int main()
{
    int term1,term2,finall,attendance,CT1,CT2,CT3,t,i,total=0,avg=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>term1>>term2>>finall;
        cin>>attendance>>CT1>>CT2;
        cin>>CT3;
        avg=average(CT1,CT2,CT3);
        total=term1+term2+finall+attendance+avg;

        if(total>=90)
        {
            printf("Case %d: A\n",i+1);
        }
        else if(total>=80 && total!=90)
        {
            printf("Case %d: B\n",i+1);
        }
        else if(total>=70 && total!=80)
        {
            printf("Case %d: C\n",i+1);
        }
        else if(total>=60 && total!=70)
        {
            printf("Case %d: D\n",i+1);
        }
        else if(total<60)
        {
            printf("Case %d: F\n",i+1);
        }
    }
    return 0;
}
