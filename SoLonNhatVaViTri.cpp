#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[105],vitri, max=0;
	for(int i=1;i<=100;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=100;i++){
		if(a[i]>max){
			max=a[i];
			vitri=i;
		}
	}
	printf("%d\n%d",max,vitri);		
}