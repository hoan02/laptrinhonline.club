#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && b<=c) printf(":)");
	else if(a<b && b>=c) printf(":(");
	else if(a<b && b<c) printf((c-b)<(b-a)?":(":":)");
	else if(a>b && b>c) printf((b-c)<(a-b)?":)":":(");
	else if(a==b) printf((b>c)?":(":":)");
	return 0;
}