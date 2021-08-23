#include<stdio.h>
int main()
{
	int a[5];
	int tong=0;
	for(int i=1;i<5;i++){
		scanf("%d",&a[i]);
		tong+=a[i];
	}
	printf("%d",tong-3);
}