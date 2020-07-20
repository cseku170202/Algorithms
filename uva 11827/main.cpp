#include <bits/stdc++.h>
#include <sstream>
#include <string>

using namespace std;

/***
int GCD(int a, int b)
{
    int x;
    if(a<b)
     x=a;
    else
     x=b;
    again:if(a%x==0&&b%x==0)
    {
       return x;
    }
    else
    {
        x--;
        goto again;
    }
    return 0;
}

int main()
{
    int t,i,n=0,A[100]={0},j,k,p=0;
    string s;
    cin>>t;
    getline(cin,s);
    for(i=0;i<t;i++)
    {
        getline(cin,s);
        istringstream is(s);
        n=0;
		while(is>>A[n])
        {
            n++;
        }
        int B[100]={0};
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
               B[p]=GCD(A[j],A[k]);
               p++;
            }
        }
        sort(B,B+p);
        printf("%d\n",B[p-1]);
    }
    return 0;
}
***/




int gcd(int a, int b){
	if(a%b==0) return b;
	return gcd(b,a%b);
}

int main(){
	int T,N,a[99],ans;
	string s;
	cin>>T;
	getline(cin,s);
	while(T--){
		getline(cin,s);
		istringstream is(s);
		N = 0;
		while(is>>a[N]) ++N;
		ans = 0;
		for(int i = 0;i<N;++i)
			for(int j = i+1;j<N;++j)
				ans = max(ans,gcd(a[i],a[j]));

          cout<<ans<<endl;
	}
	return 0;
}

