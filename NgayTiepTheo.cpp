#include<bits/stdc++.h>
using namespace std;
struct ngay
{
	int d,m,y;
};
int nhuan(int y) {return y%400==0||(y%4==0 && y%100!=0);}
int cuoithang(ngay A)
{
	int songay[]={0,31,28+nhuan(A.y),31,30,31,30,31,31,30,31,30,31};
	return A.d==songay[A.m];
}
int main()
{
	ngay A;
	scanf("%d/%d/%d",&A.d,&A.m,&A.y);
	if(cuoithang(A)) {A.d=1;A.m++; if(A.m==13) {A.m=1;A.y++;}}	
	else A.d++;
	printf("%d/%d/%d",A.d,A.m,A.y);
}