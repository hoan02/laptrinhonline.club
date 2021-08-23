#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[15];
	for(int i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<=9;i++){
		if(a[i]<=0) a[i]=1;
	}	
	for(int i=0;i<=9;i++)
		printf("X[%d] = %d\n",i,a[i]);
}