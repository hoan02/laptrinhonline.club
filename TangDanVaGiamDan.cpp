#include<stdio.h>
int main()
{
	int x,y;
	while(1){
		scanf("%d%d",&x,&y);
		if(x==y) break;
		printf((x<y)?"Crescente\n":"Decrescente\n");
	}
	return 0;
}