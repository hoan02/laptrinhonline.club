#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,c;
	double cv,dt,p;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a<b+c && b<a+c && c<a+b){
		printf("Chu vi = %.1lf",a+b+c);
	}
	else printf("Dien tich = %.1lf",(a+b)*c/2);
	return 0;
}