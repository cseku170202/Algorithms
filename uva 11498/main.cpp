#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,n,m,i,x,y,p;
    while(cin>>num>>n>>m)
    {
        for(i=0;i<num;i++)
        {
            cin>>x>>y;
            if(x==n || y==m)
            {
                printf("divisa\n");
            }
            else if((n>=0 && m>=0) && (x<n && y>m))
            {
                printf("NO\n");
            }
            else if((n>=0 && m>=0) && (x<n && y<m))
            {
                printf("SO\n");
            }
            else if((n>=0 && m>=0) && (x>n && y>m))
            {
                printf("NE\n");
            }
            else if((n>=0 && m>=0) && (x>n && y<m))
            {
                printf("SE\n");
            }
            else if((n<=0 && m>=0) && (x>n && y>m))
            {
                printf("NE\n");
            }
            else if((n<=0 && m>=0) && (x>n && y<m))
            {
                printf("SE\n");
            }
            else if((n<=0 && m>=0) && (x<n && y>m))
            {
                printf("NO\n");
            }
            else if((n<=0 && m>=0) && (x<n && y<m))
            {
                printf("SO\n");
            }
            else if((n>=0 && m<=0) && (x>n && y>m))
            {
                printf("NE\n");
            }
            else if((n>=0 && m<=0) && (x>n && y<m))
            {
                printf("SE\n");
            }
            else if((n>=0 && m<=0) && (x<n && y>m))
            {
                printf("NO\n");
            }
            else if((n>=0 && m<=0) && (x<n && y<m))
            {
                printf("SO\n");
            }
            else if((n<=0 && m<=0) && (x>n && y>m))
            {
                printf("NE\n");
            }
            else if((n<=0 && m<=0) && (x>n && y<m))
            {
                printf("SE\n");
            }
            else if((n<=0 && m<=0) && (x<n && y>m))
            {
                printf("NO\n");
            }
            else if((n<=0 && m<=0) && (x<n && y<m))
            {
                printf("SO\n");
            }
        }
    }
    return 0;
}
