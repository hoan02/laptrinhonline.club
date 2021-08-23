#include<stdio.h>

int main()
{
	int a,b,c,d,dem=-1;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	for(int i=a;i<=b;i++){
		for(int j=c;j<=d;j++){
			if(i==j) {
				dem++;
			}
		}
	}
	printf((dem==-1)?"0":"%d",dem);
	return 0;
}
