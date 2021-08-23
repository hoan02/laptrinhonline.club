#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[20];
	gets(a);
	a[5]=' ', a[13]=' ';
	for(int i=0;i<19;i++) printf("%c",a[i]);
}