#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	if(n<2009) printf("-1");
	else
	{
		if(n%100==0&&n%400!=0) printf("13");
		else if(n%4==0) printf("12");
		else printf("13");
		printf(".09.%d - Happy Programmer's Day!",n);
	}
}