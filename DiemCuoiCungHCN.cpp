#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a==c) printf("%d",e);
	else if(a==e) printf("%d",c);
	else printf("%d",a);
	printf(" ");
	if(d==b) printf("%d",f);
	else if(d==f) printf("%d",b);
	else printf("%d",d);
	return 0;
}