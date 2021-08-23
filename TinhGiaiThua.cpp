#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,a=1;
	scanf("%lld",&n);
	if(n==0||n==1) printf("1");
	else{
		for(int i=2;i<=n;i++) a*=i;
	printf("%lld",a);	
	}
}