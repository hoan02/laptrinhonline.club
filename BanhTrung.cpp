#include<stdio.h>
int main(){
	int n, f1=0, f2=0, f3=0, sum=0, check=1;
	scanf("%d", &n);
	int a[n+5];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]==1) f1++;
		else if(a[i]==2) f2++;
		else if(a[i]==3) f3++;
		else sum++;
	}
	if(f2%2==0) check=0;
	int d2=f2/2;
	if(f1>f3){
		int x=f1-f3;
		if(!check) sum+=f3+d2+(x+3)/4;
		else{ 
			if(x<=2) sum+=f3+d2+1;
			else sum+=f3+d2+1+(x+1)/4;
		}
	}
	else if(f1<f3){
		sum+=d2+check+f3;
	}
	else{
		sum+=f1+(f2+1)/2;	
	}
	printf("%d", sum);
	return 0;
}