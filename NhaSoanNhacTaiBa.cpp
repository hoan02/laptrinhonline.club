#include<stdio.h>
int main(){
	int a[10];
	for(int i=1;i<=8;i++){
		scanf("%d", &a[i]);
	}
	if(a[1]>a[2] && a[2]>a[3] && a[3]>a[4] && a[4]>a[5] && a[5]>a[6] && a[6]>a[7] && a[7]>a[8]) printf("GIAM");
	else if(a[1]<a[2] && a[2]<a[3] && a[3]<a[4] && a[4]<a[5] && a[5]<a[6] && a[6]<a[7] && a[7]<a[8]) printf("TANG");
	else printf("KHONGBIET");
	return 0;
}