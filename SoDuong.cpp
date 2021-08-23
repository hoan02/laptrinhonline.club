#include<stdio.h>
int main()
{
	double a[6];
	for(int i=0;i<6;i++)
	scanf("%lf",&a[i]);
	int dem=0;
	for(int i=0;i<6;i++)
		if(a[i]>0) dem++;
	printf("%d so duong",dem);	
}