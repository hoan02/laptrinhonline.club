#include<stdio.h>
int main()
{
	int n,k,x,y;
	scanf("%d%d%d%d",&n,&k,&x,&y);
	if(n<=k) printf("%d", n*x);
	else printf("%d", k*x+(n-k)*y);
	return 0;
}