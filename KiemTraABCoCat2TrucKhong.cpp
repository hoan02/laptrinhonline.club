#include<bits/stdc++.h>
using namespace std;

int main()
{
	double xA,yA,xB,yB;
	scanf("%lf%lf%lf%lf",&xA,&yA,&xB,&yB);
	printf((xA*xB<0 && yA*yB<0)?"YES":"NO"); 
}