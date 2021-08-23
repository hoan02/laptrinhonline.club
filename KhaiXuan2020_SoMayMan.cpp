#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

ll a[]={0, 1, 2, 5};
void BFS(int n){
	queue<ll> Save;
	for(int i=1;i<=3;i++){
		Save.push(a[i]);
	}	
	while(Save.front() < 1e9){
		ll x = Save.front();
		Save.pop();
		if(x%n == 0){
			cout << x << endl;
		}
		for(int i=0;i<=3;i++){
			Save.push(x*10 + a[i]);
		}	
	}
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n;
	cin >> n;
	BFS(n);
	return 0;
}