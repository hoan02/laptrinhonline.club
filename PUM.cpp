#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int x=1;
	for(int i=1;i<=n;i++){
		printf("%d %d %d Nam\n",x,x+1,x+2);
		x+=4;
	}
}