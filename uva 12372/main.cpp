#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,L,W,H;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>L>>W>>H;
        if(L<=20 && W<=20 && H<=20)
        {
            printf("Case %d: good\n",i+1);
        }
        else
        {
            printf("Case %d: bad\n",i+1);
        }
    }
    return 0;
}
