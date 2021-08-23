#include<stdio.h>

int main()
{
	long long n,x[51]={0,1,1};
	scanf("%lld",&n);
	for(int i=2;i<=n;i++){
		x[i]=x[i-1]+x[i-2];
	}
	printf("%0.1lf",x[n]*1.0);
}