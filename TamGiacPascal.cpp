//Tam giac pascal
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int n;
	ll *a[100]; /// mot mang 100 con tro tu a0 den a99
	scanf("%d",&n);
	for(int i=0;i<=n;i++) a[i]=(ll *)malloc((i+1)*sizeof(ll));
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			if(j==0 || j==i) a[i][j]=1;
			else a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}

	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<=n;i++) free(a[i]);
}