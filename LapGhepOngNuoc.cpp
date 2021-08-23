// C++ program to demonstrate min heap
//https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/	


#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	ll n, k, x, sum=0, SUM=0;
	cin >> n >> k;
	priority_queue<ll, vector<ll>, greater<ll> >a; //sap xep tang 
	for(int i=0;i<n;i++){
		cin >> x;
		a.push(x);
	}
	while(a.size()>k){
		for(int i=0;i<k;i++){
			sum+=a.top();
			a.pop();
		}
		a.push(sum);
		SUM+=sum;
		sum=0;
	}
	while(a.size()){
		SUM+=a.top();
		a.pop();
	}
	cout << SUM;
	return 0;
}
