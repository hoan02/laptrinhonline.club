#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int r[n+5], b[n+5], d[n+5];
	for(int i=0;i<n;i++){
		cin >> r[i] >> b[i] >> d[i];
		if(r[i]>b[i]) swap(r[i],b[i]);
	}
	for(int i=0;i<n;i++){
		int x=b[i]/r[i];
		if(b[i]-x*r[i]) x+=1;
		if(r[i]<1 || b[i]<1 || x-r[i]>d[i] ) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}