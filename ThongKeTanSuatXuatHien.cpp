#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n;
	cin >> n;
	unordered_map<int,int>a;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		a[x]++;
	}
	for(int i=-10000;i<=10000;i++){
		if(a[i]!=0) cout << i << " " << a[i] << endl;
	}
	return 0;
}