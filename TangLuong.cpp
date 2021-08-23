#include<bits/stdc++.h>
using namespace std;

int main() {
    float x;
    scanf("%f",&x);
    if(x<=400) 
		printf("Luong: %.2f\nTien kiem duoc: %.2f\nTy le phan tram: 15%%",x+x*.15,x*.15);
    else if(x>=400.01&&x<=800) 
		printf("Luong: %.2f\nTien kiem duoc: %.2f\nTy le phan tram: 12%%",x+x*.12,x*.12);
    else if(x>=800.01&&x<=1200) 
		printf("Luong: %.2f\nTien kiem duoc: %.2f\nTy le phan tram: 10%%",x+x*.1,x*.1);
    else if(x>=1200.01&&x<=2000) 
		printf("Luong: %.2f\nTien kiem duoc: %.2f\nTy le phan tram: 7%%",x+x*.07,x*.07);
    else 
		printf("Luong: %.2f\nTien kiem duoc: %.2f\nTy le phan tram: 4%%",x+x*.04,x*.04);
}