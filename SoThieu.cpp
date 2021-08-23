#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	map<int,int>A;
	int n, m, x;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		A[x]++;
	}
	map<int,int>B;
	cin >> m;
	for(int i=0; i<m; i++){
		cin >> x;
		B[x]++;
	}
	for(int i=1;i<2e5;i++){
		if(B[i]-A[i]) cout << i << " ";
	}
	return 0;
}