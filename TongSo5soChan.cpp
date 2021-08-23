#include<stdio.h>
int main(){
	int x, d=0, a[1000];
	while(1){
		scanf("%d", &x);
		if(x==0) break;
		else{
			d++;
			if(x%2) x++;
			a[d]=x;
		}
	}
	for(int i=1;i<=d;i++){
		printf("%d\n", a[i]*5+20);
	}
	return 0;
}