#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n, x, cnt1=0, sum1=0, sum=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		sum+=x;
		if(x%2!=0){
			cnt1++;
			sum1+=x;
		}
	}
	if(!cnt1) cout << "0";
	else cout << sum1/cnt1;
	cout << "\n";
	if(cnt1==n) cout << "0";
	else cout << (sum-sum1)/(n-cnt1);
	return 0;
}