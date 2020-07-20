#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,c,A[3]={0};
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        A[0]=a;
        A[1]=b;
        A[2]=c;
        sort(A,A+3);
        if(A[0]+A[1]>A[2])
        {
            printf("OK\n");
        }
        else
        {
            printf("Wrong!!\n");
        }
    }
    return 0;
}
