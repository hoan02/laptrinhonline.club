#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[5];
	for(int i=1;i<=3;i++)
	scanf("%d",&a[i]);
	if(a[1]==a[2]||a[2]==a[3]||a[3]==a[1]) printf("KHONG CO SO O GIUA");
	else {
		for (int i=1;i<=3;i++){
			for (int j=i+1;j<=3;j++){
				if(a[i]>a[j]){
					int tg = a[i];
					a[i] = a[j];
					a[j] = tg;
				}
			}
		}
		printf("%d",a[2]);
	}
}