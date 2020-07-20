#include <bits/stdc++.h>

using namespace std;
float c_to_f(int C)
{
    float fe;
    fe=(9/5)*C+32;
    return fe;
}

float f_to_c(float d)
{
    float ce;
    ce=(5/9)*(d-32);
    return ce;
}

int main()
{
    int t,i,j;
    int C,d;
    float p,q,r;
    float f;
    cin>>t;
    for(i=0;i<t;i++)
    {
           cin>>C>>d;
           p=c_to_f(C);
           q=p+d;
           r=f_to_c(q);
           printf("Case %d: 0.2%f\n",i+1,r);
    }
    return 0;
}
