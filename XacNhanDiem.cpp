#include<stdio.h>

int main(){
	int d=2;
	float x, sum=0;
	do{
		scanf("%f", &x);
		if(x>10 || x<0) printf("Nhap sai\n");
		else{
			sum+=x;
			d--;
		}
	}
	while(d);
	printf("TB = %.2f", sum/2);
	return 0;
}