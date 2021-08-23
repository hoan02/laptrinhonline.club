#include<stdio.h>

int main()
{
	int a,b,c,d;
	int h=0, p=0;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(b>d) h=(c-a+23)%24,p=d+60-b;
	else if(b<d) h=(c+24-a)%24,p=d-b;
	else if(a==c) h=24;
	else if(a>c) h=c+24-a;
	else h=c-a;
	printf("O JOGO DUROU %d HORA (S) E %d MINUTO (S)",h,p);
	return 0;
}