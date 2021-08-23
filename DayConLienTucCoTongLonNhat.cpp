#include<stdio.h>
int main()
{
	int n, x;
	scanf("%d", &n);
	int max=-1005, sum=0;
	while(n--){
		scanf("%d", &x);
		sum+=x;
		if(max<sum) max=sum;
		if(sum<0) sum=0;
	}
	printf("%d",max);
	return 0;
}