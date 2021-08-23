#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n+5];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		printf("%d\n", a[i]%2);
	}
	return 0;
}