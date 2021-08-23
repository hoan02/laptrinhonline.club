#include<stdio.h>
int main(){
	char month[15][20]={" ","Thang Mot","Thang Hai","Thang Ba","Thang Tu","Thang Nam","Thang Sau","Thang Bay","Thang Tam","Thang Chin","Thang Muoi","Thang Muoi mot","Thang Muoi hai"};
	int x;
	scanf("%d", &x);
	if(x>0 && x<13) printf("%s", month[x]);
	else printf("Khong co");
	return 0;
}