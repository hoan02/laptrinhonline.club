#include<stdio.h>
int main()
{
	int a,b,sum=0;
	scanf("%d%d",&a,&b);
	if(a>b){
		int t=a;
		a=b;
		b=t;
	}
	for(int i=a+1;i<b;i++){
		if(i%2!=0) sum+=i;
	}
	printf("%d",sum);
	return 0;
}