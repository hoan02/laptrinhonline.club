#include<stdio.h>
int tong(int n)
{
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=1<<(i+1)-1;
	}
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n+5];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d\n",tong(a[i]));
	}
	return 0;
}