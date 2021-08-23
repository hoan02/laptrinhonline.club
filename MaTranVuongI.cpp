#include<stdio.h>

int xoay(int n,int x,int y)
{
	int a,b,k;
	a=n+1-x;
	b=n+1-y;
	if(x<=a && x<=b && x<=y){
		k=x;
	}
	else if(b<=x && b<=a &&b<=y){
		k=b;
	}
	else if(a<=x && a<=b && a<=y){
		k=a;
	}
	else{
		k=y;
	}
	return k;
}

void test(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			printf("%d ", xoay(n,i,j));
			printf("\n");
	}
}

int main()
{	
	int x;
	do test(x);
	while(scanf("%d",&x) && x>0);
	return 0;
}