#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,b;
	scanf("%lf%lf",&a,&b);
	printf("Tong: R$ ");
	if(a==1) printf("%0.2lf",4*b);
	if(a==2) printf("%0.2lf",4.5*b);
	if(a==3) printf("%0.2lf",5*b);
	if(a==4) printf("%0.2lf",2*b);
	if(a==5) printf("%0.2lf",1.5*b);
}