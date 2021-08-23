#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a>0 && b>0 && c>0)
		printf("R1 = %0.2lf\nR2 = %0.2lf\nR3 = %0.2lf",b+c+b*c/a,a+c+a*c/b,a+b+a*b/c);	
	else printf("No");
}