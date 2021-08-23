#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	double a[n+5];
	double tong=0,tich=1;
	int dem1=0,dem2=0;
	for(int i=1;i<=n;i++) scanf("%lf",&a[i]);
	for(int i=1;i<=n;i++){
		if(a[i]<0){
			tong+=a[i];
			dem1++;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]>0){
			tich*=a[i];
			dem2++;
		}
	}
	printf((dem1==0)?"khong co so am\n":"%lf\n",tong/dem1);
	printf((dem2==0)?"khong co so duong":"%lf",pow(tich,1.0/dem2));
}