#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long n,k;
	cin >> n >> k;
	vector<int>A(max(n,k));
	for(int i=0;i<n;i++){
		cin >> A[i];
	}
	sort(A.begin(),A.end());
	long long S=0;
	for(int i=0;i<k;i++){
		S+=A.back();
		A.pop_back();
	}
	cout << S;
	return 0;
}