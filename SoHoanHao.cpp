#include<stdio.h>
bool hoanhao(long long x)
{ 
   long long i,s=0;
   for(i=1;i*i<x;i++)
   if(x%i==0)  s+=i+x/i;
   if(i*i==x) s+=i;   
   return s==2*x;
}
int main ()
{
	int n;
	long long a;
	scanf("%d\n",&n);
	while(n--)	
	{ 
	   scanf("%lld",&a) ;
	   printf(hoanhao(a)?"%lld eh perfeito\n":"%lld nao eh perfeito\n",a);
	}
}