#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a>=b+c || b>=c+a || c>=a+b) printf("KHONG PHAI TAM GIAC");
	else{
		if(a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b) 
			printf("TAM GIAC VUONG\n");
		else if(a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b)
			printf("TAM GIAC TU\n");
		else if(a*a<b*b+c*c || b*b<a*a+c*c || c*c<a*a+b*b)
			printf("TAM GIAC NHON\n");		
		if(a==b && b==c) 
			printf("TAM GIAC DEU\n");
		else if(a==b || b==c || c==a)
			printf("TAM GIAC CAN");
	}
}