#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,tb;
	scanf("%d",&n);
	int t=0, a[2005];
	for(int i=1;i<=n;i++) scanf("%d", &a[i]);
	for(int i=1;i<=n;i++) t+=a[i];
	int dem=0;	
	tb = t/n;
	for(int i=1;i<=n;i++) 
		if(a[i]<tb) dem++;
	printf("%d %d",tb,dem);	
}