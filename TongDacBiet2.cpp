#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,k,L,R,a[100005],b[100005],m=0;
	scanf("%lld",&n);
	for(k=2;k*k<=2*n;k++)
	if(2*n%k==0){
		L=2*n/k+1-k;
		if(L%2==0){
			L/=2;
			R=L+k-1;
			m++;
			a[m]=L;
			b[m]=R;
		}
	}
	printf("%lld\n", m);
	for(int i=1;i<=m;i++)
		printf("%lld %lld\n",a[i],b[i]);
}