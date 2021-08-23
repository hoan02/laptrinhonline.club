#include<stdio.h>
int main()
{
	int dem=0;
	double tong=0;
	double a[7];
	for(int i=1;i<=6;i++) scanf("%lf",&a[i]);
	for(int i=1;i<=6;i++){
		if(a[i]>0){
			dem++;
			tong+=a[i];
		}
	}
	printf("%d Gia tri duong\n",dem);
	printf((dem==0)?"0.0":"%0.1lf",tong/dem);	
}