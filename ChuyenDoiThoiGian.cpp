#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n/3600;
	b=n/60-a*60;
	c=n%60;
	printf("%d:%d:%d",a,b,c);
}