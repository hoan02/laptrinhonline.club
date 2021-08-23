#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char s[100000];
	scanf("%d", &n);
	int a[n+5];
	for(int i=0;i<n;i++){
		scanf("%s", s);
		a[i]=strlen(s);
	}
	for(int i=0;i<n;i++){
		printf("%.2lf\n", 0.01*a[i]);
	}
	return 0;
}