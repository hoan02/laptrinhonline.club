#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll BFS(int n){
	queue<ll> Save;
	Save.push(6);
	Save.push(8);	
	while(Save.front() < 1e18){
		ll x = Save.front();
		Save.pop();
		if(x%n == 0){
			return x;
		}
		Save.push(x*10+6);
		Save.push(x*10+8);		
	}
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n;
	cin >> n;
	cout << BFS(n);
	return 0;
}