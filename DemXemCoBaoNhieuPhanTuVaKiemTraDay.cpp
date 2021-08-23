#include<bits/stdc++.h>
using namespace std;

int kiemtra(int a[], int n)
{
	for(int i=2;i<=n;i++) if(a[i]<=a[i-1]) return 0;
	return 1;
} 

int main()
{
	int n,c,d,a[1005],dem=0;
	scanf("%d%d%d",&n,&c,&d);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++) if(a[i]>=-c && a[i]<=d) dem++;
	printf("%d\n",dem);
	printf(kiemtra(a,n)?"YES":"NO");
}