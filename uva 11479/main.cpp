#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,a,b,c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if((a+b<=c)|| (b+c<=a)|| (a+c<=b))
        {
            printf("Case %d: Invalid\n",i+1);
        }
        else if(((a+b>c) || (b+c>a) || (a+c>b))&& a==b && b==c)
        {
            printf("Case %d: Equilateral\n",i+1);
        }
        else if(((a+b>c) || (b+c>a) || (a+c>b)) && (a==b || b==c || a==c))
        {
            printf("Case %d: Isosceles\n",i+1);
        }
        else if(((a+b>c) || (b+c>a) || (a+c>b)) && (a!=b && b!=c && a!=c))
        {
            printf("Case %d: Scalene\n",i+1);
        }
    }
    return 0;
}
