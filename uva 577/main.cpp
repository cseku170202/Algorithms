#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int i=0;
    while(cin>>a)
    {
        i++;
        if(a=="Hajj")
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        if(a=="Umrah")
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        if(a=="*")
        {
            break;
        }
    }
    return 0;
}
