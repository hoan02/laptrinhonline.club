#include<stdio.h>
int main()
{
	long long n,x=1;
	scanf("%lld",&n);
	for(int i=0;i<n;i++) x*=n-i;
	printf("%lld",x);
	return 0;
}