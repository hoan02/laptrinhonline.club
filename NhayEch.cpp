#include<bits/stdc++.h>
using namespace std;

int main()
{
	int d,n;
	scanf("%d%d",&d,&n);
	int a[n+3];
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	int dem=0;
	for(int i=1;i<n;i++){
		if(a[i]+d>=a[i+1]) dem++;
	}
	printf((dem==n-1)?"YOU WIN":"GAME OVER");
	return 0;
}