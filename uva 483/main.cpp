#include <bits/stdc++.h>

using namespace std;
string reverse_process(string s)
{
    string s2;
    int l=s.length();
    for(int i=l-1;i>=0;i--)
    {
        s2+=s[i];
    }
    return s2;
}
int main()
{
    string s,s2,temp;
    while(getline(cin,s))
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                s2+=s[i];
            }
            else
            {
                temp+=s[i];
                if(s[i+1]==' '||s[i+1]=='\0')
                {
                   // temp=reverse_process(temp);
                   reverse(temp.begin(),temp.end());
                    s2+=temp;
                    temp.erase();
                }
            }
        }
        cout << s2 <<"\n";
        s2.erase();
    }
    return 0;
}
