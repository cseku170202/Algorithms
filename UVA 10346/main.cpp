#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int n,k;
	while(cin>>n>>k)
    {
		printf("%d\n", n + (n - 1) / (k - 1));
	}
	return 0;
}

