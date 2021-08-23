#include <stdio.h>
 
int main(){
    long long n;
    scanf("%lld", &n);
    
    for(int i = 2; i <= n; i++){
	int dem=0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
        if(dem){
            if(dem > 1) printf("%d %d\n", i, dem);
            else printf("%d 1\n", i);
        }
    }
    return 0;
}