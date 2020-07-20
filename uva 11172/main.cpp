#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            printf(">\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else
        {
            printf("=\n");
        }
    }
    return 0;
}
