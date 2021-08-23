#include<stdio.h>
int main()
{
	double s;
	double tong=0;
	for(int i=1;i<=100;i++){
		tong += 1.0/i;
	}
	printf("%0.6lf",tong);
}