#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n;
	cin >> n;
	map<int,int>a;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		a[x]++;
	}
	int max=0;
	for(auto p:a){
		if(p.second>max) max=p.second;
	}
	cout << max << endl;
	for(auto p:a){
		if(p.second==max) cout << p.first << " ";
	}
	return 0;
}