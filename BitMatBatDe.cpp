#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k, cnt=1;
	cin >> n >> k;
	queue<int>Q;
	for(int i=1;i<=n;i++){
		Q.push(i);
	}
	while(Q.size()>1){
		int a=Q.front();
		Q.pop();
		if(cnt != k){
			Q.push(a);
			cnt++;
		}
		else 
			cnt=1;
	}
	cout << Q.front();
	return 0;
}