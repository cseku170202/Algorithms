#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    long long int t,i,d,r,sum=0;
    char ch[100];
    cin>>t;
    for(i=0;i<t;i++)
    {
        scanf("%s",ch);
        if(strcmp(ch,"donate")==0)
        {
            cin>>d;
            sum=sum+d;
        }
        else if(strcmp(ch,"report")==0){
             printf("%lld\n",sum);
        }
    }
    return 0;
}
