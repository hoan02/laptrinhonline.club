#include<stdio.h>
#include<string.h>
int main(){
	char a[15], b[15], c[15];
	scanf("%s\n%s\n%s", a, b, c);
	int x=strlen(a);
	int y=strlen(b);
	int z=strlen(c);
	if(x==10){
		if(y==3){
			if(z==9) printf("aguia");
			else printf("pomba");
		}
		else{
			if(z==7) printf("homem");
			else printf("vaca");
		}
	}
	else{
		if(y==6){
			if(z==10) printf("pulga");
			else printf("lagarta");
		}	
		else{
			if(z==10) printf("sanguessuga");
			else printf("minhoca");		
		}
	}
	return 0;
}