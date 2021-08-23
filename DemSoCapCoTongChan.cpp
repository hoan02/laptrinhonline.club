#include<stdio.h>

int main()
{
	long long n,x=0,y=0;
	scanf("%lld",&n);
	long long a[n+5];
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		if(a[i]%2==0) x++;
		else y++;
	}
	printf("%lld",(x*(x-1)/2+y*(y-1)/2));
	return 0;
}