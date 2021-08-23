#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf((b>c && d>a && c+d>a+b && c>0 && d>0 && a%2==0)?"Chap nhan":"Khong chap nhan");
}