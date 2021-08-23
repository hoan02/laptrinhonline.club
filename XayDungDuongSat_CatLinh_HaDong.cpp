#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m;
	map<int,int>a,b;
	cin >> n >> m;
	
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		a[x]++;
	}
	for(int i=0;i<m;i++){
		int x;
		cin >> x;
		b[x]++;
	}
	int count=0;
	for(int i=1;i<=1000;i++){
		count += min(a[i],b[i]);
	}
	cout << count;
	return 0;
}