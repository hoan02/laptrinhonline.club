#include <stdio.h>
#define ll long long
int main() {
	char name[][30]={"$", "dangdungcntt", "tienquanutc", "quang123", "maianh", "nguyenminhduc2820"};
	int t, n;
	ll i;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(i=1;i*5<n;i*=2) {n-=i*5;}
		printf("%s\n",name[n/i+(n%i!=0)]);
	}
	return 0;
}