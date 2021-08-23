#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	unordered_map<ll,ll>A;
	for(int i=0;i<n;i++){
		ll x;
		cin >> x;
		A[x]++;
	} 
	ll sum=0;
	for(int i=0;i<=1e5;i++) sum+=A[i]*(A[i]-1)/2;
	cout << sum;
	return 0;
}