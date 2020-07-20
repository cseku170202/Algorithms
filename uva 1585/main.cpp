#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i;
    string s;
    cin>>t;
    while(cin>>s)
    {
        int c=0;
        int previous=0;
        for (i = 0;i<s.size();i++)
        {
            if (s[i]=='O')
            {
                previous++;
                c=c+previous;
            }
            else
            {
                previous=0;
            }
        }
       printf("%d\n",c);
    }
}
