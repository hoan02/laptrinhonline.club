#include<stdio.h>
int main(){
	int n, sum=0;
	scanf("%d", &n);
	double a[n+5];
	for(int i=1;i<=n;i++){
		scanf("%lf", &a[i]);
	}
	double Max=0;
	for(int i=1;i<=n;i++){
		if(a[i]/(n+1-i)>Max) Max=a[i]/(n+1-i);
		if(n==1) sum=a[1];
		if(i<n) sum+=a[i]+a[i+1];
	}
	printf("%.2lf\n%d", Max, sum);
	return 0;
}