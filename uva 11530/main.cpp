#include <bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    char a[50];
    int i,t;
    int v=0,c=0,n=0,s=0;
   // printf("Enter the string:");
    cin>>t;
    for(i=0;i<t;i++)
    {
       gets(a);
       for(i=0;a[i]!='\0';i++)
       {
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            v++;
        }
        else if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
        {
            c++;
        }
        else if(a[i]>='0'&&a[i]<='9')
        {
            n++;
        }
        else if(a[i]==' ')
        {
            s++;
        }
    }
    printf("Vowel=%d \nConsonant=%d \nNumber=%d \nSpace=%d ",v,c,n,s);
  }
  return 0;
}
