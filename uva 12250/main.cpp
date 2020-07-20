#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i=0;
    while(cin>>s)
    {
        if(s=="HELLO")
        {
            i++;
            printf("Case %d: ENGLISH\n",i);
        }
        else if(s=="HOLA")
        {
            i++;
            printf("Case %d: SPANISH\n",i);
        }
        else if(s=="HALLO")
        {
            i++;
            printf("Case %d: GERMAN\n",i);
        }
        else if(s=="BONJOUR")
        {
            i++;
            printf("Case %d: FRENCH\n",i);
        }
        else if(s=="CIAO")
        {
            i++;
            printf("Case %d: ITALIAN\n",i);
        }
        else if(s=="ZDRAVSTVUJTE")
        {
            i++;
            printf("Case %d: RUSSIAN\n",i);
        }
        else if(s=="#")
        {
            break;
        }
        else{
            i++;
            printf("Case %d: UNKNOWN\n",i);
        }
    }
    return 0;
}
