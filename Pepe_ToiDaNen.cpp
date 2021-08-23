#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int a[n+5],b[n+5],c[n+5];
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}
	for(int i=1;i<=n;i++){
		printf("\n%02d:%02d - ",a[i],b[i]);
		printf((c[i]==1)?"Canh cua mo ra!":"Canh cua dong lai!");
	}
	return 0;
}