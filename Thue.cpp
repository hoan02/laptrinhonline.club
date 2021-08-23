#include<stdio.h>
int main()
{
	double a;
	scanf("%lf",&a);
	if(0<=a && a<=2000) 
		printf("Isento");
	else if(2000.01<=a && a<=3000) 
		printf("R$ %0.2lf",(a-2000)*0.08);
	else if(3000.01<=a && a<=4500)
		printf("R$ %0.2lf",80+(a-3000)*0.18);
	else 
		printf("R$ %0.2lf",80+270+(a-4500)*0.28);		
}