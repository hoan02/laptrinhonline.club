#include<stdio.h>

int main()
{
	int a,b,sum=0;
	scanf("%d",&a);
	while(b<=0){
		scanf("%d",&b);
	}
	for(int i=a;i<a+b;i++){
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}