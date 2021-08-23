#include<bits/stdc++.h>
using namespace std;

void sosanh (int x, int y)
{
	if(y>x) printf("TIEN");
	else if(y<x) printf("LUI");
	else printf("DUNG");
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n+3], b[n+3], c[n+3];
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	} 
	
	for(int i=1;i<=n;i++){
		sosanh(a[i],b[i]);
		printf(" ");
		sosanh(b[i],c[i]);
		printf("\n");
	}
}