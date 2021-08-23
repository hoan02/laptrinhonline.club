#include<bits/stdc++.h>
using namespace std;

int main()
{
	int d;
	scanf("%d",&d);
	int a[6];
	for(int i=1;i<=5;i++) scanf("%d",&a[i]);
	int dem=0;
	for(int i=1;i<=5;i++){
		if(a[i] == d) dem++;
	} 
	printf("%d",dem);
}