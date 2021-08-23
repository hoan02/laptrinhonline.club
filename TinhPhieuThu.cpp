#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,a1,b,b1;
	float a2,b2;
	cin >> a >> a1 >> a2 >> b >> b1 >> b2;
	cout << "VALOR A PAGAR: R$ ";
	printf("%.2lf",a1*a2+b1*b2);
	return 0;
}