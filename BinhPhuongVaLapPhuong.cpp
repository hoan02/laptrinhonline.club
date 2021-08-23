#include<bits/stdc++.h>
using namespace std;

int bp(int x) {return x*x;}
int lp(int x) {return x*x*x;}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	printf("\n%d %d %d",i,bp(i),lp(i));
}