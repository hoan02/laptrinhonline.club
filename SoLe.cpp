#include<stdio.h>
int main(){
	int n,x=-1;
	scanf("%d", &n);
	while(x+=2){
		if(x>n) break;
		printf("%d\n", x);
	}
	return 0;
}