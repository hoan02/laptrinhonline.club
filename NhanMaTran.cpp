#include<bits/stdc++.h>
using namespace std;

int main(){
  	long long a[105][105], b[105][105], c[105][105], i, j, k, m, n, p;
   	long long sum = 0;
   	scanf("%lld%lld%lld",&m ,&n ,&p);

   	for (i = 0; i < m; i++) {
    	for (j = 0; j < n; j++) {
        	scanf("%lld", &a[i][j]);
     	}
   	}
   	for (i = 0; i < n; i++) {
      	for (j = 0; j < p; j++) {
        	scanf("%lld", &b[i][j]);
      	}
   	}

   	for (i = 0; i < m; i++) {
      	for (j = 0; j < p; j++) {
         	sum = 0;
         	for (k = 0; k < n; k++) {
            	sum = sum + a[i][k] * b[k][j];
         	}
         	c[i][j] = sum;
      	}
   	}

   	for (i = 0; i < m; i++) {
      	for (j = 0; j < p; j++) {
         	printf("%10lld", c[i][j]);
      	}
      	printf("\n");
   	}
   	return 0;
}