#include<bits/stdc++.h>
using namespace std;

int soTanCung(int d, int n, int m){
	if(m==0) return d;
	d*=n;
	d%=10;
	return soTanCung(d,n,m-1);
}

int main()
{
	int d,n,m;
	cin >> n >> m;
	cout << soTanCung(1,n,m);
	return 0;
}