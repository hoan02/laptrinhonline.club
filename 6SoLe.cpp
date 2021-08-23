#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n%2==0) n+=1;
	for(int i=n;i<=n+10;i+=2) cout << i << "\n";
	return 0;
}