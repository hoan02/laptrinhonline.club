#include<stdio.h>
int main(){
	long long m, x=1;
	scanf("%lld", &m);
	while(m>x){
		m/=x;
		x++;
	}
	printf("%lld",x);
	return 0;
}
