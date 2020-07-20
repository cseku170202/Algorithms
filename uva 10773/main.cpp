#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int t,i,r=0;
    double d,v,u,p,R,t1,t2,angle,result=0.000;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>d>>v>>u;
        if(v<u && v!=0 && u!=0 && d!=0)
        {
            p=(-v)/u;
            angle=acos(p);
            R=sqrt((v*v)+(u*u)+2*v*u*cos(angle));
            t1=d/R;
            t2=d/u;
            result=abs(t1-t2);
            printf("Case %d: %0.3lf\n",i+1,result);
        }
        else
        {
             printf("Case %d: can't determine\n",i+1);
        }
      }
    return 0;
}
