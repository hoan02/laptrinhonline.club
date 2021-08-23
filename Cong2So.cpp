#include<bits/stdc++.h>
using namespace std;

int main()
{ 
	int a,b,n,i,s[1000];
   	scanf("%d",&n);
   	for(i=1;i<=n;i++) {scanf("%d%d",&a,&b); s[i]=a+b; }
   	for(i=1;i<=n;i++) {printf("%d\n",s[i]);}
   	return 0;
}