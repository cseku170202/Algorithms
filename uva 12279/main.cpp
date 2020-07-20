#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,sum=0,c=0;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        c++;
        int A[n];
        for(i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i]>0)
            {
                sum++;
            }
            else{
                sum--;
            }
        }
        printf("Case %d: %d\n",c,sum);
        sum=0;
    }
	return 0;
}
