#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,a,b,c,d,A[4];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d)
        {
            printf("square\n");
        }
        else if((a==c && b==d)||(a==b && c==d)|| (a==d && b==c))
        {
            printf("rectangle\n");
        }
        else if((!(a==b && b==c && c==d))&& (!(a==c && b==d)||!(a==b && c==d)|| !(a==d && b==c)))
        {
            A[0]=a;
            A[1]=b;
            A[2]=c;
            A[3]=d;
            sort(A,A+4);
            if(A[0]+A[1]+A[2]>=A[3])
            {
                printf("quadrangle\n");
            }
            else
            {
                printf("banana\n");
            }
        }
    }
    return 0;
}
