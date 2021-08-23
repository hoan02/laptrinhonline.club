#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n+5], b[n+5];
	for(int i=0;i<n;i++){
		scanf("%d%d", &a[i], &b[i]);
		if(a[i]%2==0) a[i]++;
	}
	for(int i=0;i<n;i++){
		printf("%d\n", (a[i]+b[i]-1)*b[i]);
	}
	return 0;
}