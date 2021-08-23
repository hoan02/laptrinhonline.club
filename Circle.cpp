#include<stdio.h>
int main()
{
	double r;
	scanf("%lf",&r);
	if(r<0)
		printf("NO CIRCLE");
	else
		printf("%.2lf\n%.2lf",2*3.1415*r,3.1415*r*r);
	return 0;
}