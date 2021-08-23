#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n;
	cin >> n;
	pair<int,int>p[n];
	map<int,int>m;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		p[i].first = x;
		p[i].second = i;
		m[i] = 1;           // danh dau cay song
	}
	sort(p,p+n);
	int count=0;
	for(auto x:p){
		if(m[x.second] == 1){
			count++;
			m[x.second] = 0;
			if(x.second == 0){
				m[x.second + 1]=0;         // cay dau tien chet
			}
			else if(x.second == n-1) m[x.second-1]=0; // cay cuoi cung chet
			else{
				m[x.second+1] = 0;     // cay ben phai chet
				m[x.second-1] = 0;     // cay ben trai chet
			}
		}
	}
	cout << count;
	return 0;
}