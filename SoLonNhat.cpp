#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a<b && b<c) printf ("Max = %d ",c);
    else if(b<a&& c<a) printf ("Max = %d",a);
    else  printf("Max = %d",b);
}