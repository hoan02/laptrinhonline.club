#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,S;
	int goc;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&goc);
	S=a*b*sin(goc*3.14159265/180);
	printf("%0.3lf",S);
}