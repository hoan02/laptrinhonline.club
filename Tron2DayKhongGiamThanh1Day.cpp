#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n, m, x;
	vector<int>A;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		A.push_back(x);
	}
	cin >> m;
	for(int i=0;i<m;i++){
		cin >> x;
		A.push_back(x);
	}
	sort(A.begin(), A.end());
	for(int i=0;i<n+m;i++){
		cout << A[i] << " ";
	}
	return 0;
}