#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,b;
	scanf("%lf%lf",&a,&b);
	if(a>b) swap(a,b);
	printf("%0.2lf",(b-a)/2*(b-(b-a)/2));
}