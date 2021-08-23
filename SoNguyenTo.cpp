#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	if(n<2){
		printf("NO"); 
		return 0;
	}
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i == 0) dem++;
	}
	if(dem == 0) printf("YES");
	else printf("NO");
}