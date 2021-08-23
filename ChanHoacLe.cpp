#include<bits/stdc++.h>
using namespace std;

void kiemtra(int x){
	if(x>0&&x%2==0) printf("EVEN POSITIVE\n");
	else if(x>0&&x%2!=0) printf("ODD POSITIVE\n");
	else if(x<0&&x%2==0) printf("EVEN NEGATIVE\n");
	else if(x<0&&x%2!=0) printf("ODD NEGATIVE\n");
	else printf("NULL\n");
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n+5];
	for(int i=1;i<=n;i++) scanf("%d", &a[i]);
	for(int i=1;i<=n;i++) {
		kiemtra(a[i]);
	}
}