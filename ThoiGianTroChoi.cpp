#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Tran dau keo dai ");
	if(a==b) printf("24 gio");
	else if(a>b) printf("%d gio",b+24-a);
	else printf("%d gio",b-a);
}