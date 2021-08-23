#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,a;
	scanf("%lld%lld%lld",&n,&m,&a);
	n=(n+a-1)/a;
	m=(m+a-1)/a;
	printf("%lld",n*m);
}