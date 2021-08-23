#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[6];
	for(int i=1;i<=5;i++) scanf("%d",&a[i]); 
	int dem=0;
	for(int i=1;i<=5;i++) {
		if(a[i]%2==0) dem++;
	}
	printf("%d Gia tri",dem);
}