#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	double a[n+5],b[n+5],c[n+5];
	for(int i=1;i<=n;i++)
	scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
	for(int i=1;i<=n;i++){
		printf("%0.1lf\n",(a[i]*2+b[i]*3+c[i]*5)/10);
	}
}