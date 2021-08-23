#include <stdio.h>
 
int main() {
	long n, a[]={100, 50, 20, 10, 5, 2, 1};
	scanf("%ld",&n);
		printf("%ld\n",n);
	for(int i=0;i<=6;i++)
	printf("%ld to R$ %d,00\n",n/a[i],a[i]),n=n%a[i];
}