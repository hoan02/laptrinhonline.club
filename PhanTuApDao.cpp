#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
	unordered_map<int,int>A;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin >> x;
		A[x]++;
	}
	n/=2;
	for(auto p:A)
	{
		if(p.second>n){
			cout << p.first;
			return 0;
		}
	}
	cout << "khong co phan tu ap dao";
	return 0;
}
