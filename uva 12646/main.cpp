#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    while(cin>>A>>B>>C)
    {
        if(A==B && C!=A && C!=B)
        {
            printf("C\n");
        }
        else if(B==C && A!=B && A!=C)
        {
            printf("A\n");
        }
        else if(C==A && B!=C && B!=A)
        {
            printf("B\n");
        }
        else
        {
            printf("*\n");
        }

    }
    return 0;
}
