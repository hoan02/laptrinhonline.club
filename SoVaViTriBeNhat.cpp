#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int a[n+5];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int MIN = a[0], vitri=0;
	for(int i=1;i<n;i++){
		if(a[i]<MIN) {
			MIN=a[i];
			vitri=i;
		}
	}
	printf("Menor valor: %d\n",MIN);
	printf("Posicao: %d",vitri);
}