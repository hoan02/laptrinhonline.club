#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, h, m, cnt = 1;
	int a[25][61] = {};
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> h >> m;
		a[h][m] ++;
		if(a[h][m]>cnt)
			cnt = a[h][m];
	}	
	cout << cnt;
	return 0;
}