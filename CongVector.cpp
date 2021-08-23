#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m, a[20005], b[20005], s[20005];
	cin >> m;
	for(int i=1;i<=m;i++) cin >> a[i];
	for(int i=1;i<=m;i++) cin >> b[i];
	for(int i=1;i<=m;i++) cout << a[i]+b[i] << "\n";
	return 0;
}