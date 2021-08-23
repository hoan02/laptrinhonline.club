#include<bits/stdc++.h>
using namespace std;
int d=0;
void thap(int n, char A, char B, char C)
{
	if(n==0) return;
	thap(n-1,A,C,B); 
	printf("Buoc%d Chuyen dia %d tu %c sang %c\n",++d,n,A,B);
	thap(n-1,C,B,A);
}
int main()
{
	int n;
	scanf("%d",&n);
	thap(n,'A','B','C');
}