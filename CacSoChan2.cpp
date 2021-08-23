#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2!=0) n-=1;
	for(int i=2;i<=n;i+=2){
		printf("%d\n",i);
	}
	return 0;
}