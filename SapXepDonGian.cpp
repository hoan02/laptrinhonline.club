#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int min=a<b&a<c?a:(b<c?b:c);
    int max=a>b&a>c?a:(b>c?b:c);
    printf("%d\n%d\n%d\n%d\n%d\n%d",min,a+b+c-max-min,max,a,b,c);
}