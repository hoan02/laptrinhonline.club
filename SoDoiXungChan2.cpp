#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	if(n<10) 
		printf("%d%d",n,n);
	else if(n<100)
		{a=n%10; b=n/10;
		 printf("%d%d%d",n,a,b);}
	else if(n<1000)
		{a=n%10; b=n/10%10; c=n/100;
	 	 printf("%d%d%d%d",n,a,b,c);}
	else
		printf("10000001");
	return 0;
}