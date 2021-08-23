#include<bits/stdc++.h>
using namespace std;

int bp(int x)
{
	return x*x;
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i+=2)
	printf("%d ^ 2 = %d\n",i,bp(i));
}