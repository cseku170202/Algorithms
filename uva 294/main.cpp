#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,i,low,up,j,c=0,k=0,p;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>low>>up;
        long long int A[76];
        for(i=low;i<=up;i++)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(low!=up)
            {
               A[k]=c;
               k++;
            }
            if(low==up)
            {
                p=c;
            }
            c=0;
        }
        if(low==up)
        {
            printf("%lld\n",p);
        }
        if(low!=up){
            sort(A,A+up);
            printf("%lld\n",A[up-1]);
            A[up]={0};
        }
    }
    return 0;
}
