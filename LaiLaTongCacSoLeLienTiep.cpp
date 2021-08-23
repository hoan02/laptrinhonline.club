#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if(a>b) swap(a,b);
	if(a%2==0) a++;
	else a+=2;
	if(b%2==0) b--;
	else b-=2;
	printf("%lld", ((b-a)/2+1)*(a+b)/2);
	return 0;
}