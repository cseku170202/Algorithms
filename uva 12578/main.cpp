#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    double length,width,r,Area=0.00,rec=0.00,green;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>length;
        width=(6*length)/10;
        r=length/5;
        Area=3.14159265358979*(r*r);
        rec=length*width;
        green=rec-Area;
        printf("%0.2lf %0.2lf\n",Area,green);
    }
    return 0;
}
