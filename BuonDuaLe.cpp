#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, m, x;
	long long res=0;
	cin >> n >> k >> m;
	queue<pair<int,int>> Q;   //first: ngay bat dau    second:san luong
	for(int i=1;i<=n+k;i++){
		if(i<=n){
			cin >> x;
			Q.push({i, x});
		}
		while(Q.size() && i-Q.front().first+1 > k) Q.pop();
		long long sum=0;
		while(sum<m && Q.size()){
			if(Q.front().second+sum > m){
				Q.front().second -= m-sum;
				sum = m;
			}
			else{
				sum += Q.front().second;
				Q.pop();
			}
		}
		res += sum;
	}
	cout << res;
	return 0;
}