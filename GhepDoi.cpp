#include<bits/stdc++.h>
using namespace std;
int main()

{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>=b)
	printf("%d %d",b,(a-b)/2);
	else
	printf("%d %d",a,(b-a)/2);
	return 0;
}