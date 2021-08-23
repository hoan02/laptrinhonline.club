#include<stdio.h>
int main()
{
	int DDD[8]={61,71,11,21,32,19,27,31};
	char Destinaion[8][30]={"Brasilia","Salvador","Sao Paulo","Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"};
	int n;
	scanf("%d",&n);
	int ok=0;
	for(int i=0;i<8;i++){
		if(n==DDD[i]) printf("%s",Destinaion[i]), ok=1;
	}
	if(ok==0) printf("DDD nao cadastrado");
}