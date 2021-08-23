#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll xoay(int n,int x,int y)
{
	ll kq;
	int a,b,k;
	a=n+1-x;
	b=n+1-y;
	if(x<=a && x<=b && x<=y){
		k=x-1;
		kq=4*k*(n-k)+ y-k;
	}
	else if(b<=x && b<=a &&b<=y){
		k=b-1;
		kq=4*k*(n-k)+ n-2*k-1 + x-k;
	}
	else if(a<=x && a<=b && a<=y){
		k=a-1;
		kq=4*k*(n-k)+ 2*(n-2*k-1) + b-k;
	}
	else{
		k=y-1;
		kq=4*k*(n-k)+ 3*(n-2*k-1) + a-k;
	}
		return kq;
}


int main()
{
	int n,j,i=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			printf("%10lld", xoay(n,i,j));
			printf("\n");
	}
	return 0;
}
