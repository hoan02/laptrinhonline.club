#include<bits/stdc++.h>
int main()

{
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m][n], b[m][n], c[m][n];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){	
			scanf("%d",&a[i][j]);
		}	
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}	
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			c[i][j] = a[i][j] + b[i][j];
			printf("%7d ", c[i][j]);
		}	
		printf("\n");
	}	
}