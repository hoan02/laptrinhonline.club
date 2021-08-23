#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n;
	cin >> n;
	vector<int>a;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	int max=0;
	for(int i=n-1;i>=0;i--){
		if(a[i]+n-i+1>max){
			max=a[i]+n-i+1;
		}
	}
	cout << max;	
	return 0;
}