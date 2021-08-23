// ba chu so tan cung
// ->a^n%1000

#include<bits/stdc++.h>
using namespace std;

long long tancung(long long a, long long n)
{
	if(n==0) return 1;
	if(n%2==0) return tancung(a*a%1000,n/2);
	return a*tancung(a*a%1000,n/2)%1000;
}

int main()
{
	long long a,n;
	scanf("%lld%lld",&a,&n); a=a%1000;
	printf("%0.3lld",tancung(a,n));
	return 0;
}