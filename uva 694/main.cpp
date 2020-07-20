#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int A,L,term=0,i=0,p;
    while(cin>>A>>L)
    {
        p=A;
        term=0;
        while(A<=L)
        {
            if(A<0 && L<0)
            {
                break;
            }
            else if(A==1)
            {
                term++;
                break;
            }
            else if(A%2==0)
            {
                A=A/2;
                term++;
            }
            else if(A%2!=0)
            {
                A=A*3+1;
                term++;
            }
        }
        i++;
        if(term!=0)
        {
            printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,p,L,term);
        }
    }
    return 0;
}
