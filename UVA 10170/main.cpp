#include<bits/stdc++.h>
#include<iostream>
#include <stdio.h>
using namespace std;

int main() {
    long long s, d;
    while(cin>>s>>d)
    {
        long long i = s, sum = 0;
        while(1)
        {
            sum += i;
            if(sum >= d)
            {
                printf("%lld\n", i);
                break;
            }
            i++;
        }
    }
    return 0;
}
