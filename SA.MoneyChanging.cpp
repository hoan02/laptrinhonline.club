#include<stdio.h>
int main()
{
	int n,d=0;
	scanf("%d",&n);
	n=1000-n;
	d+=n/500;n=n%500;
	d+=n/100;n=n%100;
	d+=n/50;n=n%50;
	d+=n/10;n=n%10;
	d+=n/5;n=n%5;
	d+=n;
	printf("%d",d);
	return 0;
}
