#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int a[n+3];
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	int dem[6]={0,0,0,0,0,0};
	for(int i=1;i<=n;i++){
		if(a[i]%2==0) dem[2]++;
		if(a[i]%3==0) dem[3]++;
		if(a[i]%4==0) dem[4]++;
		if(a[i]%5==0) dem[5]++;
	}
	for(int i=2;i<=5;i++) printf("%d Multiplo(s) de %d\n",dem[i],i);
}